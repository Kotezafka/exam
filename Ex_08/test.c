#include <stdio.h>

int factorial(int m);

int main()
{
    int m = 0;

    if(scanf("%d", &m) != 1)
    {
        printf("n/a");
        return 0;
    }

    if(getchar() != '\n')
    {
        printf("n/a");
        return 0;
    }

    int result = 0,
        n = 0;

    for(; n <= m - 1; ++n)
    {
        result = factorial(m) / (factorial(n) * factorial(m - n));
        printf("%d ", result);
    }
    result = factorial(m) / (factorial(n) * factorial(m - n));
    printf("%d", result);

    return 0;
}

int factorial(int m)
{
    int fact = 1;

    for(int i = 1; i <= m; ++i)
    {
        fact *= i;
    }

    return fact;
}
// Написать программу, осуществляющую вывод на стандартный поток stdout строки состоящей из биномиальных коэффициентов
// для k= 0..n разделенных пробелами. ! - операция взятия факториала, факториал числа n вычисляется как n! = 1*2*3*...*n, параметр n задается
// в виде неотрицательного целого числа через стандартный поток ввода stdin. В конце ответа не должно быть переноса на новую строку.

// Примечание: за последним выведенным коэффициентом не должно следовать пробела.

// | Входные данные | Результат работы |
// | 0 | 1 |
// | 1 | 1 1 |
// | 2 | 1 2 1 |
// | 3 | 1 3 3 1 |