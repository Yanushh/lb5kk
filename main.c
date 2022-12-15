#include <stdio.h>
#include <math.h>
int main(void)
{
    int A[12] = {5, 9, 15, 21, 2, 6, -12, 26, -8, 1, -5, -19}, c, k = 0;
    double C[12];
    for (int i = 0; i < 12; i++)
    {
        if (A[i] % 2 != 0)
        {
            k++;
            if (k == 2)
            {
                c = A[i];
            }
        }
        if (k > 1)
        {
            C[i] = ((double)A[i]) / c;
        }
        else
        {
            C[i] = A[i];
        }
    }
    if (k == 0)
    {
        printf("В масиві немає непарних чисел\n");
    }
    if (k == 1)
    {
        printf("В масиві тільки одне непарне число\n");
    }
    printf("1 Масив\n");
    for (int i = 0; i < 12; i++)
    {
        printf("A[%d] = %d\n", i, A[i]);
    }
    printf("2 Масив\n");
    for (int i = 0; i < 12; i++)
    {
        printf("C[%d] = %2.2lf\n", i, C[i]);
    }

    return 0;
}
