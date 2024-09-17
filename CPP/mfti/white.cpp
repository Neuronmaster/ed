#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <climits>
#include <bitset>
#include <cctype>
// Белый пояс
// Неделя 1.
// Урок 1.3 Типы данных в С++

// В C++ есть несколько категорий типов данных, которые используются для хранения различных значений. 
// Вот основные из них:

// ### 1. **Простые (Примитивные) типы данных:**
//    - **Целые числа:** 
//      - `int` — целое число (обычно 4 байта).
//      - `short` — короткое целое число (обычно 2 байта).
//      - `long` — длинное целое число (обычно 4 или 8 байт).
//      - `long long` — очень длинное целое число (обычно 8 байт).
//      - `unsigned` версии (`unsigned int`, `unsigned short`, и т.д.) — целые числа без знака.
//    - **Вещественные числа:** 
//      - `float` — число с плавающей точкой одинарной точности (обычно 4 байта).
//      - `double` — число с плавающей точкой двойной точности (обычно 8 байт).
//      - `long double` — расширенная точность (размер может быть 8, 10 или 16 байт в зависимости от платформы).
//    - **Символы:**
//      - `char` — символ (обычно 1 байт).
//      - `wchar_t` — широкий символ (обычно 2 или 4 байта).
//    - **Логические:**
//      - `bool` — логический тип, может быть `true` или `false`.

// ### 2. **Пользовательские типы данных:**
//    - **Массивы** — последовательности элементов одного типа.
//    - **Структуры (`struct`)** — объединяют различные типы данных в один тип.
//    - **Объединения (`union`)** — хранят разные типы данных в одном и том же месте памяти.
//    - **Перечисления (`enum`)** — определяют набор целочисленных констант с именами.

// ### 3. **Указатели и ссылки:**
//    - **Указатели (`*`)** — хранят адреса переменных в памяти.
//    - **Ссылки (`&`)** — ссылкаются на переменные в памяти. Отличаються от указателей тем что с ссылкой не работает
//    операция разыменования, адресная арифметика.

// ### 4. **Типы с модификаторами:**
//    - **`signed` и `unsigned`** — указывают, является ли число знаковым (с плюсом или минусом) или беззнаковым.
//    - **`const`** — указывает, что значение переменной не может быть изменено после инициализации.
//    - **`volatile`** — используется для переменных, которые могут изменяться непредсказуемо, например, 
//    аппаратно управляемые переменные.

// ### 5. **Стандартные контейнеры и строки:**
//    - **`std::string`** — для работы с текстовыми строками.
//    - **Контейнеры из STL (например, `vector`, `map`, `set`)** — для работы с коллекциями данных.


// Структура для хранения информации о человеке
// struct Person {
//     std::string name;
//     std::string surname;
//     int age;
// };

// int main() {
//     int x = 5;
//     double pi = 3.14;
//     bool logical_value = true;
//     char symbol = 'A';
//     std::string text = "Hello";

//     std::vector<int> numbers = {1, 3, 5, 9, 14};
//     // Вывод размера вектора
//     std::cout << "Size of numbers vector: " << numbers.size() << std::endl;

//     // Вывод элементов вектора
//     std::cout << "Elements of numbers vector: ";
//     for (int number : numbers) {
//         std::cout << number << " ";
//     }
//     std::cout << std::endl;

//     // Вывод третьего элемента вектора (с индексом 2)
//     std::cout << "Third element of numbers vector: " << numbers[2] << std::endl;

//     // Создание и вывод информации о сотрудниках
//     std::vector<Person> staff = {
//         {"John", "Doe", 25},
//         {"Jane", "Smith", 30},
//         {"Alice", "Johnson", 28}
//     };

//     std::cout << "Staff information:" << std::endl;
//     for (const Person& person : staff) {
//         std::cout << "Name: " << person.name 
//                   << ", Surname: " << person.surname 
//                   << ", Age: " << person.age << std::endl;
//     }

//     // Вывод имени второго сотрудника
//     std::cout << "Name of the second person in staff: " << staff[1].name << std::endl;

//     // Создание и вывод значений из map
//     std::map<std::string, int> name_to_value;
//     name_to_value["one"] = 1;
//     name_to_value["two"] = 2;
//     name_to_value["three"] = 3;
//     name_to_value["four"] = 4;
//     name_to_value["five"] = 5;

//     // Вывод значения по ключу "three"
//     std::cout << "Value of 'three': " << name_to_value["three"] << std::endl;

//     // Создание множества и вывод его элементов
//     std::set<int> my_set = {1, 2, 3, 4, 5};
//     std::cout << "Elements of my_set: ";
//     for (int number : my_set) {
//         std::cout << number << " ";
//     }
//     std::cout << std::endl;

//     // Вывод размера множества
//     std::cout << "Size of my_set: " << my_set.size() << std::endl;

//     // Правильный доступ к элементам множества через итератор
//     auto it = my_set.begin();
//     std::advance(it, 2); // Перемещаем итератор на третий элемент (индекс 2)
//     std::cout << "Third element of my_set: " << *it << std::endl;

//     return 0;
// }



// Урок 1.5 Операции с контейнерами в С++ сount, sort, reverse, find, insert, erase, clear
// Эти операции часто используются для управления и обработки данных внутри контейнеров STL.

// ### 1. **`count` — Подсчёт элементов:**
//    - Используется для подсчёта количества элементов, удовлетворяющих условию.
//    - В контейнерах, таких как `std::vector`, `std::list`, используется с алгоритмом `std::count`.
//    - Для ассоциативных контейнеров, как `std::set` и `std::map`, метод `.count()` возвращает `1`, 
//    если элемент существует, и `0`, если нет.
//    ```cpp
//    std::vector<int> vec = {1, 2, 3, 2, 4};
//    int count_twos = std::count(vec.begin(), vec.end(), 2); // Результат: 2
//    ```

// ### 2. **`sort` — Сортировка:**
//    - Используется для сортировки элементов в контейнерах.
//    - Для последовательных контейнеров (например, `std::vector`, `std::deque`) можно использовать алгоритм `std::sort`.
//    - Неприменимо напрямую к контейнерам, как `std::set` и `std::map`, так как они автоматически поддерживают сортировку.
//    ```cpp
//    std::vector<int> vec = {4, 1, 3, 2};
//    std::sort(vec.begin(), vec.end()); // vec: {1, 2, 3, 4}
//    ```

// ### 3. **`reverse` — Реверс:**
//    - Используется для обращения порядка элементов в контейнере.
//    - Применяется с помощью алгоритма `std::reverse`.
//    - Подходит для последовательных контейнеров, таких как `std::vector`, `std::deque`, `std::list`.
//    ```cpp
//    std::vector<int> vec = {1, 2, 3, 4};
//    std::reverse(vec.begin(), vec.end()); // vec: {4, 3, 2, 1}
//    ```

// ### 4. **`find` — Поиск элемента:**
//    - Используется для поиска первого элемента, соответствующего условию.
//    - Для последовательных контейнеров (`std::vector`, `std::list`) используется алгоритм `std::find`.
//    - Ассоциативные контейнеры (`std::set`, `std::map`) имеют метод `.find()`, возвращающий итератор на элемент
//     или `end()`, если элемент не найден.
//    ```cpp
//    std::vector<int> vec = {1, 2, 3, 4};
//    auto it = std::find(vec.begin(), vec.end(), 3); // Найдёт элемент 3
//    if (it != vec.end()) {
//        std::cout << "Элемент найден: " << *it << std::endl;
//    }
//    ```

// ### 5. **`insert` — Вставка элементов:**
//    - Используется для добавления новых элементов в контейнер.
//    - В `std::vector` и других последовательных контейнерах можно вставлять элементы в любое место с помощью `.insert()`.
//    - В `std::set` и `std::map` `.insert()` добавляет элементы, сохраняя сортировку и уникальность.
//    ```cpp
//    std::vector<int> vec = {1, 2, 4};
//    vec.insert(vec.begin() + 2, 3); // vec: {1, 2, 3, 4}
//    ```

// ### 6. **`erase` — Удаление элементов:**
//    - Используется для удаления элементов по итератору или диапазону.
//    - В `std::vector` и `std::list` `.erase()` удаляет элементы, сдвигая остальные.
//    - В ассоциативных контейнерах (`std::set`, `std::map`) `.erase()` удаляет элементы, поддерживая порядок.
//    ```cpp
//    std::vector<int> vec = {1, 2, 3, 4};
//    vec.erase(vec.begin() + 2); // Удаляет элемент 3, vec: {1, 2, 4}
//    ```

// ### 7. **`clear` — Очистка контейнера:**
//    - Используется для удаления всех элементов из контейнера.
//    - Метод `.clear()` освобождает память, но контейнер остаётся существовать.
//    ```cpp
//    std::vector<int> vec = {1, 2, 3, 4};
//    vec.clear(); // vec становится пустым
//    ```

// Эти операции являются основными при работе с контейнерами и позволяют эффективно управлять данными данными.
// int main()
// {
//     std::string s = "abcdefg"; 
//     for (char c : s) {
//         std::cout << c << " ";
//     }
//     std::cout << std::endl;
//         std::cout << std::endl;

//         std::vector<std::string> vec1 = {"1", "2", "3", "4", "5"};
//     for (auto i : vec1) {
//         std::cout << i << " ";
//     }
//     std::cout << std::endl;

//     std::vector<int> nums = {1, 5, 4, 2, 5};
//     for (int i : nums) {
//         std::cout << i << " ";
//     }
//     std::cout << std::endl;
//     int quantity = 0;
//     for (int i : nums) {
//         if (i == 5) {
//        quantity += 1;
//         }
//     }
//     std::cout << "Quantity: " << quantity << std::endl;
//     int quantity2 = std::count(nums.begin(), nums.end(), 5);
//     int quantity3 = std::count(begin(nums), end(nums), 5);
//     std::cout << "Quantity2: " << quantity2 << std::endl;
//     std::cout << "Quantity3: " << quantity3 << std::endl;

//     sort (nums.begin(), nums.end());
//     for (int i : nums) {
//         std::cout << i << " ";
//     }
//     std::cout << std::endl;

// std::reverse(nums.begin(), nums.end());
// for (int i : nums) {
//     std::cout << i << " ";
// }
// std::cout << std::endl;

// auto it = std::find(nums.begin(), nums.end(), 4); // Найдёт элемент 3
// if (it != nums.end()) {
//     std::cout << "Элемент найден: " << *it << std::endl;
// }
// else
// {
//     std::cout << "Элемент не найден" << std::endl;
// }

//     nums.insert(nums.begin() + 2, 3);
//     for (int i : nums) {
//         std::cout << i << " ";
//     }
//     std::cout << std::endl;

//     nums.erase(nums.begin() + 2);
//     for (int i : nums) {
//         std::cout << i << " ";
//     }
//     std::cout << std::endl;

//     nums.clear();
//     for (int i : nums) {
//         std::cout << i << " ";
//     }
//     std::cout << std::endl;


//     return 0;
// }

// Урок 1.12 Цикл while и do while
//  Посчитать сумму до введенного целого числа
// #include <iostream>

// int main()
// {
//     int sum = 0;
//     int n;
//     std::cin >> n;
//     if (n >= 1){
//     while (n > 0)
//     {
//         sum += n;
//         n--;
//     }
//     std::cout << sum << std::endl;
//     } else {
//         std::cout << "Please enter positive number" << std::endl;
//     }
//     return 0;
// }

// Угадай число
// #include <iostream>
// int main()
// {
//     int number = 7;
//     int guess;
//     do
//     {
//         std::cout << "Guess the number: ";
//         std::cin >> guess;
//         if (guess > number)
//         {
//             std::cout << "Too high" << std::endl;
//         }
//         else if (guess < number)
//         {
//             std::cout << "Too low" << std::endl;
//         }
//     } while (guess != number);
//     std::cout << "Congratulations! You guessed the number." << std::endl;
//     return 0;
// }


// Урок 1.13 цикл for
// Цикл for с диапазоном (Range-based for loop):
// C++ поддерживает улучшенный цикл for, который позволяет итерироваться 
// по контейнерам и массивам.
// #include <iostream>
// #include <vector>

// int main() {
//     std::vector<int> numbers = {1, 2, 3, 4, 5};
//     int sum = 0;
//     for (auto number : numbers)
//     {  // Итерация по элементам вектора
//         std::cout << number << " ";
//         sum += number;
//     }
//     std::cout << "\nSum: " << sum << std::endl;
//     std::map <std::string, int> b = {
//         {"one", 1},
//         {"two", 2},
//         {"three", 3}
//     };
//     sum = 0;
//     std::string concat;
//     for (auto i:b)
//     {
//         concat += i.first;
//         sum += i.second;
//     }
//     std::cout << "Concatenated string: " << concat << std::endl;
//     std::cout << "Sum: " << sum << std::endl;

//     std::string a ="asdfasdfasdf";
//     int i = 0;
//     for (auto c:a)
//     {
//         if (c == 'a')
//         {
//             std::cout << i << std::endl;
//         }
//         ++i;
//     }

//     for (int i = 0; i < a.size(); ++i)
//     {
//         if (a[i] == 'a')
//         {
//             if (i == 0)
//             {
//                 continue;
//             }
//             if (i == 8)
//             {
//                 break;
//             }
//            std::cout << i << std::endl;
//         }
//     }
//     return 0;
// }

// В этом примере: for (int number : numbers) итерируется 
// по всем элементам вектора numbers.
// Неделя 2
// Передача параметров в функцию по ссылке
// #include <algorithm>
// #include <iostream>
// #include <vector>
// #include <string>

// void swap (int& x, int& y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }
// void sort (std::vector <int>& v)
// {
//     std::sort(begin(v), end(v));
// }

// int main()
// {
//     int a = 5;
//     int b = 10;
//     swap(a, b);
//     std::cout << a << " " << b << std::endl;
//     std::vector <int> nums = {3, 6, 1, 2, 0, 2};
//     sort(nums);
//     for (auto i : nums)
//     {
//         std::cout << i << " ";
//     }
//     return 0;
// }
// 


// Передача параметров функций по константной ссылке
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <chrono>

struct Person
{
    std::string name;
    std::string surname;
    int age;
};

std::vector<Person> getMoscowPopulation();
void printPopulationSize(std::vector<Person> p)
{
    std::cout << "There are " << p.size() << " people in Moscow" << std::endl;
}

int main() {
    std::vector<Person> people = getMoscowPopulation();
    printPopulationSize(people);

    return 0;
}
