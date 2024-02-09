int climbStairs(int n) {
    int nums[2] = {1, 1};
    for (int i = 2; i <= n; ++i) {
        nums[i % 2] = nums[0] + nums[1];
    }
    return nums[n % 2];
}