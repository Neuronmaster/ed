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

// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <map>
// #include <chrono>

// struct Person
// {
//     std::string name;
//     std::string surname;
//     int age;
// };

// // Реализация функции getMoscowPopulation
// std::vector<Person> getMoscowPopulation() {
//     // Пример данных для демонстрации
//     return {
//         {"Ivan", "Ivanov", 30}, {"Maria", "Petrova", 25},
//         {"Sergey", "Sidorov", 40}, {"Alexey", "Alexeev", 35},
//         {"Petr", "Petrov", 20}, {"Vladimir", "Vladimirov", 45},
//         {"Dmitry", "Dmitriev", 28}, {"Andrey", "Andreev", 32},
//         {"Alexey", "Sidorov", 50}, {"Alexey", "Ivanov", 55}
//     };
// }

// void printPopulationSize(const std::vector<Person>& p)
// {
//     std::cout << "There are " << p.size() << " people in Moscow" << std::endl;
// }

// int main() {
//     auto start = std::chrono::steady_clock::now();
//     // std::vector<Person> people = getMoscowPopulation();
//     // auto finish = std::chrono::steady_clock::now();
//     // std::cout << "getMoscowPopulation" << "Time: " << std::chrono::duration_cast<std::chrono::microseconds>(finish - start).count() << "mks" << std::endl;
//     // start = std::chrono::steady_clock::now();
//     printPopulationSize(getMoscowPopulation());
//     auto finish = std::chrono::steady_clock::now();
//     std::cout << "printPopulationSize" << "Time: " << std::chrono::duration_cast<std::chrono::microseconds>(finish - start).count() << "mks" << std::endl;

//     return 0;
// }

// Урок 2.7 Векторы ч 1 создание вектора фиксированного размера через for и создание 
// вектора меняющегося рамера через while
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm> // Для std::sort и std::reverse

// void printVectorS(const std::vector<std::string>& v)
// {
//     for (const std::string& s : v)
//     {
//         std::cout << s << " ";
//     }
//     std::cout << std::endl;
// }

// void printVectorB(const std::vector<bool>& v)
// {
//     int i = 0;
//     for (auto s : v)
//     {
//         std::cout << i << " : " << s << std::endl;
//         ++i;
//     }
//     std::cout << std::endl;
// }
// int main()
// {
//     int n;
//     std::cin >> n;
//     std::vector<std::string> v(n);

//     // Ввод строк
//     for(std::string& s : v)
//     {
//         std::cin >> s;
//             // Вывод текущего размера вектора
//     std::cout << "Current size: " << v.size() << std::endl;
//     }

//     // Вывод введенного вектора
//     printVectorS(v);

//     // Сортировка вектора
//     std::sort(v.begin(), v.end());

//     // Вывод отсортированного вектора
//     printVectorS(v);

//     // Реверсирование вектора
//     std::reverse(v.begin(), v.end());

//     // Вывод реверсированного вектора
//     std::cout << "Reversed: ";
//     printVectorS(v);

//     // Подсчет числа строк "a" в векторе
//     std::cout << "Number of 'a': " << std::count(v.begin(), v.end(), "a") << std::endl;


//     std::vector<std::string> v2;
//     int i = 0;
//     while(i < n)
//     {
//         std::string s;
//         std::cin >> s;
//         v2.push_back(s);
//             // Вывод текущего размера вектора
//     std::cout << "Current size: " << v2.size() << std::endl;
//         i++;
//     }

//     printVectorS(v2);

//     std::reverse(v2.begin(), v2.end());
//     printVectorS(v2);

//     std::sort(v2.begin(), v2.end());
//     printVectorS(v2);

//     std::vector<bool> is_holiday ={28, false};
//     is_holiday[8] = true;
//     printVectorB(is_holiday);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm> // Для std::sort и std::reverse

// void printVectorS(const std::vector<std::string>& v)
// {
//     for (const std::string& s : v)
//     {
//         std::cout << s << " ";
//     }
//     std::cout << std::endl;
// }

// void printVectorB(const std::vector<bool>& v)
// {
//     for (size_t i = 0; i < v.size(); ++i)
//     {
//         std::cout << i << " : " << v[i] << std::endl;
//     }
//     std::cout << std::endl;
// }

// void printVectorI(const std::vector<int>& v)
// {
//     for (size_t i = 0; i < v.size(); ++i)
//     {
//         std::cout << i << " : " << v[i] << std::endl;
//     }
//     std::cout << std::endl;
// }

// int main()
// {
//     int n;
//     std::cin >> n;
//     std::vector<std::string> v(n);

//     // Ввод строк
//     for (std::string& s : v)
//     {
//         std::cin >> s;
//         // Вывод текущего размера вектора
//         std::cout << "Current size: " << v.size() << std::endl;
//     }

//     // Вывод введенного вектора
//     printVectorS(v);

//     // Сортировка вектора
//     std::sort(v.begin(), v.end());

//     // Вывод отсортированного вектора
//     printVectorS(v);

//     // Реверсирование вектора
//     std::reverse(v.begin(), v.end());

//     // Вывод реверсированного вектора
//     std::cout << "Reversed: ";
//     printVectorS(v);

//     // Подсчет числа строк "a" в векторе
//     std::cout << "Number of 'a': " << std::count(v.begin(), v.end(), "a") << std::endl;
//     v.push_back("aaa");
//     printVectorS(v);
//     std::vector<std::string> v2;
//     for (int i = 0; i < n; ++i)
//     {
//         std::string s;
//         std::cin >> s;
//         v2.push_back(s);
//         // Вывод текущего размера вектора
//         std::cout << "Current size: " << v2.size() << std::endl;
//     }

//     printVectorS(v2);

//     std::reverse(v2.begin(), v2.end());
//     printVectorS(v2);

//     std::sort(v2.begin(), v2.end());
//     printVectorS(v2);

//     std::vector<bool> is_holiday(28, false); // Инициализация вектора длиной 31, все элементы false
//     is_holiday[23] = true; // 28-й день отмечен как праздник
//     printVectorB(is_holiday);
//     is_holiday.resize(31);
//     is_holiday.assign(31, false);
//     is_holiday[8] = true; //
//     printVectorB(is_holiday);
//     is_holiday.clear();
//     std::vector<int> days_in_month = {31, 28, 31, 30, 31};
//     if (true)
//     {
//         days_in_month[1]++; // ��нварь в году не високосный, но в этом примере упрощенно предполагаем
//     }
//     printVectorI(days_in_month);

//     return 0;
// }
// Векторы в C++ — это контейнеры из стандартной библиотеки, предоставляющие динамический массив, который может автоматически изменять свой размер по мере добавления или удаления элементов. Векторы являются частью стандартной библиотеки C++ (STL) и предоставляют удобные методы для работы с элементами, такие как добавление, удаление, сортировка и доступ к элементам по индексу.

// ### Основные свойства векторов:

// 1. **Динамический размер**:
//    - Векторы могут автоматически увеличивать свой размер, когда добавляются новые элементы, и уменьшать, когда элементы удаляются.

// 2. **Элементы вектора**:
//    - Элементы вектора хранятся в непрерывном блоке памяти, как в обычном массиве. Это означает, что вы можете эффективно обращаться к элементам по индексу.

// 3. **Шаблонный класс**:
//    - Вектор — это шаблонный класс (`std::vector<T>`), где `T` — тип элементов, которые хранятся в векторе.

// 4. **Управление памятью**:
//    - Вектор автоматически управляет своей памятью, освобождая её при необходимости. Это снимает с программиста ответственность за управление динамической памятью.

// ### Основные методы и операции с векторами:

// 1. **Создание вектора**:
//    ```cpp
//    std::vector<int> vec;              // Пустой вектор
//    std::vector<int> vec(10);          // Вектор из 10 элементов, инициализированных нулями
//    std::vector<int> vec(10, 5);       // Вектор из 10 элементов, инициализированных значением 5
//    ```

// 2. **Добавление элементов**:
//    ```cpp
//    vec.push_back(1);                  // Добавить элемент в конец вектора
//    vec.emplace_back(2);               // Добавить элемент в конец вектора (возможно, более эффективно)
//    ```

// 3. **Доступ к элементам**:
//    ```cpp
//    int value = vec[0];                // Доступ к первому элементу
//    int value = vec.at(1);             // Доступ ко второму элементу с проверкой границ
//    int first = vec.front();           // Первый элемент
//    int last = vec.back();             // Последний элемент
//    ```

// 4. **Удаление элементов**:
//    ```cpp
//    vec.pop_back();                    // Удалить последний элемент
//    vec.erase(vec.begin());            // Удалить первый элемент
//    vec.clear();                       // Очистить вектор (удалить все элементы)
//    ```

// 5. **Итерация по элементам**:
//    ```cpp
//    for (const auto& val : vec) {      // Диапазонный цикл
//        std::cout << val << std::endl;
//    }

//    for (auto it = vec.begin(); it != vec.end(); ++it) {  // Итераторный цикл
//        std::cout << *it << std::endl;
//    }
//    ```

// 6. **Размер и емкость**:
//    ```cpp
//    size_t size = vec.size();          // Текущий размер вектора
//    size_t capacity = vec.capacity();  // Количество элементов, которые вектор может хранить без выделения новой памяти
//    vec.reserve(100);                  // Резервирование памяти для 100 элементов
//    ```

// 7. **Сортировка вектора**:
//    ```cpp
//    std::sort(vec.begin(), vec.end()); // Сортировка вектора по возрастанию
//    ```

// ### Пример использования векторов:

// ```cpp
// #include <iostream>
// #include <vector>
// #include <algorithm>  // для std::sort

// int main() {
//     // Создание вектора и добавление элементов
//     std::vector<int> numbers = {5, 3, 8, 1, 2};
//     numbers.push_back(10);

//     // Сортировка вектора
//     std::sort(numbers.begin(), numbers.end());

//     // Итерация по вектору и вывод элементов
//     for (const auto& num : numbers) {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     // Доступ к элементам
//     std::cout << "First element: " << numbers.front() << std::endl;
//     std::cout << "Last element: " << numbers.back() << std::endl;

//     // Удаление элемента
//     numbers.pop_back();
//     std::cout << "After pop_back, last element: " << numbers.back() << std::endl;

//     return 0;
// }
// ```

// ### Вывод программы:

// ```
// 1 2 3 5 8 10
// First element: 1
// Last element: 10
// After pop_back, last element: 8
// ```

// ### Ключевые моменты:

// - **Управление памятью**: Векторы автоматически управляют своей памятью, что облегчает работу с динамическими массивами.
// - **Эффективность**: Векторы оптимизированы для эффективного доступа по индексу и добавления элементов в конец.
// - **Гибкость**: Векторы поддерживают различные операции, включая вставку, удаление, сортировку и итерацию, что делает их очень удобными для работы с динамическими данными.



// Урок 2.8 Словари

// `std::map` — это контейнер из стандартной библиотеки C++ (STL), который представляет собой ассоциативный массив. В контейнере `std::map` хранятся пары "ключ-значение", где каждый ключ уникален. `std::map` автоматически сортирует элементы по ключам и обеспечивает быстрый доступ к значениям по ключам.

// ### Основные свойства `std::map`:

// 1. **Пары "ключ-значение"**:
//    - Каждый элемент в `std::map` хранится как пара "ключ-значение" (`std::pair<const Key, T>`), где `Key` — это тип ключа, а `T` — тип значения.

// 2. **Уникальные ключи**:
//    - Ключи в `std::map` должны быть уникальными. Если вы попытаетесь добавить элемент с ключом, который уже существует, значение будет обновлено.

// 3. **Сортировка по ключу**:
//    - `std::map` автоматически сортирует элементы по ключам с использованием оператора `operator<`. Вы можете задать свою функцию сравнения, если нужно изменить порядок сортировки.

// 4. **Внутренняя реализация**:
//    - `std::map` обычно реализован как самобалансирующееся бинарное дерево (например, красно-чёрное дерево), что обеспечивает логарифмическое время выполнения для операций поиска, вставки и удаления.

// 5. **Автоматическая вставка**:
//    - При обращении к ключу, который не существует в карте, автоматически создаётся новая запись с этим ключом и значением по умолчанию для типа значения.

// ### Основные операции с `std::map`:

// 1. **Создание и инициализация**:
//    ```cpp
//    std::map<std::string, int> ageMap;
//    ageMap["Alice"] = 30;
//    ageMap["Bob"] = 25;
//    ```

// 2. **Добавление элементов**:
//    - Элементы можно добавлять с помощью оператора `[]` или метода `insert()`.
//    ```cpp
//    ageMap["Charlie"] = 35;  // Если ключ "Charlie" уже существует, его значение будет обновлено
//    ageMap.insert({"Dave", 40});  // Вставка новой пары "ключ-значение"
//    ```

// 3. **Доступ к элементам**:
//    - Используйте оператор `[]` для доступа к значению по ключу. Если ключ не существует, создаётся новый элемент.
//    ```cpp
//    int aliceAge = ageMap["Alice"];
//    ```

// 4. **Поиск элементов**:
//    - Метод `find()` возвращает итератор на элемент с заданным ключом или `end()`, если ключ не найден.
//    ```cpp
//    auto it = ageMap.find("Bob");
//    if (it != ageMap.end()) {
//        std::cout << "Bob's age: " << it->second << std::endl;
//    }
//    ```

// 5. **Удаление элементов**:
//    - Элементы можно удалять с помощью метода `erase()`, который принимает ключ или итератор.
//    ```cpp
//    ageMap.erase("Charlie");  // Удаление по ключу
//    ```

// 6. **Итерация по `std::map`**:
//    - Вы можете использовать цикл `for` для итерации по элементам `std::map`.
//    ```cpp
//    for (const auto& pair : ageMap) {
//        std::cout << pair.first << ": " << pair.second << std::endl;
//    }
//    ```

// ### Пример использования `std::map`:

// ```cpp
// #include <iostream>
// #include <map>

// int main() {
//     // Создание карты (map) для хранения возраста людей
//     std::map<std::string, int> ageMap;

//     // Добавление элементов
//     ageMap["Alice"] = 30;
//     ageMap["Bob"] = 25;
//     ageMap["Charlie"] = 35;

//     // Доступ к элементу и его изменение
//     ageMap["Bob"] = 26;

//     // Поиск элемента
//     auto it = ageMap.find("Alice");
//     if (it != ageMap.end()) {
//         std::cout << "Alice's age: " << it->second << std::endl;
//     } else {
//         std::cout << "Alice not found" << std::endl;
//     }

//     // Итерация по элементам карты
//     for (const auto& pair : ageMap) {
//         std::cout << pair.first << ": " << pair.second << std::endl;
//     }

//     // Удаление элемента
//     ageMap.erase("Charlie");

//     std::cout << "After erasing Charlie:" << std::endl;
//     for (const auto& pair : ageMap) {
//         std::cout << pair.first << ": " << pair.second << std::endl;
//     }

//     return 0;
// }
// ```

// ### Вывод программы:

// ```
// Alice's age: 30
// Alice: 30
// Bob: 26
// Charlie: 35
// After erasing Charlie:
// Alice: 30
// Bob: 26
// ```

// ### Ключевые моменты:

// - **Ассоциативный массив**: `std::map` позволяет хранить данные в формате "ключ-значение", где ключи должны быть уникальными.
// - **Сортировка и доступ**: Ключи автоматически сортируются, и доступ к элементам осуществляется за логарифмическое время.
// - **Удобство использования**: `std::map` предоставляет удобные методы для работы с элементами, такие как `insert`, `find`, `erase`, а также поддержку итерации.

// Урок 2.11 СЕТ 
// `std::set` — это контейнер из стандартной библиотеки C++ (STL), который представляет собой коллекцию уникальных элементов, хранящихся в отсортированном порядке. `std::set` полезен в тех случаях, когда вам нужно хранить элементы без дубликатов и быстро находить их.

// ### Основные свойства `std::set`:

// 1. **Уникальность элементов**:
//    - `std::set` гарантирует, что все элементы уникальны. Если вы попытаетесь добавить элемент, который уже существует в контейнере, он не будет добавлен.

// 2. **Отсортированные элементы**:
//    - Элементы в `std::set` автоматически сортируются при добавлении. По умолчанию сортировка происходит с использованием оператора `<`, но вы можете задать свой компаратор для изменения порядка сортировки.

// 3. **Эффективность операций**:
//    - Вставка, удаление и поиск в `std::set` выполняются за логарифмическое время (`O(log n)`), так как `std::set` обычно реализован как самобалансирующееся бинарное дерево (например, красно-чёрное дерево).

// 4. **Невозможность изменения элементов**:
//    - Элементы в `std::set` неизменяемы. Вы не можете изменить значение элемента напрямую после его вставки. Если нужно изменить элемент, его нужно удалить и вставить заново.

// ### Основные операции с `std::set`:

// 1. **Создание и инициализация**:
//    ```cpp
//    std::set<int> numbers;
//    std::set<int> numbers = {1, 2, 3, 4, 5};
//    ```

// 2. **Добавление элементов**:
//    - Используйте метод `insert()` для добавления элемента в `set`.
//    ```cpp
//    numbers.insert(6);
//    numbers.insert(3);  // Элемент 3 не будет добавлен, так как он уже есть в set
//    ```

// 3. **Проверка наличия элемента**:
//    - Метод `find()` возвращает итератор на элемент, если он найден, или `end()`, если элемент не найден.
//    ```cpp
//    if (numbers.find(3) != numbers.end()) {
//        std::cout << "3 is in the set" << std::endl;
//    }
//    ```

// 4. **Удаление элементов**:
//    - Элемент можно удалить с помощью метода `erase()`.
//    ```cpp
//    numbers.erase(4);  // Удаление элемента со значением 4
//    ```

// 5. **Итерация по элементам**:
//    - Используйте цикл `for` или итераторы для обхода всех элементов `set`.
//    ```cpp
//    for (const int& num : numbers) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//    ```

// 6. **Размер и пустота**:
//    - Вы можете получить количество элементов с помощью `size()` и проверить, пустой ли контейнер, с помощью `empty()`.
//    ```cpp
//    std::cout << "Size: " << numbers.size() << std::endl;
//    if (numbers.empty()) {
//        std::cout << "Set is empty" << std::endl;
//    }
//    ```

// ### Пример использования `std::set`:

// ```cpp
// #include <iostream>
// #include <set>

// int main() {
//     std::set<int> numbers = {1, 5, 3, 2, 4};

//     // Добавление элемента
//     numbers.insert(6);
//     numbers.insert(3);  // Дубликат, не будет добавлен

//     // Итерация по set и вывод элементов
//     for (const int& num : numbers) {
//         std::cout << num << " ";  // Элементы будут выведены в отсортированном порядке
//     }
//     std::cout << std::endl;

//     // Проверка наличия элемента
//     if (numbers.find(4) != numbers.end()) {
//         std::cout << "4 is in the set" << std::endl;
//     } else {
//         std::cout << "4 is not in the set" << std::endl;
//     }

//     // Удаление элемента
//     numbers.erase(5);

//     // Вывод после удаления элемента
//     for (const int& num : numbers) {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }
// ```

// ### Вывод программы:

// ```
// 1 2 3 4 5 6 
// 4 is in the set
// 1 2 3 4 6 
// ```

// ### Ключевые моменты:

// - **Уникальность и сортировка**: `std::set` автоматически сортирует элементы и хранит только уникальные значения.
// - **Эффективность**: `std::set` эффективен для поиска, добавления и удаления элементов с логарифмической сложностью.
// - **Неизменяемость элементов**: После добавления элемента в `std::set`, его значение не может быть изменено. Если нужно изменить значение, элемент нужно удалить и добавить заново.

// ### Когда использовать `std::set`?

// 1. Когда вам нужно хранить только уникальные элементы.
// 2. Когда порядок элементов важен, и вы хотите, чтобы элементы были отсортированы автоматически.
// 3. Когда операции поиска, вставки и удаления должны быть быстрыми и эффективным

void printSet(const std::set<std::string>& s)
{
    std::cout << "Size = " << s.size() << std::endl;
for (auto x : s)
    std::cout << x << std::endl;
}

int main()
{
    std::set<std::string> famous_person;
    famous_person.insert("Albert Einstein");
    famous_person.insert("Marie Curie");
    famous_person.insert("Nikola Tesla");
    famous_person.insert("Albert Einstein");
    printSet(famous_person);
    famous_person.erase("Albert Einstein");
    printSet(famous_person);
    std::set<std::string> month_names = {"Jan", "Mar", "Feb"};
    printSet(month_names);
    std::set<std::string> other_month_names = {"May", "Jun", "Jul"};
       printSet(other_month_names);
    std::cout << (month_names == other_month_names) << std::endl;
    std::cout << month_names.count("Jan") << std::endl;
    std::vector<std::string> v = {"a", "b", "c"};
    std::set<std::string> s(begin(v), end(v));
    printSet(s);
    return 0;
}