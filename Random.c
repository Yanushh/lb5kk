#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int size, c, k = 0;

    printf("Введіть розмір масиву =");
    scanf("%d", &size);

    int A[size];
    double C[size];

    for (int i = 0; i < size; i++)
    {
        A[i] = rand() %101;
    }

    printf("*Перший масив*\n");

    for (int i = 0; i < size; i++)
    {
        printf("A[%d] = %d\n", i, A[i]);
    }

    for (int i = 0; i < size; i++)
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
        printf("Немає не парних чисел в масиві\n");
    }
    else if (k == 1)
    {
        printf("Є тільки одне не парне число в масиві\n");
    }
    else
    {
        printf("*Другий масив*\n");

        for (int i = 0; i < size; i++)
        {
            printf("C[%d] = %2.2lf\n", i, C[i]);
        }
    }

    return 0;
}