#include <stdio.h>

#define N 9

// Función para imprimir el Sudoku
void printGrid(int grid[N][N]);

// Verifica si es seguro colocar num en grid[row][col]
int isSafe(int grid[N][N], int row, int col, int num);

// Función principal para resolver el Sudoku
int solveSudoku(int grid[N][N]) ;

int main() {
    int grid[N][N] = {
        {0, 0, 1, 0, 4, 0, 0, 0, 1},
        {0, 0, 0, 2, 0, 9, 0, 0, 3},
        {0, 7, 3, 1, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 8, 0, 6, 2, 0},
        {0, 6, 0, 0, 0, 0, 8, 3, 0},
        {8, 0, 0, 0, 0, 0, 0, 0, 4},
        {0, 5, 0, 0, 1, 0, 0, 9, 0},
        {7, 0, 1, 6, 0, 0, 0, 0, 2},
        {3, 0, 2, 0, 0, 0, 0, 0, 0}
    };
    
    if (solveSudoku(grid))
        printGrid(grid);
    else
        printf("No existe solución\n");
    return 0;
}

// Función para imprimir el Sudoku
void printGrid(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            printf("%d ", grid[row][col]);
        }
        printf("\n");
    }
}

// Verifica si es seguro colocar num en grid[row][col]
int isSafe(int grid[N][N], int row, int col, int num) {
    for (int x = 0; x < N; x++) {
        if (grid[row][x] == num || grid[x][col] == num)
            return 0;
    }
    
    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num)
                return 0;
        }
    }
    return 1;
}

// Función principal para resolver el Sudoku
int solveSudoku(int grid[N][N]) {
    int row, col;
    int found = 0;
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) {
                found = 1;
                break;
            }
        }
        if (found) break;
    }
    
    if (!found)
        return 1;
    
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;
            if (solveSudoku(grid))
                return 1;
            grid[row][col] = 0;
        }
    }
    return 0;
}
