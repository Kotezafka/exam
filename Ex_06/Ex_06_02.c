#include <stdio.h>
#include <stdlib.h>

void swap(int str_min, int str_max, int *arr, int n);

int main()
{
    int m = 0,
        n = 0;
    int *arr = NULL;

    if (scanf("%d%d", &m ,&n) != 2)
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

    arr = (int *)calloc(m * n, sizeof(int));

    int i = 0;
    for(i = 0; i < m * n; ++i)
    {
        if (scanf("%d", &arr[i]) != 1)
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

    int max = arr[0],
        min = arr[0];
    int str = 0,
        str_max = 0,
        str_min = 0;

    for(i = 1; i < m * n; ++i)
    {
        str = i / n;

        if (arr[i] > max)
        {
            str_max = str;
        }

        if (arr[i] < min)
        {
            str_min = str;
        }
    }

    swap(str_min, str_max, arr, n);

    for(i = 0; i < m; ++i)
    {
        int j = 0;
        for (j = 0; j < n - 1; ++j)
        {
            printf("%d ", arr[i * n + j]);
        }
        printf("%d", arr[i * n + j]);

        if (i != m - 1) printf("\n");
    }

    free(arr);

    return 0;
}

void swap(int str_min, int str_max, int *arr, int n)
{
    int t1 = str_min * n,
        t2 = str_max * n, 
        tmp;

    for(int i = 0; i < n; ++i)
    {
        tmp = arr[t1 + i];
        arr[t1 + i] = arr[t2 + i];
        arr[t2 + i] = tmp;
    }

    return;
}





// Exam_06_02 Замена строк

// Уровень: 4
// Темы: Матрицы


// Создайте программу, которая меняет местами строки, содержащие первые вхождения минимального и максимального элементов матрицы, в матрице размером 'M * N'.
// Размер матрицы задается в стандартном входном потоке stdin в виде двух положительных чисел, за которыми следуют 'M * N' целых чисел, описывающих матрицу,
// строка за строкой. Результат замены должен быть выведен в стандартный выходной поток stdout в виде таблицы (после каждой выходной строки конечной матрицы
// должен быть разрыв строки). 
// Элементы должны быть разделены пробелами, и перед разрывом строки не должно быть пробелов. В конце ответа не должно быть перехода на новую строку.

// Проверьте правильность введенные данные. В случае какой-либо ошибки выведите "n/a",

// Входные данные              Выходные данные
// 4 3
// 1 2 3                         10 11 12
// 4 5 6                         4 5 6
// 7 8 9                         7 8 9
// 10 11 12                      1 2 3
