#include <stdio.h>
int main()
{
    int a[3][3][3] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{2, 4, 6}, {8, 10, 12}, {14, 16, 18}},
        {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}}
    };
    int i, j, k, sum, total = 0;
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        printf("Layer %d:\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d ", a[i][j][k]);
                sum += a[i][j][k];
            }
            printf("\n");
        }
        printf("Layer total = %d\n\n", sum);
        total = total+sum;
    }
    printf("Overall total = %d\n", total);
    printf("Number of layers = 3\n");
    printf("Number of elements = 27\n");
    printf("Average = %.2f\n", total / 27.0);

    return 0;
}

