#include <clocale>
#include <iostream>
#include <ctime>
#include <system_error>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
// int main() {
//     setlocale(LC_ALL, "Russian");
//     std::cout << "Hello, world! Привет мир" << std::endl;
//     return 0;
// }

// using namespace std;
// int main () {
//     setlocale(LC_ALL, "Russian");
//     cout << "Hello, world! Привет мир" << endl;
//     return 0;
// }
// int main() {
//     setlocale(LC_ALL, "Russian");
//     std::cout << "Hello, world! \n Привет мир \n";
//     int a = 5, b =7 , c = 9 ;
//     const char NEW_LINE = '\n';
//     std::cout << a << " " << b << " " << c << NEW_LINE;
//     int var1, var2;
//     std::cout << "Введите целые числа: ";
//     std::cin >> var1 >> var2;
//     a++;
//     b += 2;
//     var1 += a;
//     std::cout << var1 << " " << var2 << NEW_LINE;
//     std::cout << ((a >= b) && (a <= c)) << NEW_LINE;
//     std::cout << ((a >= b) || (a <= c)) << NEW_LINE;
//     std::cout << !(a >= b) << NEW_LINE;
//     return 0;
// }
// // Урок 12. ДЗ 
// // Напишите программу, проверяющую число, введенное с клавиатуры на четность.
// int main() {
//     int number;
//     setlocale(LC_ALL, "Russian");
//     std::cout << "Введите целое число: " << std::endl;
//     std::cin >> number;
//     if (number == 0)
//         std::cout << "Число равно нулю" << std::endl;
//     else if ((number % 2) == 0)
//         std::cout << "Число четное" << std::endl;
//     else
//         std::cout << "Число нечетное" << std::endl;
//     return 0;
// }

// Урок 13. ДЗ
// Домашнее задание 
// Написать простой калькулятор. Пользователь вводит значение двух переменных. Описать меню в консоли для математических операций сложения, вычитания, умножения, деления. Через оператор switch 
// реализовать математическую операцию соответствующую пункту меню.

// int main (){
// setlocale(LC_ALL, "Russian");
// int number1, number2;
// std::cout << "Введите первое число: " << std::endl;
// std::cin >> number1;
// std::cout << "Введите второе число: " << std::endl;
// std::cin >> number2;
// std::cout << "Выберите математическую операцию: " << std::endl;
// std::cout << "1. Сложение" << std::endl;
// std::cout << "2. Вычитание" << std::endl;
// std::cout << "3. Умножение" << std::endl;
// std::cout << "4. Деление" << std::endl;
// int operation;
// std::cin >> operation;
// switch (operation) {
//     case 1:
//         std::cout << number1 + number2 << std::endl;
//         break;
//     case 2:
//         std::cout << number1 - number2 << std::endl;
//         break;
//     case 3: 
//         std::cout << number1 * number2 << std::endl;
//         break;  
//     case 4: 
//         std::cout << (float) number1 / number2 << std::endl;
//         break;
//     default:
//         std::cout << "Неверная операция" << std::endl;
//         break;      
// }
// return 0;
// }

// Урок 15. Циклы.ДЗ
// 2. Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, указанном пользователе.

// int main() {
//     setlocale(LC_ALL, "Russian");
//     int number1, number2, number3;
//     std::cout << "Введите первое число диапазона: " << std::endl;
//     std::cin >> number1;
//     std::cout << "Введите второе число диапазона: " << std::endl;
//     std::cin >> number2;
//     int sum = 0;
//     if (number1 % 2!= 0) {
//         sum += number1;
//     }
//     while (number2 >= number1) {
//         number3 = number1 + 1;
//         if (number3 % 2!= 0) {
//             sum += number3;
//         }
//         number1 = number3;
//     }

//     std::cout << sum << std::endl;
//     return 0;
//     }

// Урок 15. Циклы. ДЗ
// 1. Разработать программу, которая выводит на экран линию из символов. Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная - указывает пользователь. 

// int main() {
//     setlocale(LC_ALL, "Russian");
//     int number;
//     std::cout << "Введите количество символов: " << std::endl;
//     std::cin >> number;
//     char symbol;
//     std::cout << "Введите символ: " << std::endl;
//     std::cin >> symbol;
//     std::cout << "Выберите тип линии: " << std::endl;
//     std::cout << "1. Горизонтальная" << std::endl;
//     std::cout << "2. Вертикальная" << std::endl;
//     int type;
//     std::cin >> type;
//     if (type == 1) {
//         while (number > 0) {
//             std::cout << symbol;
//             number--;
//         }
//         std::cout << std::endl;
//     } else if (type == 2) {
//         for (int i = 0; i < number; i++) {
//             std::cout << symbol << std::endl;
//         }
//     }
//     else {
//         std::cout << "Неверный тип линии" << std::endl;
//         return 0;
//     }
//     return 0;
// }

// Урок 18. Ключевое слово Break
// int main() {
//     setlocale(LC_ALL, "Russian");
//     int number;
//     std::cout << "Начало цикла: " << std::endl;
//     for (int i = 0; i < 10; i++) {
//         std::cout << i << std::endl;
//         if (i == 5) {
//             break;
//         }
//     }
//     std::cout << "Конец цикла" << std::endl;
//     return 0;
// }

// Урок 19. Ключевое слово Continue
// int main() {
//     setlocale(LC_ALL, "Russian");
//     int number;
//     std::cout << "Начало цикла: " << std::endl;
//     for (int i = 0; i < 10; i++) {
//         if (i == 5) {
//             continue;
//         }
//          std::cout << i << std::endl;
//     }
//     std::cout << "Конец цикла" << std::endl;
//     return 0;
// }

// Урок 18. Ключевое слово Goto
// int main() {
//     setlocale(LC_ALL, "Russian");
//     std::cout << "Один: " << std::endl;
//     std::cout << "Два: " << std::endl;
//     std::cout << "Три: " << std::endl;
//     goto label;
//     std::cout << "Четыре: " << std::endl;
//     std::cout << "Пять: " << std::endl;
//     std::cout << "Шесть: " << std::endl;
//     std::cout << "Семь: " << std::endl;
//     label:
//     std::cout << "Восемь: " << std::endl;
//     std::cout << "Девять: " << std::endl; 
//     return 0;
// }

// Урок 24. Вложеннные циклы
// Домашнее задание. Написать программу, которая выводит на экран прямоугольник символом *. Высота и ширина задаётся пользователем.

// int main() {
//     setlocale(LC_ALL, "Russian");
//     int height, width;
//     std::cout << "Введите высоту прямоугольника: " << std::endl;
//     std::cin >> height;
//     std::cout << "Введите ширину прямоугольника: " << std::endl;
//     std::cin >> width;
//     for (int i = 0; i < height; i++) {
//         for (int j = 0; j < width; j++) {
//             std::cout << "*";
//         }
//         std::cout << std::endl;
//     }
//     return 0;
// }

// Урок 28. Массивы
// int main() {
//     setlocale(LC_ALL, "Russian");
//     const int SIZE = 5;
//     int arr[SIZE];
//     for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
//         arr[i] = i;
//         std::cout << arr[i] << std::endl;
//     }

//     int number1, number2;
//     std::cout << "Введите первое число: " << std::endl;
//     std::cin >> number1;
//     std::cout << "Введите второе число: " << std::endl;
//     std::cin >> number2;
//     int array[2];
//     array[0] = number1;
//     array[1] = number2;
//     std::cout << "Массив: " << std::endl;
//     for (int i = 0; i < 2; i++) {
//         std::cout << array[i] << std::endl;
//     }
//     return 0;
// }
// Урок 29. Генератор rand. srand. rand задать диапазон. srand time null. Генератора случайных чисел. randomize.

// int main() {
//     setlocale(LC_ALL, "Russian");
//     int a = rand();
//     std::cout << a << std::endl;
//     a = rand();
//     std::cout << a << std::endl;
//     srand(time(NULL));
//     a = rand()%10+5;
//     std::cout << a << std::endl;
//     a = rand()%10+5;
//     std::cout << a << std::endl;
//     return 0;
// }

    // int main() {
    //     srand(time(0));
    //     int number;
    //     number = rand() % 100;
    //     std::cout << number << std::endl;
    //     return 0;
    // }

    // int main() {
    //     srand(time(NULL));
    //     const int ARR_SIZE = 10;
    //     int arr[ARR_SIZE];
    //     for (int i = 0; i < ARR_SIZE; i++) {
    //         arr[i] = rand() % 20;
    //         std::cout << arr[i] << std::endl;
    //     }
    //     return 0;
    // }

    // Урок 29. Генератор rand. srand. rand задать диапазон. srand time null. Генератора случайных чисел. randomize.
    // Домашнее задание. Написать программу, которая заполняет и выводит на экран массив уникальными случайными целыми числами в заданном диапазоне. Диапазон задается пользователем.

    // int main() {
    //     srand(time(NULL));
    //     const int ARR_SIZE = 10;
    //     int arr[ARR_SIZE];
    //     for (int i = 0; i < ARR_SIZE; i++) {
    //         arr[i] = rand() % 20;
    //         std::cout << arr[i] << std::endl;
    //     }
    //     return 0;
    // }
    

// int main() {
//     // Set the seed for random number generation
//     srand(time(NULL));

//     // Get the range from the user
//     int start, end;
//     std::cout << "Enter the start of the range: ";
//     std::cin >> start;
//     std::cout << "Enter the end of the range: ";
//     std::cin >> end;

//     // Calculate the size of the array
//     int size = end - start + 1;

//     // Create an array to store the unique random numbers
//     int arr[size];

//     // Generate unique random numbers within the range and store them in the array
//     int index = 0;
//     while (index < size) {
//         int randomNum = start + rand() % (end - start + 1);
//         bool isUnique = true;
//         for (int i = 0; i < index; i++) {
//             if (arr[i] == randomNum) {
//                 isUnique = false;
//                 break;
//             }
//         }
//         if (isUnique) {
//             arr[index] = randomNum;
//             index++;
//         }
//     }

//     // Print the array
//     std::cout << "Unique random numbers in the range [" << start << ", " << end << "]:" << std::endl;
//     for (int i = 0; i < size; i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

// Функция для генерации уникальных случайных чисел в заданном диапазоне
// 

// void fillArrayWithUniqueRandom(int arr[], int size, int min, int max) {
//     if (max - min + 1 < size) {
//         std::cout << "Error: Range is too small for the array size." << std::endl;
//         return;
//     }

//     bool used[max - min + 1] = {false};
//     int count = 0;
//     while (count < size) {
//         int randomNum = rand() % (max - min + 1) + min;
//         if (!used[randomNum - min]) {
//             arr[count] = randomNum;
//             used[randomNum - min] = true;
//             count++;
//         }
//     }
// }

// int main() {
//     srand(static_cast<unsigned int>(time(0)));

//     int size, min, max;
//     std::cout << "Enter the size of the array: ";
//     std::cin >> size;
//     std::cout << "Enter the minimum value: ";
//     std::cin >> min;
//     std::cout << "Enter the maximum value: ";
//     std::cin >> max;

//     int arr[size];
//     fillArrayWithUniqueRandom(arr, size, min, max);

//     std::cout << "The array of unique random numbers is: ";
//     for (int i = 0; i < size; i++) {
//         std::cout << arr[i] << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

/*Заполнить массив уникальными случайными числами*/

// int main()
// {
// srand(time(NULL));

// const int SIZE = 10;
// int arr[SIZE];

// bool alreadyThere;

// for (int i = 0; i < SIZE; )
// {
// alreadyThere = false;
// int newRanomValue = rand() % 20;

// for (int j = 0; j < i; j++)
// {
// if (arr[j]==newRanomValue)
// {
// alreadyThere = true;
// break;
// }
// }

// if (!alreadyThere)
// {
// arr[i] = newRanomValue;
// i++;
// }

// }

// for (int i = 0; i < SIZE; i++)
// {
// std::cout << arr[i] << std::endl;
// }

// // Найти минимальный элемент массива
// int min = arr[0];
// for (int i = 1; i < SIZE; i++)
// {
// if (arr[i] < min)
// {
// min = arr[i];
// }
// }
// std::cout << "Минимальное значение: " << std::endl;
// std::cout << min << std::endl;
// return 0;
// }


//  урок 41. Шаблоны функций. Шаблонные функции c++. template typename. template class. 

// template <typename T1, typename T2, typename T3>
// T1 max(T2 a, T3 b) {
//     return (a > b) ? a : b;
// }

// template <typename T1, typename T2>
// void print_type(T1 a, T2 b) {
//     std::cout << typeid(a).name() << std::endl;
//     std::cout << typeid(b).name() << std::endl;
// }

// int main() {
//     int a = 5, b = 10;
//     double c = 5.5, d = 10.5;
//     std::cout << max<int>(a, b) << std::endl;  // Преобразование типов для возвращаемого значения
//     std::cout << max<double>(c, d) << std::endl;  // Преобразование типов для возвращаемого значения
//     char e = 'a';
//     print_type(e, d);
//     return 0;
// }

//  Урок 44ю Рекурсия. Факториал числа c++ рекурсивно. Рекурсия факториал. Рекурсивный алгоритм факториал.
// N! = N * (N - 1) * (N - 2) * ... * 1   =    N * (N - 1)!
// 0! = 1
// 1! = 1
// 2! = 2
// 3! = 3 * 2 * 1
// 4! = 4 * 3 * 2 * 1
// 5! = 5 * 4 * 3 * 2 * 1
// 

// цикл

// int main() {
//     int number;
//     std::cout << "Введите целое число: " << std::endl;
//     std::cin >> number;
//     int fact = 1;
//     for (int i = 1; i <= number; i++) {
//         fact *= i;
//     }
//     std::cout << "Факториал числа " << number << " равен " << fact << std::endl;
//     return 0;
// }

// рекрсия

// int fact(int number) {
//     if (number == 0) {
//         return 1;
//     }
//     return number * fact(number - 1);
// } 
// int main() {
//     int number;
//     std::cout << "Введите целое число: " << std::endl;
//     std::cin >> number;
//     std::cout << "Факториал числа " << number << " равен " << fact(number) << std::endl;
//     return 0;
// }

// Урок 48 Указатели

// void foo(int *pa){
// (*pa)++;
// }
// int main(){
// int a = 5;
// std::cout << a << std::endl;
// // int *pa = &a;
// foo(&a);
// std::cout << a << std::endl;
// return 0;
// }

// ДЗ Урок 49. Указатели
// Напишите функцию, меняющую местами значения переменных с помощью указателей.

// void swap_two(int *pa, int *pb) {
//     int temp = *pa;
//     *pa = *pb;
//     *pb = temp;
// }

// int main() {
//     int a = rand() % 10;
//     int b = rand() % 10;
//     std::cout << "a = " << a << std::endl;
//     std::cout << "b = " << b << std::endl;
//     swap_two(&a, &b);
//     std::cout << "a = " << a << std::endl;
//     std::cout << "b = " << b << std::endl;
//     return 0;
// }   

// Урок 50 c++ ссылки что это. c++ ссылки и указатели разница. Указатель на ссылку.

// int main() {

// int a =5;
// int *p_a = &a;
// int &b_ref = a;
// std::cout << a << std::endl;
// std::cout << b_ref << std::endl;
// b_ref++;
// std::cout << a << std::endl;
// std::cout << b_ref << std::endl;
// return 0;

// }

// void foo(int a) {
//     a = 1;
//     std::cout << a << std::endl;
// }
// void foo_ref(int &a) {
//     a = 2;
//     std::cout << a << std::endl;
// }

// void foo_pointer(int *a) {
//     *a = 3;
//     std::cout << *a << std::endl;
// }

// int main() {
//     int a = 5;
//     foo(a);
//     std::cout << a << std::endl;
//     foo_ref(a);
//     std::cout << a << std::endl;
//     foo_pointer(&a);
//     std::cout << a << std::endl;
//     return 0;
// }

// Домашнее задание Урок 51. Ссылки
// ДЗ №10. написать ШАБЛОННУЮ функцию которая меняет местами значения 2-х переменных с помощью ССЫЛОК.


//  template <typename T>
//  void swap_two(T &a_ref, T &b_ref) {
//      T temp = a_ref;
//      a_ref = b_ref;
//      b_ref = temp;
//  }

//  int main() {
//      int a = rand() % 10;
//      int b = rand() % 10;
//      std::cout << "a = " << a << std::endl;
//      std::cout << "b = " << b << std::endl;
//      swap_two(a, b);
//      std::cout << "a = " << a << std::endl;
//      std::cout << "b = " << b << std::endl;

//      double c = rand();
//      double d = rand();
//      std::cout << "c = " << c << std::endl;
//      std::cout << "d = " << d << std::endl;
//      swap_two(c, d);
//      std::cout << "c = " << c << std::endl;
//      std::cout << "d = " << d << std::endl;
//      return 0;
//  }

// Урок 53. new c++ что это. new c++ пример. c++ new delete. delete c++ что это. delete c++ пример. c++ new delete.

// int main() {
//     int *pa = new int;
//     *pa = 5;
//     std::cout << *pa << std::endl;
//     delete pa;
//     pa = nullptr;
//     if (pa != nullptr) {
//         std::cout << pa << std::endl;
//     }
//     delete pa;
//     return 0;
// }

// Урок 55. Динамический массив с++ пример. Создание, заполнение, удаление, размер динамического массива.

// int main() {

//     int size = 0;

//     std::cout << "Введите размер массива: " << std::endl;
//     std::cin >> size;

//     int *arr = new int[size];

//     for (int i = 0; i < size; i++) {
//         arr[i] = rand() % 10;
//         std::cout << arr[i] << "\t";
//         std::cout << arr + i << std::endl;
//     }



//     delete []  arr;
//     return 0;

// }

// урок 56. Двумерный динамический массив с++ пример. Создание, заполнение, удаление, размер динамического массива.

// int main(){
// int row = 0;
// int col = 0;
// std::cout << "Введите количество строк: " << std::endl;
// std::cin >> row;
// std::cout << "Введите количество столбцов: " << std::endl;
// std::cin >> col;
// int **arr = new int *[row];
// for(int i = 0; i < row; i++){
//     arr[i] = new int[col];
// }
// for(int i = 0; i < row; i++){
//     for(int j = 0; j < col; j++){
//         arr[i][j] = rand() % 10;
//         std::cout << arr[i][j] << "\t";
//     }
//     std::cout << std::endl;
// }
// for(int i = 0; i < row; i++){
//     delete [] arr[i];
// }
// delete [] arr;
// return 0;   
// }

// Урок 57. Константные аргументы функции. Константный указатель. Константные параметры. Константный тип. 
// Как скопировать динамический массив

// void fill_array(int* const arr, const int size){
//     for(int i = 0; i < size; i++){
//         arr[i] = rand() % 10;
//     }
// }

// void show_array(const int* const arr, const int size){
//     for(int i = 0; i < size; i++){
//         std::cout << arr[i] << "\t";
//     }
//     std::cout << std::endl;
// }

// int main(){
//     int size = 0;
//     std::cout << "Введите размер массива: " << std::endl;
//     std::cin >> size;
//     int* arr = new int[size];
//     fill_array(arr, size);
//     show_array(arr, size);
//     delete [] arr;
//     return 0;
// }

// Урок 58. Копирование динамического массива c++. Скопировать массив с++. С++ 

// void fill_array(int* const arr, const int size){
//     for(int i = 0; i < size; i++){
//         arr[i] = rand() % 10;
//     }
// }

// void show_array(const int* const arr, const int size){
//     for(int i = 0; i < size; i++){
//         std::cout << arr[i] << "\t";
//     }
//     std::cout << std::endl;
// }

// int main(){
//     int size1 = 0;
//     int size2 = 0;
//     std::cout << "Введите размер массива 1: " << std::endl;
//     std::cin >> size1;
//     std::cout << "Введите размер массива 2: " << std::endl;
//     std::cin >> size2;
//     int* array1 = new int[size1];
//     int* array2 = new int[size2];
//     fill_array(array1, size1);
//     fill_array(array2, size2);
//     std::cout << "Массив 1: \t";
//     show_array(array1, size1);
//     std::cout << "Массив 2: \t";
//     show_array(array2, size2);
//     delete [] array1;
//     array1 = new int[size2];
//     for (int i = 0; i < size2; i++) {
//         array1[i] = array2[i];
//     }
//     std::cout << "Массив 1: \t";
//     show_array(array1, size2);
//     std::cout << "Массив 2: \t";
//     show_array(array2, size2);
//     delete [] array2;
//     delete [] array1;
//     return 0;
// }
//  Урок 59. Изменить размер массива. Удалить. Добавить элемент в массив. Увеличение массива. Уменьшение массива.

// void fill_array(int* const arr, const int size){
//     for(int i = 0; i < size; i++){
//         arr[i] = rand() % 10;
//     }
// }

// void show_array(const int* const arr, const int size){
//     for(int i = 0; i < size; i++){
//         std::cout << arr[i] << "\t";
//     }
//     std::cout << std::endl;
// }

// void push_back(int* &array, int &size, int const value){
//     int* temp = new int[size + 1];
//     for(int i = 0; i < size; i++){
//         temp[i] = array[i];
//     }
//     temp[size] = value;
//     size++;
//     delete [] array;
//     array = temp;
// }

// void pop_back(int* &array, int &size){
//     size--;
//     int* temp = new int[size];
//     for(int i = 0; i < size; i++){
//         temp[i] = array[i];
//     }
//     delete [] array;
//     array = temp;
// }

// int main(){
//     int size = 0;

//     std::cout << "Введите размер массива: " << std::endl;
//     std::cin >> size;
//     int* array = new int[size];
//     fill_array(array, size);
//     std::cout << "Массив 1: \t\t\t\t";
//     show_array(array, size);
//     int new_element = 0;
//     std::cout << "Введите значение для нового элемента массива: " << std::endl;
//     std::cin >> new_element;
//     push_back(array, size, new_element);
//     std::cout << "Массив с новым элементом: \t\t";
//     show_array(array, size);
//     pop_back(array, size);
//     std::cout << "Массив без последнего элемента: \t";
//     show_array(array, size);
//     delete [] array;
//     return 0;
// }


// Урок 60 Строки в с++. Нуль терминатор. Что такое строка в с++. char c++ массив. С++ 
// ДЗ Написать свою реализацию функции strlen

// int stalength(const char *str){
//     int len = 0;
//     while(str[len] != '\0'){
//         len++;
//     }
//     return len;
// }

// int main(){
// const char *str1 = "Hello World";
// std::cout << stalength(str1) << std::endl;
// char str2 [] = "Hello World";
// std::cout << stalength(str2) << std::endl;
// char str3 [] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
// std::cout << stalength(str3) << std::endl;
// }

// Указатель на функцию в качестве параметра. Передача функции в качестве параметра. С++ урок 65


// // Функции, возвращающие строки
// std::string get_data_from_bd() {
//     return "Data from database";
// }

// std::string get_data_from_web_server() {
//     return "Data from webserver";
// }

// // Функция, принимающая указатель на функцию, которая возвращает std::string
// void show_info(std::string (*foo)()) {
//     std::cout << foo() << std::endl;
// }

// int main() {
//     // Передача указателя на функцию
//     show_info(get_data_from_bd);
//     show_info(get_data_from_web_server);
//     return 0;
// }




// Урок 68.Условная компиляция. #ifdef #else #endif #if #elif #endif #ifndef что это.
// #define DEBUG

// int main() {
//     setlocale(LC_ALL, "Rus");

// #ifdef DEBUG
//     std::cout << "Дебаг определен" << std::endl;

// // #ifndef DEBUG
// //     std::cout << "1 определен" << std::endl;

// #else
//     std::cout << "Дебаг не определен" << std::endl;
// #endif // DEBUG
// }


// #define DEBUG 5

// int main() {
//     setlocale(LC_ALL, "Rus");

// #if DEBUG == 4
//     std::cout << "Дебаг определен" << std::endl;

//  #elif DEBUG >= 5
//      std::cout << "1 определен" << std::endl;

// #else
//     std::cout << "Дебаг не определен" << std::endl;
// #endif // DEBUG

// }

//  Урок 70. Параметры функции main argc argv c++ что это. П Аргументы main. C ++
int main(int argc, char *argv[]) {
    std::cout << "Количество аргументов: " << argc << std::endl;
    for (int i = 0; i < argc; i++) {
        std::cout << "Аргумент " << i << ": " << argv[i] << std::endl;
    }
    return 0;
}