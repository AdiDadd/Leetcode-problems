int* plusOne(int* digits, int size, int* ret_size) {
    digits[size - 1] += 1;

    for (int i = size - 1; i > 0 && digits[i] == 10; i--) {
        digits[i] = 0;
        digits[i - 1] += 1;
    }

    if (digits[0] == 10) {
        digits[0] = 0;
        size += 1;
        int* result = (int*)malloc(size * sizeof(int));
        result[0] = 1;
        for (int i = 1; i < size; i++) {
            result[i] = digits[i - 1];
        }
        *ret_size = size;
        return result;
    }

    *ret_size = size;
    return digits;
}
