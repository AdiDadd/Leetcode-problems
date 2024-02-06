int singleNumber(int* nums, int numsSize) {
     int Num = 0;
    for (int i = 0; i < numsSize; i++) {
        Num = Num ^ nums[i];
    } return Num;
}