#include <stdio.h>
#include <math.h>
int main(void)
{
    int size,  c, k = 0;
     printf("Введіть розмір масиву = ");
     scanf("%i", &size);
     printf("\n");
     int A[size];
     double  C[size];
     for (int i = 0; i < size; i++)
    {
        printf("A[%i] = ", i);
        scanf("%i", &A[i]);
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
    if (k == 1)
    {
        printf("Є тільки одне не парне число в масиві\n");
    }

    printf("*Результат масиву*\n");
    for (int i = 0; i < size; i++)
    {
        printf("C[%d] = %2.2lf\n", i, C[i]);
    }

    return 0;
}