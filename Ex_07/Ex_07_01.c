// #include <stdio.h>

// int main()
// {
//     int value = 0;

//     while (scanf("%d", &value) == 1)
//     {
//         char c;
//         c = getchar();
//         if(c != '\n' && c != ' ')
//         {
//             printf("n/a");
//             return 0;
//         }

//         if (c == '\n')
//         {
//             printf("%d", value);
//             return 0;
//         }
//         else
//         {
//             printf("%d ", value);
//         }
//     }
    
//     return 0;
// }




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    char c;

    int *arr = NULL;

    arr = (int *)calloc(n, sizeof(int));

    int i = 0;
    while (1)
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
        
        if (i == n) 
        { 
            arr = realloc(arr, 10 * sizeof(int)); 
            n += 10; 
        }

        if (c == '\n')
        {
            break;
        }

        ++i;
    }

    int j = 0;
    for(j = 0; j < i; ++j)
    {
        printf("%d ", arr[j]);
    }
    printf("%d", arr[j]);
    
    return 0;
}




// Убрать лишние пробелы из строки ввода String, заменить большие пробелы на маленькие
// Примеры
// 1 2 3   4   5 6
// Вывод
// 1 2 3 4 5
