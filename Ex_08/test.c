#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr1 = NULL;
    int *arr2 = NULL;
    int n = 0;

    if(scanf("%d", &n) != 1)
    {
        printf("n/a");
        return 0;
    }

    char c;
    c = getchar();
    if(c != '\n' && c != ' ')
    {
        printf("n/a");
        return 0;
    }

    arr1 = (int *)calloc(n, sizeof(int));
    arr2 = (int *)calloc(n, sizeof(int));

    for(int i = 0; i < n; ++i)
    {
        if(scanf("%d", &arr1[i]) != 1)
        {
            printf("n/a");
            return 0;
        }

        c = getchar();
        if(c != '\n' && c != ' ')
        {
            printf("n/a");
            return 0;
        }
    }

    for(int i = 0; i < n; ++i)
    {
        if(scanf("%d", &arr2[i]) != 1)
        {
            printf("n/a");
            return 0;
        }

        c = getchar();
        if(c != '\n' && c != ' ')
        {
            printf("n/a");
            return 0;
        }
    }

    int mult = 0,
        sumnum = 0;

    for(int i = 0; i < n; ++i)
    {
        mult = arr1[i] * arr2[i];
        sumnum += mult; 
    }

    printf("%d", sumnum);
    
    free(arr1);
    free(arr2);

    return 0;
}

// Написать программу, производящую скалярное умножение двух векторов n-мерного пространства.
// Через входной поток ввода stdin задается целое положительное число n, обозначающее размерность пространства, затем следует 2 строки:
// n целочисленных координат первого вектора и n целочисленных координат второго, разделенные пробелом.

// Результат вычислений вывести на стандартный поток вывода stdout.
// В конце ответа не должно быть переноса на новую строку. Проверить на валидность введенные данные.
// В случае любой ошибки выводить "n/a".

// Последовательность может быть любого размера.

// Примеры
// Входные примеры   Результат работы
// 1                  21
// 7 
// 3
            
// 3                  14
// 1 2 3 
// 1 2 3