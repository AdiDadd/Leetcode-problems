int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}


int longestConsecutive(int* nums, int numsSize) {
    
    if(numsSize == 0) return 0;

    qsort(nums, numsSize, sizeof(int), cmp);

    int len = 1;
    int max = 1;

    for(int i = 0; i < numsSize-1; i++){
        if(nums[i]+1 == nums[i+1]){
            len++;
            if(max < len) max = len;
        }else if(nums[i] == nums[i+1]){
            continue;
        }else{
            len = 1;
        }
    }

    return max;
}