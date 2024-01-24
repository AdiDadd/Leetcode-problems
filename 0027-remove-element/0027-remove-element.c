int removeElement(int* nums, int numsSize, int val) {
    int k = 0;  // Variable to store the count of elements not equal to val
    
    // Iterate through the array
    for (int i = 0; i < numsSize; i++) {
        // If the current element is not equal to val
        if (nums[i] != val) {
            // Move the non-equal element to the beginning of the array
            nums[k++] = nums[i];
        }
    }
    
    return k;  // Return the count of elements not equal to val
}

int Main() {
    // Example 1
    int nums1[] = {3, 2, 2, 3};
    int val1 = 3;
    int expectedNums1[] = {2, 2};
    int k1 = removeElement(nums1, 4, val1);

    // Example 2
    int nums2[] = {0, 1, 2, 2, 3, 0, 4, 2};
    int val2 = 2;
    int expectedNums2[] = {0, 1, 4, 0, 3};
    int k2 = removeElement(nums2, 8, val2);

    // Printing the results
    printf("Example 1: k = %d\n", k1);
    for (int i = 0; i < k1; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    printf("Example 2: k = %d\n", k2);
    for (int i = 0; i < k2; i++) {
        printf("%d ", nums2[i]);
    }
    printf("\n");

    return 0;
}
