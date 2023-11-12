#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 0,
        n = 0;
    int *arr = NULL;

    if(scanf("%d%d", &m, &n) != 2)
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
        if(scanf("%d", &arr[i]) != 1)
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
    
    for (i = 0; i <= n - 1; ++i)
    {
        for(int j = m - 1; j >= 1; --j)
        {
            // printf("%d %d ", i, j);
            printf("%d ", arr[j * n + i]);
        }
        
        if (i == n - 1) printf("%d", arr[i]);
        else
        {
            printf("%d\n", arr[i]);
        }
    }
    
    free(arr);

    return 0;
}





// Exam_06_03 Вращение матрицы

// Уровень: 4
// Темы: Матрицы 

// Создайте программу, которая поворачивает матрицу размером 'M * N' на 90 градусов по часовой стрелке. Размер матрицы задается в стандартном входном
// потоке stdin в виде двух положительных чисел, за которыми следуют 'M * N' целых чисел, описывающих строку матрицы с помощью ряд. Результат работы программы
// должен быть выведен в стандартный поток вывода stdout в виде таблицы (после каждой выходной строки конечной матрицы должен быть разрыв строки).
// Элементы должны быть разделены пробелами, и перед разрывом строки не должно быть пробелов. В конце ответа не должно быть перехода на новую строку. 

// Проверьте правильность введенных данных. В случае какой-либо ошибки выведите "n/a".

// Входные данные                Выходные данные
// 2 3                             4 1
// 1 2 3                           5 2
// 4 5 6                           6 3


// 3 3
// 1 2 3                           7 4 1                           
// 4 5 6                           8 5 2
// 7 8 9                           9 6 3
