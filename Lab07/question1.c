#include <stdio.h>
int main() {
    int mat[3][3] = {{1, 2, 3},{0, 4, 5},{1, 0, 6}},transpose[3][3],cofactor[3][3],adjoint[3][3],i, j, row, col,det;
    float inverse[3][3];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transpose[j][i] = mat[i][j];
        }
    }
    printf("\n---Transpose Matrix---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            int subMat[2][2];
            int rCount = 0;
            for (row = 0; row < 3; row++) {
                if (row == i) continue;
                int cCount = 0;
                for (col = 0; col < 3; col++) {
                    if (col == j) continue;
                    subMat[rCount][cCount] = mat[row][col];
                    cCount++;
                }
                rCount++;
            }
            int minorDet = (subMat[0][0] * subMat[1][1]) - (subMat[0][1] * subMat[1][0]);
            int sign;
			if ((i + j) % 2 == 0) {
             sign = 1;}
			 else {
             sign = -1;}
            cofactor[i][j] = sign * minorDet;
        }
    }
    printf("\n--- Cofactor Matrix ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d ", cofactor[i][j]);
        }
        printf("\n");
    }
    for (j = 0; j < 3; j++) {
        det += mat[0][j] * cofactor[0][j];
    }
    printf("\n--- Determinant ---\n");
    printf("Determinant = %d\n", det);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            adjoint[j][i] = cofactor[i][j];
        }
    }
    printf("\n--- Adjoint Matrix ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%5d ", adjoint[i][j]);
        }
        printf("\n");
    }
    printf("\n--- Inverse Matrix ---\n");
    if (det == 0) {
        printf("The matrix is singular. Inverse does not exist (Determinant = 0).\n");
    } else {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                inverse[i][j] = (float)adjoint[i][j] / det;
            }
        }
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%.2f ", inverse[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

