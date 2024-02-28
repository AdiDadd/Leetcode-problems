/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int m = matrixSize;
    int n = *matrixColSize;
    int totalElements = m * n;
    int* ans = (int*)malloc(totalElements * sizeof(int));
    *returnSize = totalElements;

    int left = 0, right = n - 1, top = 0, bottom = m - 1;
    int index = 0;

    while (index < totalElements && top <= bottom && left <= right) {
        for (int i = left; i <= right && index < totalElements; i++) {
            ans[index++] = matrix[top][i];
        }
        top++;

        for (int i = top; i <= bottom && index < totalElements; i++) {
            ans[index++] = matrix[i][right];
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left && index < totalElements; i--) {
                ans[index++] = matrix[bottom][i];
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top && index < totalElements; i--) {
                ans[index++] = matrix[i][left];
            }
            left++;
        }
    }

    return ans;
}
