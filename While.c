#include <stdio.h>
#include <math.h>
int main(void)
{
    int A[12] = {5, 9, 15, 21, 2, 6, -12, 26, -8, 1, -5, -19}, c, k = 0, i=0;
    double C[12];
    while (i < 12)
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
        i++;
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
    i=0;
    while (i < 12)
    {
        printf("A[%d] = %d\n", i, A[i]);
        i++;
    }
    printf("2 Масив\n");
    i=0;
    while (i < 12)
    {
        printf("C[%d] = %2.2lf\n", i, C[i]);
        i++;
    }

    return 0;
}