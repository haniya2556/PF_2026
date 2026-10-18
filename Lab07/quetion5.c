#include <stdio.h>
int main()
{
    int a[3][3][3] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}}
    };
    int i, j, k, l, same;
    for (i = 0; i < 3; i++)
    {
        for (l = i + 1; l < 3; l++)
        {
            same = 1;
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 3; k++)
                {
                    if (a[i][j][k] != a[l][j][k])
                        same = 0;
                }
            }
            printf("Layer %d and Layer %d: ",
                   i + 1, l + 1);
            if (same == 1)
                printf("Identical\n");
            else
                printf("Distinct\n");
        }
    }
    return 0;
}

