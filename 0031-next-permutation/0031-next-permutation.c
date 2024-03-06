int cmpfn(void* a, void* b)
{
    return *(int*)a - *(int*)b;
}

void nextPermutation(int* nums, int numsSize) {

    if (numsSize < 2)
        return;
    
    for (int i = numsSize - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            int c = i + 1;
            for (int k = i + 2; k < numsSize; k++)
                if (nums[k] > nums[i] && nums[k] < nums[c])
                    c = k; 
            
            int t = nums[i];
            nums[i] = nums[c];
            nums[c] = t;

            if (i == numsSize - 2)
                return;
            qsort(&nums[i+1], numsSize - i - 1, sizeof(int), cmpfn);
            return;
        }
    }

    qsort(nums, numsSize, sizeof(int), cmpfn);
}