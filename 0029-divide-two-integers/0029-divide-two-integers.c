int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX; // Overflow case
    }

    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;

    long long ldividend = labs((long long)dividend);
    long long ldivisor = labs((long long)divisor);

    long long result = 0;
    while (ldividend >= ldivisor) {
        long long temp = ldivisor, multiple = 1;
        while (ldividend >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }
        ldividend -= temp;
        result += multiple;
    }

    return sign * result;
}

