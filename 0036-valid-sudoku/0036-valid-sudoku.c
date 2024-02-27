#define SHAPE 9
#define EMPTY '.'

bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    int GRID = 3;
    int row[SHAPE + 1] = {0};
    int col[SHAPE + 1] = {0};
    int grid[SHAPE] = {0};

    for (int r = 0; r < SHAPE; r++) {
        for (int c = 0; c < SHAPE; c++) {

            if (board[r][c] == EMPTY) 
                continue;

            int val = 1 << (board[r][c] - '0');

            if (row[r] & val) return false;
            else row[r] += val;

            if (col[c] & val) return false;
            else col[c] += val;

            int gridIndex = (r / GRID) * GRID + (c / GRID);

            if (grid[gridIndex] & val) return false;
            else grid[gridIndex] += val;
        }
    }

    return true;
}
