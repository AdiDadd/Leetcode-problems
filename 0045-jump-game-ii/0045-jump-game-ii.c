int jump(int* nums, int numsSize) {
      int count = 0;
    int currentReach = 0;
    int nextReach = 0;
    
    if (numsSize <= 1)
        return 0;
    
    for (int i = 0; i < numsSize - 1; i++) {
        nextReach = fmax(nextReach, i + nums[i]);
        
        if (i == currentReach) {
            count++; 
            currentReach = nextReach;
        }
    }
    return count;
}