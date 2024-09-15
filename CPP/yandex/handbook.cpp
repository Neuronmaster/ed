
// Задача 1.1
// Печать текста

// Напишите программу, печатающую на экране первые строчки со страницы Бьярне Страуструпа про C++:

// C++ is a general-purpose programming language with a bias towards systems programming that
//   - is a better C
//   - supports data abstraction
//   - supports object-oriented programming
//   - supports generic programming.
// Не потеряйте парные пробелы в начале строк и переносы в конце строк.

// Ограничение памяти

// 64.0 Мб

// Ограничение времени

// 1 с

// Ввод

// стандартный ввод или input.txt

// Вывод

// стандартный вывод или output.txt

// #include <iostream>

// int main() {
//     // Используем многострочный литерал R"()" для точного отображения пробелов и переносов
//     std::cout << R"(C++ is a general-purpose programming language with a bias towards systems programming that
//   - is a better C
//   - supports data abstraction
//   - supports object-oriented programming
//   - supports generic programming.
// )" << std::endl;

//     return 0;
// }

// Задача 1.2

// Сумма чисел

// Вам даны два целых числа. Напечатайте их сумму.

// Формат ввода
// Вводятся два числа, по модулю не превосходящие миллиарда.

// Формат вывода
// Напечатайте сумму этих чисел. В конце поставьте перевод строки.

// Пример
// Ввод
// 1 2
// Вывод
// 3
// Ограничение памяти

// 64.0 Мб

// Ограничение времени

// 1 с

// Ввод

// стандартный ввод или input.txt

// Вывод

// стандартный вывод или output.tx

#include <iostream>
int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << a + b << std::endl;
    return 0;
}