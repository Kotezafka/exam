// #include <stdio.h>
// #include <math.h>

// int main (void) {

//     double radian, degree;

//     if (scanf("%lf", &radian) == 1) {
//         degree = 57.29 * radian;
//         printf("%.0lf", roundf(degree));
//     } else {
//         printf("n/a");
//     }
    
//     return 0;
// }


#include <stdio.h>

int main (void)
{
    double rad, deg;

    if (scanf("%lf", &rad) != 1)
    {
        printf("n/a");
        return 0;
    }

    if (getchar() != '\n')
    {
        printf("n/a");
        return 0;
    }

    if (rad < 0)
        {
            printf("n/a");
            return 0;
        }
        
        deg = rad * 57.29;
        printf("%.0lf", deg);

    return 0;
}


// Exam_03_02. Перевод в градусную меру
// Уровень: 2
// Темы: типы данных, переменные, выражения, логические операции и математические функции.
// Директория для решения: src/
// Файлы решения: main.c
// Входные данные: стандартный поток ввода (stdin)
// Выходные данные: стандартный поток вывода (stdout)

// Написать программу, осуществляющую перевод величины из радианной меры в градусную. Радианная мера (вещественное число) задается
// на стандартном потоке ввода stdin, результат перевода необходимо математически округлить до целого числа и вывести на стандартный поток вывода stdout.
// В конце ответа не должно быть переноса на новую строку. Проверить на валидность введенные данные. В случае любой ошибки выводить "n/a".

// Примечание: в одном радиане 57.29 градусов.

// | Входные данные | Результат работы |
// | 1 | 57 |
// | 2 | 115 |