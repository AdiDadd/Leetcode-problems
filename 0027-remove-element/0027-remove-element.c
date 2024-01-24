int removeElement(int* nums, int numsSize, int val) {
    int k = 0;  
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k++] = nums[i];
        }
    }    
    return k;
}

int Main() {

    int nums1[] = {3, 2, 2, 3};
    int val1 = 3;
   // int expectedNums1[] = {2, 2};
    int k1 = removeElement(nums1, 4, val1);
    
    int nums2[] = {0, 1, 2, 2, 3, 0, 4, 2};
    int val2 = 2;
   // int expectedNums2[] = {0, 1, 4, 0, 3};
    int k2 = removeElement(nums2, 8, val2);

    printf("%d\n", k1);
    for (int i = 0; i < k1; i++) {
        printf("%d\n ", nums1[i]);
    }

    printf("%d\n", k2);
    for (int i = 0; i < k2; i++) {
        printf("%d\n ", nums2[i]);
    }

    return 0;
}
