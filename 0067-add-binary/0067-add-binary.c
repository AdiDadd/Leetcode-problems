char* addBinary(char* a, char* b) {
    int len_a = strlen(a);
    int len_b = strlen(b);
    int maxSize = (len_a > len_b) ? len_a : len_b;

    char* result = (char*)malloc((maxSize + 2) * sizeof(char));
    int carry = 0;
    int index = 0;

    for (int i = len_a - 1, j = len_b - 1; i >= 0 || j >= 0 || carry; i--, j--) {
        int bit_a = (i >= 0) ? a[i] - '0' : 0;
        int bit_b = (j >= 0) ? b[j] - '0' : 0;

        int sum = bit_a + bit_b + carry;
        result[index++] = sum % 2 + '0';
        carry = sum / 2;
    }

    result[index] = '\0';
    for (int i = 0, j = index - 1; i < j; i++, j--) {
        char temp = result[i];
        result[i] = result[j];
        result[j] = temp;
    }

    return result;
}