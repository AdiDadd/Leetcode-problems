int removeDuplicates(int* nums, int numsSize) {
    int new_size = numsSize;
    for (int k = 0, i = 0, j = 1; i < numsSize; k++, j++) {
        while(j < numsSize && nums[i] == nums[j]) {
            j++;
            new_size--;
        }
        nums[k] = nums[j-1];
        i = j;
    }
    return new_size;
}