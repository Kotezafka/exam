#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void remove_extra_spaces(char *input);

int main() {
    char input[1000];
    fgets(input, sizeof(input), stdin);

    remove_extra_spaces(input);

    return 0;
}

void remove_extra_spaces(char *input) {
    char output[1000];  // Предполагаем, что строка не превысит 1000 символов
    int output_index = 0;
    bool space_found = false;

    // Пропускаем начальные пробелы
    while (isspace(input[0])) {
        ++input;
    }

    for (int i = 0; input[i] != '\0'; ++i) {
        if (isspace(input[i])) {
            space_found = true;
        } else {
            if (space_found) {
                output[output_index++] = ' ';  // Добавляем один пробел после последнего пробела
                space_found = false;
            }
            output[output_index++] = input[i];
        }
    }

    // Убираем лишние пробелы в конце строки
    while (output_index > 0 && isspace(output[output_index - 1])) {
        --output_index;
    }

    output[output_index] = '\0';  // Завершаем строку

    printf("%s", output);
}

// Дана строка вида:
// "   test   sample test	text"
// "    	text"
// "            	t 	"
// Каждая строка завершается символом '\n'
// Убрать лишние пробелы в начале и в конце строки. 
// Между словами оставить 1 пробел.
// В результате строка должна быть следующего вида:
// "test sample test text"
