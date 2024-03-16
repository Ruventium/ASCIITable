#include <stdio.h>

// Function declaration/Объявление функций
void printASCIITableInRange(); // ASCII Table Print function./ Функция Печати таблицы ASCII.
int isValidRange(int a, int b); // Range Correctness Check function./ Функция Проверки корректности диапазона.

void main() {
    printASCIITableInRange(); // Calling the ASCII table print function./ Вызов функции печати таблицы ASCII.
    system("pause"); // Stopping the program./ Остановка программы.
}

void printASCIITableInRange() {
    int a, b; // Variable declaration./ Объявление переменных.

    printf("Write a and b:\n"); // Range entry request./ Запрос на ввод диапазона.
    scanf("%d %d", &a, &b); // Reading the entered range./ Чтение введенного диапазона.
    isValidRange(a,b); // Checking whether the range is correct./ Проверка корректности диапазона.

    while(!isValidRange(a,b)) { // Cycle if the range is incorrect./ Цикл если диапазон некорректен.
        printf("Invalid input. Please write a and b:\n"); // Range re-entry request./ Запрос на повторный ввод диапазона.
        scanf("%d %d", &a, &b); // Reading the entered range./ Чтение введенного диапазона.
        isValidRange(a, b); // Checking whether the range is correct./ Проверка корректности диапазона.
    }
    printf("+-----+-----+-----+\n");
    printf("| Dec | Hex | Char|\n"); // Table header./ Заголовок таблицы.
    printf("+-----+-----+-----+\n");
    for(int i = a; i <= b; i++) { // For each character in the range./ Для каждого символа в диапазоне.
        printf("|%4d |%4x |%4c |\n", i, i, i); // Print 10-character, 16-character representation and symbol./ Печать 10-ричного, 16-ричного представления и символа.
    }
    printf("+-----+-----+-----+\n"); // Closing the table./ Закрытие таблицы.
}

int isValidRange(int a, int b) { // Range correctness check function./ Функция проверки корректности диапазона.
    if(a < b && 255 >= a > 0 && 255 >= b > 0) { // If a is less than b and both numbers are between 0 and 255./ Если a меньше b и оба числа в диапазоне от 0 до 255.
        return 1; // Return True./ Возвращаем True.
    } else {
        return 0; // Return False./ Возвращаем False.
    }
}
