#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 4},{2, 3, 4},{0, 0, 1}},i, j,zero = 1, identity = 1, diagonal = 1, scalar = 1, upper = 1, lower = 1,
    symmetric = 1, skew = 1, idem = 1, nil = 1;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] != 0)
                zero = 0;
            if (i == j && a[i][j] != 1)
                identity = 0;
            if (i != j && a[i][j] != 0)
            {
                identity = 0;
                diagonal = 0;
                scalar = 0;
            }
            if (i < j && a[i][j] != 0)
                lower = 0;

            if (i > j && a[i][j] != 0)
                upper = 0;

            if (a[i][j] != a[j][i])
                symmetric = 0;

            if (a[i][j] != -a[j][i])
                skew = 0;
        }
    }

    for (i = 1; i < 3; i++)
        if (a[i][i] != a[0][0])
            scalar = 0;
    printf("Square Matrix\n");
    if (zero)
        printf("Zero Matrix\n");
    if (identity)
        printf("Identity Matrix\n");
    if (diagonal)
        printf("Diagonal Matrix\n");
    if (scalar)
        printf("Scalar Matrix\n");
    if (upper)
        printf("Upper Triangular Matrix\n");
    if (lower)
        printf("Lower Triangular Matrix\n");
    if (symmetric)
        printf("Symmetric Matrix\n");
    if (skew)
        printf("Skew-Symmetric Matrix\n");
    if (identity)
        printf("Non-Singular Matrix\n");
    if (idem)
        printf("Idempotent Matrix\n");
    if (nil)
        printf("Nilpotent Matrix\n");
    return 0;
}

