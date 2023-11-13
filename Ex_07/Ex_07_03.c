#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    char *arr = NULL;
    
    arr = (char *)calloc(n, sizeof(char));

    int i = 0;
    while(1)
    {
        if(scanf("%c", &arr[i]) != 1)
        {
            printf("n/a");
            return 0;
        }

        if(arr[i] == '\n')
        {
            break;
        }

        if(i == n)
        {
            arr = realloc(arr, 10 * sizeof(char));
            n += 10;
        }

        
        ++i;
    }

    int k = 0,
        j = 0;
    for(j = 0; j < (i-1)/2; ++j)
    {
        if((arr[j] == arr[i - 1 - j]) || ((int)(abs(arr[j] - arr[i - 1 - j])) == 32 && arr[j] >= 65 && arr[j] <= 122 && arr[i - 1 - j] >= 65 && arr[i - 1 - j] <= 122))
        {
            k += 0;
        }
        else
        {
            k += 1;
        }
    }
    
    if (k == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    free(arr);

    return 0;
}


// Проверить является ли строка палиндромом (строка должна заканчиваться \n).
// Входная строка может содержать буквы латинского алфавита и цифры, длина строки до 100 символов
// ввод        	| вывод
// ------------------------
// Mam mam      | YES
// ------------------------
// Test1       	| NO
