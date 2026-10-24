#include <stdio.h>
void printGrid(int (*grid)[5]) {
    int r, c;
    for (r = 0; r < 5; r++) {
        for (c = 0; c < 5; c++) {
            printf("%d ", (grid[r][c] >> 1) & 1);
        }
        printf("\n");
    }
}

int countNeighbours(int (*grid)[5], int row, int col) {
    int r, c;
    int count = 0;
    for (r = row - 1; r <= row + 1; r++) {
        for (c = col - 1; c <= col + 1; c++) {
            if (r < 0 || r >= 5 || c < 0 || c >= 5) {
                continue;
            }
            if (r == row && c == col) {
                continue;
            }
            count += (grid[r][c] >> 1) & 1;
        }
    }
    return count;
}

void nextGeneration(int (*grid)[5]) {
    int r, c, neighbours, alive;
    for (r = 0; r < 5; r++) {
        for (c = 0; c < 5; c++) {
            alive = (grid[r][c] >> 1) & 1;
            neighbours = countNeighbours(grid, r, c);
            grid[r][c] &= ~1; 
            
            if (alive) {
                if (neighbours == 2 || neighbours == 3) {
                    grid[r][c] |= 1;
                }
            } else {
                if (neighbours == 3) {
                    grid[r][c] |= 1;
                }
            }
        }
    }
    for (r = 0; r < 5; r++) {
        for (c = 0; c < 5; c++) {
            grid[r][c] <<= 1;
        }
    }
}

int main(void) {
    int grid[5][5] = {0}, generations, r;
    for (r = 1; r <= 3; r++) {
        grid[r][2] = 2;
    }
    while (1) {
        printf("Enter number of generations (0-50): ");
        scanf("%d", &generations);
        if (generations >= 0 && generations <= 50) {
            break;
        }
        printf("Invalid number. Try again.\n");
    }
    for (r = 0; r <= generations; r++) {
        printf("Generation %d:\n", r);
        printGrid(grid);
        if (r < generations) {
            nextGeneration(grid);
        }
    }
    return 0;
}
