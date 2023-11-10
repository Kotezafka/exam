// #include <stdio.h>

// int main(void)
// {
// 	int value = 1;
// 	double pi = "3.141";

// 	scanf("%d", &value);
// 	printf("%.2f", value * pi);

// 	return 0;
// }



#include <stdio.h>

int main(void)
{
    int value;
    double pi = 3.141;

    scanf("%d", &value);
    printf("%.2lf", value * pi);

    return 0;
}

// Уровень: 1
// Темы: базовые типы данных, объявление переменных, оператор присваивания.
// Директория для решения: src/
// Файлы решения: main.c
// Входные данные: стандартный поток ввода (stdin)
// Выходные данные: стандартный поток вывода (stdout)

// При написании программы была допущена ошибка. Необходимо исправить синтаксические, стилевые ошибки, не изменяя работу программы.
// В конце ответа не должно быть переноса на новую строку.
// | Входные данные | Результат работы |
// | 0 | 0.00 |
// | 2 | 6.28 |