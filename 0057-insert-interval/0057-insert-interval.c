int compare(const void* a, const void* b) {
    int* interval1 = *(int**)a;
    int* interval2 = *(int**)b;
    return interval1[0] - interval2[0];
}

int** insert(int** intervals, int intervalsSize, int* intervalsColSize,
             int* newInterval, int newIntervalSize, int* returnSize,
             int** returnColumnSizes) {
    int** result = (int**)malloc(sizeof(int*) * (intervalsSize + 1));
    *returnColumnSizes = (int*)malloc(sizeof(int) * (intervalsSize + 1));

    int i = 0, j = 0;

    while (i < intervalsSize && intervals[i][1] < newInterval[0]) {
        result[j] = intervals[i];
        (*returnColumnSizes)[j] = intervalsColSize[i];
        i++;
        j++;
    }

    while (i < intervalsSize && intervals[i][0] <= newInterval[1]) {
        newInterval[0] = fmin(newInterval[0], intervals[i][0]);
        newInterval[1] = fmax(newInterval[1], intervals[i][1]);
        i++;
    }

    result[j] = newInterval;
    (*returnColumnSizes)[j] = newIntervalSize;
    j++;

    while (i < intervalsSize) {
        result[j] = intervals[i];
        (*returnColumnSizes)[j] = intervalsColSize[i];
        i++;
        j++;
    }

    *returnSize = j;

    return result;
}