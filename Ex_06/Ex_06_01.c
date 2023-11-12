#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int *arr1 = NULL;
    int *arr2 = NULL;
    int *arr3 = NULL;

    if (scanf("%d", &n) != 1)
    {
        printf("n/a");
        return 0;
    }

    char c;
    c = getchar();

    if (c != '\n' && c != ' ')
    {
        printf("n/a");
        return 0;
    }

    arr1 = (int *)calloc(n * n, sizeof(int));
    arr2 = (int *)calloc(n * n, sizeof(int));
    arr3 = (int *)calloc(n * n, sizeof(int));

    int i = 0,
        j = 0;

    for(i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            if(scanf("%d", &arr1[i * n + j]) != 1)
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
    }

    for(i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            if(scanf("%d", &arr2[i * n + j]) != 1)
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
    }

    for(i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int f = 0; f < n; ++f)
            {
                arr3[j * n + i] += arr1[j * n + f] * arr2[f * n + i];
            }
        }
    }

    for(i = 0; i < n; ++i)
    {
        for (j = 0; j < n - 1; ++j)
        {
            printf("%d ", arr3[i * n + j]);
        }
        printf("%d", arr3[i * n + j]);

        if(i != n - 1) printf("\n");
    }


    free(arr1);
    free(arr2);
    free(arr3);

    return 0;
}




// Exam_06_01 Умножение квадратных матриц

// Уровень: 4
// Темы: Матрицы

// Написать программу, производящую умножение двух квадратных матриц 'A' и 'B' размера 'N'. Размерность 'N' задается на стандартном потоке ввода stdin, после чего
// следует 'N^2' целых чисел, описывающих построчно матрицу 'A' и 'N^2' целых чисел описывающих построчно матрицу 'B'. Результат умножения матриц 'C = A * B' вывести
// на стандартный поток вывода stdout в виде таблицы (после каждой выведенной строки матрицы 'C' должен быть осуществлен перенос строки), элементы должны быть
// разделены пробелами, а перед переносом строк не должно быть пробельных символов.
// В конце ответа не должно быть переноса на новую строку.
// Проверить на валдность введенные данные. В случае любой ошибки выводить "n/a". 

// Входные данные             Выходные данные
// 2
// 1 2                          19 22
// 3 4                          43 50

// 5 6
// 7 8
