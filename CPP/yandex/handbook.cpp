
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

// #include <iostream>
// int main()
// {
//     int a, b;
//     std::cin >> a >> b;
//     std::cout << a + b << std::endl;
//     return 0;
// }

// Задача 2.1
// Дюймы

// Напишите программу для перевода сантиметров в дюймы. В одном дюйме 
// 2.54
// 2.54 сантиметра.

// Формат ввода
// На вход поступает длина в сантиметрах. Значение может быть дробным. Используйте тип double для его хранения.

// Формат вывода
// Напечатайте эту длину в дюймах. Округление не требуется. Достаточно использовать стандартную точность вывода до 6 знаков после запятой, которая установлена по умолчанию.

// Пример
// Ввод
// 1.1
// Вывод
// 0.433071
// Ограничение памяти

// 64.0 Мб

// Ограничение времени

// 1 с

// Ввод

// стандартный ввод или input.txt

// Вывод

// стандартный вывод или output.txt

// #include <iostream>
// int main()
// {
//     double a;
//     std::cin >> a;
//     std::cout << a / 2.54 << std::endl;
//     return 0;
// }

// Задача 2.2

// Арифметическая прогрессия

// Перед вами программа, которая считает сумму первых 
// 𝑛
// n натуральных чисел по формуле суммы арифметической прогрессии:

// #include <iostream>

// int main() {
//     int n;
//     std::cin >> n;
//     std::cout << n * (n + 1) / 2 << "\n";
// }
// Программа должна работать для всех 
// 𝑛
// ≤
// 4
// 000
// 000
// 000
// n≤4000000000, но оказывается, что для некоторых 
// 𝑛
// n она работает неправильно. Найдите причину проблемы и исправьте программу.

// Ограничение памяти

// 64.0 Мб

// Ограничение времени

// 1 с

// Ввод

// стандартный ввод или input.txt

// Вывод

// стандартный вывод или output.txt
#include <iostream>

int main() {
    unsigned long long n; // Используем unsigned long long для увеличенного диапазона значений
    std::cin >> n;

    // Вычисляем сумму, выполняя деление в нужный момент, чтобы избежать переполнения
    std::cout << (n / 2) * (n + 1) + ((n % 2) * ((n + 1) / 2)) << "\n";

    return 0;
}
