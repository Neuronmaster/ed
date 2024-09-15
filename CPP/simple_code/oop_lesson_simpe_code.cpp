#include <clocale>
#include <iostream>
#include <ctime>
#include <system_error>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
// #include <>
// #include <ifstream>
#include <sstream>
#include <iomanip>
#include <cctype>
#include <cmath>
#include <string>
#include <bitset> // для std::bitset
#include <memory> // для std::shared_ptr

// // Урок 75.Модификаторы доступа классов. public private protected что это. Спецификаторы доступа.

// class Organism {
// public:
//     std::string animal;
//     int age;

//     void print() {
//         std::cout << "Animal: " << animal << std::endl;
//         std::cout << "Age: " << age << std::endl;
//     }

// protected:
//     std::string name;

// private:
//     std::string gender;
// };

// int main() {
//     setlocale(LC_ALL, "Russian");
//     Organism cat;
//     cat.animal = "cat";
//     cat.age = 5;
//     // cat.name = "Kitty";
//     // cat.gender = "female";
//     cat.print();
//     return 0;
// }

// // Урок 76.Что такое геттеры и сеттеры для класса. Методы get и set. Инкапсуляция это. Пример.

// class Point {

//     public:
//         int get_x() {
//             return x;
//         }

//         int get_y() {
//             return y;
//         }

//         int get_z() {
//             return z;
//         }

//         void set_x(int value_x) {
//             x = value_x;
//             // this->x = x;
//         }
//         void set_y(int value_y) {
//             y = value_y;
//             // this->y = y;
//         }
//         void set_z(int value_z) {
//             z = value_z;
//             // this->z = z;
//         }

//         void print() {
//             std::cout << "X: " << x << std::endl;
//             std::cout << "Y: " << y << std::endl;
//             std::cout << "Z: " << z << std::endl;
//         }

//     private:
//         int x;
//         int y;
//         int z;

// };

// int main() {
//     setlocale(LC_ALL, "Russian");
//     Point point;
//     point.set_x(10);
//     point.set_y(20);
//     point.set_z(30);
//     int resultx = point.get_x() + 5;
//     int resulty = point.get_y() + 5;
//     int resultz = point.get_z() + 5;
//     std::cout << "X: " << resultx << std::endl;
//     std::cout << "Y: " << resulty << std::endl;
//     std::cout << "Z: " << resultz << std::endl;
//     point.print();
//     return 0;
// }

// // Урок 78. Конструктор класса пример. Зачем нужен. Конструктор с параметрами. Конструктор по умолчанию.

// class Point {
//     private:
//     int x;
//     int y;
//     int z;

//     public:
//     Point(int value_x, int value_y, int value_z) {
//         // this->x = x;
//         // this->y = y;
//         // this->z = z;
//         x = value_x;
//         y = value_y;
//         z = value_z;
//     }
//     void print() {
//         std::cout << "X: " << x << std::endl;
//         std::cout << "Y: " << y << std::endl;
//         std::cout << "Z: " << z << std::endl;
//     }
//     };

// int main() {    
//     setlocale(LC_ALL, "Russian");
//     Point point_1(10, 20, 30);
//     point_1.print();

//     Point point_2(5, 15, 25);
//     point_2.print();
//     return 0;
// }

//  урок 79. Перегрузка конструкторов класса. Что такое перегрузка. Как перегрузить конструктор.

// class Point {
//     private:
//     int x;
//     int y;
//     int z;

//     public:

//     Point() {
//         x = 0;
//         y = 0;
//         z = 0;
//     }
//     Point(int value_x, int value_y, int value_z) {
//         // this->x = x;
//         // this->y = y;
//         // this->z = z;
//         x = value_x;
//         y = value_y;
//         z = value_z;
//     }
//     void print() {
//         std::cout << "X: " << x << std::endl;
//         std::cout << "Y: " << y << std::endl;
//         std::cout << "Z: " << z << std::endl;
//     }
//     };

// int main() {    
//     setlocale(LC_ALL, "Russian");

//     Point point_1;
//     point_1.print();

//     Point point_2(5, 15, 25);
//     point_2.print();
//     return 0;
// }

// // Урок 80.   Деструктор что это. Зачем нужен деструктор класса в ООП. 


// class Myclass {
//     private:
//     int* data;
//     public: 
//         Myclass(int size) {
//         data = new int[size];
//         for (int i = 0; i < size; i++) {
//             data[i] = i;
//             std::cout << &data[i] << std::endl;
//         }
//         std::cout << "Вызвался конструктор\t" << *data << std::endl;
//         }
//         ~Myclass() {
//         delete[] data;
//         std::cout << "Вызвался деструктор" << std::endl;
//     }
//     };  

// void foo() {
//     std::cout << "Начало выполнения  функции foo" << std::endl;
//     Myclass myclass(3);
//     std::cout << "Конец выполнения функции foo" << std::endl;
// }
// int main() {
//     setlocale(LC_ALL, "Russian");
//     foo();
//     return 0;
// }

// Урок 81. Ключевое слово this в ООП. Что означает. Что это такое. Для чего нужен this указатель

// class Point {
//     private:
//     int x;
//     int y;
//     int z;

//     public:

//     Point() {
//         x = 0;
//         y = 0;
//         z = 0;
//     }
//     Point(int x, int y, int z) {
//         this->x = x;
//         this->y = y;
//         this->z = z;
//         // x = value_x;
//         // y = value_y;
//         // z = value_z;
//     }
//     void print() {
//         std::cout << "X: " << x << std::endl;
//         std::cout << "Y: " << y << std::endl;
//         std::cout << "Z: " << z << std::endl;
//     }
//     };

// int main() {    
//     setlocale(LC_ALL, "Russian");

//     Point point_1;
//     point_1.print();

//     Point point_2(5, 15, 25);
//     point_2.print();
//     return 0;
// }

//  Урок 82. Конструктор копирования. Что это. Пример. Когда вызывается Копирование объектов по умолчанию

// class Myclass {
//     private:
//     int* data;
//     int size;
//     public: 
//     // int data;
//         Myclass(int size) {
//         this -> data = new int[size];
//         this -> size = size;
//         for (int i = 0; i < size; i++) {
//             data[i] = i;
//             std::cout << &data[i] << std::endl;
//         }
//         std::cout << "Вызвался конструктор\t" << this << std::endl;
//         }

//     Myclass(const Myclass &other) {
//         this -> size = other.size;
//         this -> data = new int[other.size];
//         for (int i = 0; i < other.size; i++) {
//             this -> data[i] = other.data[i];
//             std::cout << &data[i] << std::endl;
//         }
         
//         std::cout << "Вызвался конструктор копирования\t" << this << std::endl;
//         }

//         ~Myclass() {
//         std::cout << "Вызвался деструктор\t" << this << std::endl;
//         delete[] data;
//     }
//     };  

// void foo(Myclass value) {
//     std::cout << "Вызвалсь функция foo" << std::endl;

// }

// Myclass foo_2(Myclass value) {
//     Myclass tmp(2);
//     std::cout << "Вызвалсь функция foo_2" << std::endl;
//     return tmp;
// }
// int main() {
//     setlocale(LC_ALL, "Russian");
//     Myclass myclass_1(10);
//     Myclass myclass_2(myclass_1);
//     return 0;
// }

// Урок 83. Перегрузка операторов пример. ООП. Перегрузка оператора присваивания. 

// class Myclass {
//     private:
//     int* data;
//     int size;
//     public: 
//     // int data;
//         Myclass(int size) {
//         this -> data = new int[size];
//         this -> size = size;
//         for (int i = 0; i < size; i++) {
//             data[i] = i;
//             std::cout << &data[i] << std::endl;
//         }
//         std::cout << "Вызвался конструктор\t" << this << std::endl;
//         }


// Myclass & operator = (const Myclass &other) {
// std::cout << "Вызвался оператор присваивания\t" << this << std::endl;
// if (this -> data != nullptr) {
//     delete [] this -> data;
// }
// this -> size = other.size;
// this -> data = new int[other.size];
// for (int i = 0; i < other.size; i++) {
//     this -> data[i] = other.data[i];
//     std::cout << &data[i] << std::endl;
//     std::cout << data[i] << std::endl;
// }
// return *this;
// }

    
//     Myclass(const Myclass &other) {
//         this -> size = other.size;
//         this -> data = new int[other.size];
//         for (int i = 0; i < other.size; i++) {
//             this -> data[i] = other.data[i];
//             std::cout << &data[i] << std::endl;
//         }
         
//         std::cout << "Вызвался конструктор копирования\t" << this << std::endl;
//         }

//         ~Myclass() {
//         std::cout << "Вызвался деструктор\t" << this << std::endl;
//         delete[] data;
//     }
//     };  

// void foo(Myclass value) {
//     std::cout << "Вызвалсь функция foo" << std::endl;

// }

// Myclass foo_2(Myclass value) {
//     Myclass tmp(2);
//     std::cout << "Вызвалсь функция foo_2" << std::endl;
//     return tmp;
// }
// int main() {
//     setlocale(LC_ALL, "Russian");
//     Myclass myclass_1(10);
//     Myclass myclass_2(5);
//     myclass_1 = myclass_2;
//     return 0;
// }

// Урок 84. Перегрузка оператора равенства == и не равно !=. Перегрузка логических операторов сравнения.

// class Point {
//     private:
//     int x;
//     int y;
//     int z;

//     public:

//     Point() {
//         x = 0;
//         y = 0;
//         z = 0;
//     }
//     Point(int x, int y, int z) {
//         this->x = x;
//         this->y = y;
//         this->z = z;
//     }

//     bool operator == (const Point &other) {
//         if ((this->x == other.x) && (this->y == other.y) && (this->z == other.z)) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }

//     bool operator!= (const Point &other) {
//         if ((this->x!= other.x) || (this->y!= other.y) || (this->z!= other.z)) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }

//     void print() {
//         std::cout << "X: " << x << std::endl;
//         std::cout << "Y: " << y << std::endl;
//         std::cout << "Z: " << z << std::endl;
//     }
//     };

// int main() {    
//     setlocale(LC_ALL, "Russian");

//     Point point_1;
//     point_1.print();

//     Point point_2(5, 15, 25);
//     point_2.print();

//     Point point_3(10, 20, 30);
//     point_3.print();

//     bool result = (point_1 == point_2);
//     std::cout << "Результат сравнения: " << result << std::endl;
    
//     bool result2 = (point_1!= point_3);
//     std::cout << "Результат сравнения: " << result2 << std::endl;
//     return 0;

// }


// Урок 84. Перегрузка оператора сложения. Перегрузка операторов пример

// class Point {
//     private:
//     int x;
//     int y;
//     int z;

//     public:

//     Point() {
//         x = 0;
//         y = 0;
//         z = 0;
//     }
//     Point(int x, int y, int z) {
//         this->x = x;
//         this->y = y;
//         this->z = z;
//     }

//     bool operator == (const Point &other) {
//         if ((this->x == other.x) && (this->y == other.y) && (this->z == other.z)) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }

//     bool operator!= (const Point &other) {
//         if ((this->x!= other.x) || (this->y!= other.y) || (this->z!= other.z)) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }

//     Point operator + (const Point &other) {
//         Point tmp;
//         tmp.x = this->x + other.x;
//         tmp.y = this->y + other.y;
//         tmp.z = this->z + other.z;
//         return tmp;
//     }
//     void print() {
//         std::cout << "X: " << x << std::endl;
//         std::cout << "Y: " << y << std::endl;
//         std::cout << "Z: " << z << std::endl;
//     }
//     };

// int main() {    
//     setlocale(LC_ALL, "Russian");

//     Point point_1;
//     point_1.print();

//     Point point_2(5, 15, 25);
//     point_2.print();

//     Point point_3(10, 20, 30);
//     point_3.print();

//     bool result = (point_1 == point_2);
//     std::cout << "Результат сравнения: " << result << std::endl;
    
//     bool result2 = (point_1!= point_3);
//     std::cout << "Результат сравнения: " << result2 << std::endl;

//     Point point_4 = point_1 + point_2;
//     point_4.print();
//     return 0;

// }

// Урок 86 Перегрузка инкремента и декремента. Постфиксного и префиксного. ООП перегрузка операторов.

// class Point {
//     private:
//     int x;
//     int y;
//     int z;

//     public:

//     Point() {
//         x = 0;
//         y = 0;
//         z = 0;
//     }
//     Point(int x, int y, int z) {
//         this->x = x;
//         this->y = y;
//         this->z = z;
//     }

//     bool operator == (const Point &other) {
//         if ((this->x == other.x) && (this->y == other.y) && (this->z == other.z)) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }

//     bool operator!= (const Point &other) {
//         if ((this->x!= other.x) || (this->y!= other.y) || (this->z!= other.z)) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }

//     Point operator + (const Point &other) {
//         Point tmp;
//         tmp.x = this->x + other.x;
//         tmp.y = this->y + other.y;
//         tmp.z = this->z + other.z;
//         return tmp;
//     }
//     Point operator ++ () {
//         this->x++;
//         this->y++;
//         this->z++;
//         return *this;
//     }

//     Point operator ++ (int) {
//         Point tmp = *this;
//         this->x++;
//         this->y++;
//         this->z++;
//         return tmp;
//     }

//     Point operator -- () {
//         Point tmp = *this;
//         this->x--;
//         this->y--;
//         this->z--;
//         return tmp;
//     }

//     Point operator -- (int) {
//         Point tmp = *this;
//         this->x--;
//         this->y--;
//         this->z--;
//         return tmp;
//     }

//     void print() {
//         std::cout << "X: " << x << std::endl;
//         std::cout << "Y: " << y << std::endl;
//         std::cout << "Z: " << z << std::endl;
//     }
//     };

// int main() {    
//     setlocale(LC_ALL, "Russian");

//     Point point_1;
//     point_1.print();

//     Point point_2(5, 15, 25);
//     point_2.print();

//     Point point_3(10, 20, 30);
//     point_3.print();

//     bool result = (point_1 == point_2);
//     std::cout << "Результат сравнения: " << result << std::endl;
    
//     bool result2 = (point_1!= point_3);
//     std::cout << "Результат сравнения: " << result2 << std::endl;

//     Point point_4 = point_1 + point_2;
//     point_4.print();

//     Point point_5 = ++point_1;
//     point_5.print();

//     Point point_6 = --point_3;
//     point_3.print();

//     Point point_7 = point_1++;
//     point_1.print();

//     Point point_8 = point_3--;
//     point_8.print();


//     return 0;

// }

// Урок 87. Перегрузка оператора индексирования . Перегрузка операторов пример

// class Test_class {
//     private:
//     int arr[5]{1, 2, 3, 4, 5};
   
//     public:

//     int & operator [] (int index) {
//         return arr[index];
//     }
// };
// int main() {
//     Test_class test;
//     std::cout << "test[0] = " << test[0] << std::endl;
//     std::cout << "test[1] = " << test[1] << std::endl;
//     std::cout << "test[2] = " << test[2] << std::endl;
//     std::cout << "test[3] = " << test[3] << std::endl;
//     std::cout << "test[4] = " << test[4] << std::endl;
//     test[0] = 100;
//     std::cout << "test[0] = " << test[0] << std::endl;
//     return 0;
// }

// Урок 88. Дружественные функции и классы пример. Для чего используются. Как определяются. Для двух классов 
// class Point {
//     private:
//     int x;
//     int y;
//     int z;

//     public:

//     Point() {
//         x = 0;
//         y = 0;
//         z = 0;
//     }
//     int get_x() {
//             return x;
//         }

//         int get_y() {
//             return y;
//         }

//         int get_z() {
//             return z;
//         }

//         void set_x(int x) {
//             this->x = x;
//         }
//         void set_y(int y) {
//             this->y = y;
//         }
//         void set_z(int z) {
//             this->z = z;
//         }

//     Point(int x, int y, int z) {
//         this->x = x;
//         this->y = y;
//         this->z = z;
//     }

//     bool operator == (const Point &other) {
//         if ((this->x == other.x) && (this->y == other.y) && (this->z == other.z)) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }

//     bool operator!= (const Point &other) {
//         if ((this->x!= other.x) || (this->y!= other.y) || (this->z!= other.z)) {
//             return true;
//         }
//         else {
//             return false;
//         }
//     }

//     Point operator + (const Point &other) {
//         Point tmp;
//         tmp.x = this->x + other.x;
//         tmp.y = this->y + other.y;
//         tmp.z = this->z + other.z;
//         return tmp;
//     }
//     Point operator ++ () {
//         this->x++;
//         this->y++;
//         this->z++;
//         return *this;
//     }

//     Point operator ++ (int) {
//         Point tmp = *this;
//         this->x++;
//         this->y++;
//         this->z++;
//         return tmp;
//     }

//     Point operator -- () {
//         Point tmp = *this;
//         this->x--;
//         this->y--;
//         this->z--;
//         return tmp;
//     }

//     Point operator -- (int) {
//         Point tmp = *this;
//         this->x--;
//         this->y--;
//         this->z--;
//         return tmp;
//     }

//     void print() {
//         std::cout << "X: " << x << std::endl;
//         std::cout << "Y: " << y << std::endl;
//         std::cout << "Z: " << z << std::endl;
//     }
//     friend void change_point(Point &value);
//     };

//     void change_point(Point &value) {
//         value.x = 100;
//         value.y = 100;
//         value.z = 100;
//     }

// int main() {    
//     setlocale(LC_ALL, "Russian");

//     Point point_1;
//     point_1.print();

//     Point point_2(5, 15, 25);
//     point_2.print();

//     Point point_3(10, 20, 30);
//     point_3.print();

//     bool result = (point_1 == point_2);
//     std::cout << "Результат сравнения: " << result << std::endl;
    
//     bool result2 = (point_1!= point_3);
//     std::cout << "Результат сравнения: " << result2 << std::endl;

//     Point point_4 = point_1 + point_2;
//     point_4.print();

//     Point point_5 = ++point_1;
//     point_5.print();

//     Point point_6 = --point_3;
//     point_3.print();

//     Point point_7 = point_1++;
//     point_1.print();

//     Point point_8 = point_3--;
//     point_8.print();

//     point_1.set_x(5);    
//     point_1.print();

//     change_point(point_1);
//     point_1.print();

//     return 0;

// }

// Урок 89. Определение методов вне класса. Вынести функцию в из класса. Вынести описание метода вне класса

// class Myclass {
//     public:

//     Myclass() {
//         std::cout << "Constructor" << std::endl;
//     }

//     ~Myclass() {
//         std::cout << "Destructor" << std::endl;
//     }

//     void print_message();
// };

// void Myclass::print_message() {
//     std::cout << "Hello World!" << std::endl;
// }

// int main() {
//     Myclass myclass;
//     myclass.print_message();
//     return 0;
// }
// // Урок 89. Дружественный метод класса. ООП. friend c++ что это. Функции друзья. C++
// class Apple; // Предварительное объявление класса Apple

// class Human {
// public:
//     void take_apple(Apple &apple);
// };

// class Apple {
// public:
//     Apple(int w, std::string c) : weight(w), color(c) {
//         std::cout << "Constructor" << std::endl;
//     }
//     ~Apple() {
//         std::cout << "Destructor" << std::endl;
//     }
//     void print_message();
//     friend void Human::take_apple(Apple &apple); // Объявляем дружественную функцию-член

// private:
//     int weight;
//     std::string color;
// };

// void Apple::print_message() {
//     std::cout << "Apple: " << weight << " " << color << std::endl;
// }

// void Human::take_apple(Apple &apple) {
//     apple.print_message();
// }

// int main() {
//     Apple apple(100, "red");
//     Human human;
//     human.take_apple(apple); // Используем метод класса Human
//     return 0;
// }


// Урок 91. Дружественные классы. ООП. friend class. friend c++ что это. C++

// class Apple {
// public:
//     Apple(int w, std::string c)/* : weight(w), color(c) */ {
//         std::cout << "Constructor" << std::endl;
//         this->weight = w;
//         this->color = c;
//     }
//     ~Apple() {
//         std::cout << "Destructor" << std::endl;
//     }
//     void print_message();
//     friend class Human; // Добавляем дружественный класс

// private:
//     int weight;
//     std::string color;
// };

// class Human {
// public:
//     void take_apple(Apple &apple) {
//         apple.print_message();
//     }
// };

// void Apple::print_message() {
//     std::cout << "Apple: " << weight << " " << color << std::endl;
// }

// int main() {
//     Apple apple(100, "red");
//     apple.print_message();
//     Human human;
//     human.take_apple(apple);
//     return 0;
// }

// Урок 92. static что это. Статические поля класса. Инициализация. Ключевое слово static

// class Apple {
// public:
//     static int count; // Объявляем статическое поле класса
//     Apple(int w, std::string c)/* : weight(w), color(c) */ {
//         std::cout << "Constructor" << std::endl;
//         this->weight = w;
//         this->color = c;
//         count++; // Увеличиваем значение статического поля класса на единицу
//     }
//     ~Apple() {
//         std::cout << "Destructor" << std::endl;
//     }
//     void print_message();
//     // friend class Human; // Добавляем дружественный класс

// private:
//     int weight;
//     std::string color;
// };
// int Apple::count = 0; // Инициализируем статическое поле класса


// void Apple::print_message() {
//     std::cout << "Apple: " << weight << " " << color << std::endl;
// }

// int main() {
//     Apple apple(100, "red");
//     apple.print_message();
//     std::cout << "Apple count: " << Apple::count << std::endl;
//     Apple apple2(200, "green");
//     apple2.print_message();
//     std::cout << "Apple count: " << Apple::count << std::endl;
    
  
//     return 0;
// }

// Домашнее задание. Написать генератор идентификаторов для объектов класса используя статическую переменную.


// class Human {
// public:
//     Human(int age, const std::string& name) : age(age), name(name) {
//         id = ++next_id;
//         std::cout << "id = " << id << ", Name = " << name << ", Age = " << age << std::endl;
//     }
//     ~Human() {
//         std::cout << "Destroying Human with id = " << id << std::endl;
//     }

//     static int get_next_id() {
//         return next_id;
//     }

// private:
//     static int next_id; // Статическая переменная для хранения следующего идентификатора
//     int id;             // Уникальный идентификатор для каждого объекта
//     int age;
//     std::string name;
// };

// int Human::next_id = 0; // Инициализация статической переменной

// int main() {
//     Human human1(56, "Alex");
//     Human human2(43, "Dima");
//     Human human3(34, "Vova");
//     Human human4(23, "Vasya");

//     std::cout << "Next id will be: " << Human::get_next_id() << std::endl;

//     return 0;
// }

// // Урок 94. Статические методы класса зачем нужны. Модификатор static. Как влияет. 

// class Human {
// public:
//     Human(int age, const std::string& name) : age(age), name(name) {
//         id = ++next_id;
//         std::cout << "id = " << id << ", Name = " << name << ", Age = " << age << std::endl;
//     }
//     ~Human() {
//         std::cout << "Destroying Human with id = " << id << std::endl;
//     }

//     static int get_next_id() {
//         return next_id;
//     }

//     static void change_age(Human &human, int new_age) {
//         human.age = new_age;
//     }

//     int get_age() const {
//         return age;
//     }

//     static void change_name(Human &human, const std::string& new_name) {
//         human.name = new_name;
//     }

//     std::string get_name() const {
//         return name;
//     }

// private:
//     static int next_id; // Статическая переменная для хранения следующего идентификатора
//     int id;             // Уникальный идентификатор для каждого объекта
//     int age;
//     std::string name;
// };

// int Human::next_id = 0; // Инициализация статической переменной

// int main() {
//     Human human1(56, "Alex");
//     Human human2(43, "Dima");
//     Human human3(34, "Vova");
//     Human human4(23, "Vasya");

//     std::cout << "Next id will be: " << Human::get_next_id() << std::endl;

//     Human::change_age(human1, 100);
//     Human::change_name(human1, "Alexander");

//     std::cout << "Updated Human1 -> id = " << Human::get_next_id() << ", Name = " << human1.get_name() << ", Age = " << human1.get_age() << std::endl;

//     return 0;
// }

// Урок 95. Вложенные классы с++ пример. Внутренние классы. Зачем нужны. inner class.

// class Image {
// public:
//     Image() : pixels{
//         Pixel(0, 1, 2),
//         Pixel(20, 40, 60),
//         Pixel(40, 60, 80),
//         Pixel(100, 120, 140),
//         Pixel(160, 255, 255)
//     } {
//         std::cout << "Image constructor" << std::endl;
//     }
//     ~Image() {
//         std::cout << "Image destructor" << std::endl;
//     }
//     void get_image_info() const {
//         std::cout << "Image info: " << std::endl;
//         for (int i = 0; i < LENGHT; i++) {
//             std::cout << pixels[i].get_info() << std::endl;
//         }
//     }

// private:
//     class Pixel {
//     public:
//         Pixel(int r, int g, int b) : r(r), g(g), b(b) {
//             std::cout << "Pixel constructor" << std::endl;
//         }
//         ~Pixel() {
//             std::cout << "Pixel destructor" << std::endl;
//         }
//         std::string get_info() const {
//             return std::to_string(r) + " " + std::to_string(g) + " " + std::to_string(b);
//         }

//     private:
//         int r;
//         int g;
//         int b;
//     };

//     static const int LENGHT = 5;
//     Pixel pixels[LENGHT];
// };

// int main() {
//     Image image;
//     image.get_image_info();
//     return 0;
// }

// Урок 96. Массив объектов класса. Динамический. Статический. Создание Особенности
// class Pixel {
// public:
//     Pixel() : r(0), g(0), b(0) {
//         std::cout << "Pixel constructor" << std::endl;
//     }

//     Pixel(int r, int g, int b) : r(r), g(g), b(b) {
//         std::cout << "Pixel constructor with parameters" << std::endl;
//     }

//     ~Pixel() {
//         std::cout << "Pixel destructor" << std::endl;
//     }

//     std::string get_info() const {
//         return std::to_string(r) + " " + std::to_string(g) + " " + std::to_string(b);
//     }

// private:
//     int r;
//     int g;
//     int b;
// };
// int main() {
//     const int LENGTH = 5;

//     // Инициализация статического массива
//     Pixel array[LENGTH];
//     for (int i = 0; i < LENGTH; i++) {
//         array[i] = Pixel(i, i * 2, i * 3);
//     }
//     for (int i = 0; i < LENGTH; i++) {
//         std::cout << array[i].get_info() << std::endl;
//     }
//     array[0] = Pixel{5, 8, 10};
//     std::cout << array[0].get_info() << std::endl;

//     // Инициализация динамического массива
//     Pixel* pixels = new Pixel[LENGTH];
//     for (int i = 0; i < LENGTH; i++) {
//         pixels[i] = Pixel(i * 10, i * 20, i * 30);
//     }
//     for (int i = 0; i < LENGTH; i++) {
//         std::cout << pixels[i].get_info() << std::endl;
//     }
//     delete[] pixels;

//     return 0;
// }



// Урок 97. Что такое агрегация и композиция. Отношения между классами и объектами. 

// class Cap{
//     public:
//     std::string get_color()
//     {
//         return color;
//     }
//     private:
//     std::string color = "red";
// };

// class Model {
//     public:
//     void inspect_model(){
//         std::cout << "I am " << cap.get_color() << std::endl;
//     }
//     private:
//     Cap cap;
// };
// class Human{
//     public:
//     void think(){
//         // std::cout << "I am thinking" << std::endl;
//         brain.think();
//     }
//     void inspect_the_cap(){
//         std::cout << "I am " << cap.get_color() << std::endl;
//     }
//     private:
//     class Brain{
//         public:
//         void think(){
//             std::cout << "I am thinking" << std::endl;
//         }
//     };
//     Brain brain;
//     Cap cap;
// };

// int main (){
//     Human human;
//     human.think();
//     human.inspect_the_cap();
//     Model model;
//     model.inspect_model();
//     return 0;
// }
// Урок 98. Наследование в ООП пример. Что такое наследование. Для чего нужно наследование классов.

// class Human {
//     public:
//     std::string set_name(std::string name){
//         this->name = name;
//         return name;
//     }
//     std::string get_name() {
//         return name;
//     }
//     private:
//     std::string name;
// };

// class Student : public Human {
//     public:
//     // std::string name;
//     std::string group;
//     void learn(){
//         std::cout << get_name() << " is learning" << std::endl;
//     }
// };

// class Extemural_Student : public Student {
//     public:
//     // std::string name;
//     std::string university;
//     void study(){
//         std::cout << get_name()<< " is studying" << std::endl;
//     }
// };

// class Professor : public Human {
//     public:
//     // std::string name;
//     std::string subject;
// };

// int main (){
//     Student student;
//    student.set_name("Petya");
//     student.learn();
// Extemural_Student extemural_student;
// extemural_student.set_name("Vasya");

// extemural_student.study();
//     return 0;
// }

// Урок 99. Модификаторы доступа при наследовании. private public protected Спецификаторы доступа.


// class A {
// public:
//     std::string message_one = "Message one";

// private:
//     std::string message_two = "Message two";

// protected:
//     std::string message_three = "Message three";
// };

// class B : public A {
// public:
//     void print_message_public() {
//         std::cout << message_one << std::endl;
//     }

//     void print_message_protected() {
//         std::cout << message_three << std::endl;
//     }

//     // Предоставляем метод для установки значения защищенной переменной
//     void set_message_protected(const std::string& message) {
//         message_three = message;
//     }
// };

// int main() {
//     B b;
    
//     // Переопределение переменных
//     b.message_one = "New Message One";
//     b.set_message_protected("New Message Three");

//     // Вывод обновленных сообщений
//     b.print_message_public();
//     b.print_message_protected();

//     return 0;
// }

// Урок 100, 101. Порядок вызова конструкторов при наследовании. Как вызываются конструкторы. Порядок вызова деструкторов при наследовании. Деструкторы.

// class A {
// public:
// A(){
//     std::cout << "A constructor" << std::endl;
// }

// ~A(){
//     std::cout << "A destructor" << std::endl;
// }
// };

// class B : public A {
// public:
// B(){
//     std::cout << "B constructor" << std::endl;
// }

// ~B(){
//     std::cout << "B destructor" << std::endl;
// }
// };

// class C : public B {
// public:
// C(){
//     std::cout << "C constructor" << std::endl;
// }

// ~C(){
//     std::cout << "C destructor" << std::endl;
// }
// };

// int main() {
//     C c;
    
    
//     return 0;
// }

// Урок 102. Вызов конструктора базового класса из конструктора класса-наследника. Наследование

// class A {
// public:
//     A() {
//         std::cout << "A constructor" << std::endl;
//     }

//     A(std::string message) : message(message) {
//         std::cout << "A constructor with message" << std::endl;
//     }

//     void set_message(const std::string& message) {
//         this->message = message;
//     }

//     std::string get_message() {
//         return message;
//     }

//     void print() {
//         std::cout << message << std::endl;
//     }

// private:
//     std::string message = "Message";
// };

// class B : public A {
// public:
//     B(): A("NEW") {
//         std::cout << "B constructor" << std::endl;
//     }

//     B(std::string message) : A(message) {
//         std::cout << "B constructor with message" << std::endl;
//     }
// };

// int main() {
//     // A a;
//     // a.print();

//     // A a_with_message("Custom message for B");
//     // a_with_message.print();
//     // a.set_message("Custom message NEW");
//     // a.print();

//     B b;
//     b.print();
//     B b_with_message("Custom message for B");
//     b_with_message.print();
//     return 0;
// }

// Урок 103. Виртуальные методы класса c++. Ключевое слово virtual. Ключевое слово override. ООП. 

// class Gun {
// public:
//     virtual void shout() {
//         std::cout << "Shooting" << std::endl;
//     }
// };

// class Submashine_gun : public Gun {
// public:
//     void shout() override {
//         std::cout << "Shooting with machine gun" << std::endl;
//     }
// };
// class Bazooka : public Gun {
// public:
//     void shout() override {
//         std::cout << "Shooting with bazooka" << std::endl;
//     }
// };
// class Playr {
// public:
//     void shoot(Gun* gun) {
//         gun->shout();
//     }
// };
// int main() {
//     Gun gun;
//     // gun.shout();
//     Submashine_gun submashine_gun;
//     // submashine_gun.shout();
//     Gun* gun_ptr = &submashine_gun;
//     gun_ptr->shout();

//     Playr playr;
//     Gun* gun_ptr2 = &submashine_gun;
//     playr.shoot(gun_ptr2);
//     return 0;
// }

// Урок 104. Абстрактный класс с++ пример. Чисто виртуальная функция. virtual. override. Полиморфизм ООП C++ 

// class Weapon {
// public:
//     virtual void shout() = 0;
// };

// class Gun : public Weapon {
// public:
//     void shout() override{
//         std::cout << "Shooting" << std::endl;
//     }
// };

// class Submashine_gun : public Gun {
// public:
//     void shout() override {
//         std::cout << "Shooting with machine gun" << std::endl;
//     }
// };
// class Bazooka : public Weapon {
// public:
//     void shout() override {
//         std::cout << "Shooting with bazooka" << std::endl;
//     }
// };

// class Knife : public Weapon {
// public:
//     void shout() override {
//         std::cout << "Shooting with knife" << std::endl;
//     }
// };
// class Playr {
// public:
//     void shoot(Weapon* weapon) {
//         weapon->shout();
//     }
// };
// int main() {
//     Gun gun;
//     // gun.shout();
//     Submashine_gun submashine_gun;
//     Knife weapon_knife;
//     Bazooka weapon_bazooka;
//     // submashine_gun.shout();
//     Weapon* weapon_ptr = &submashine_gun;
//     weapon_ptr->shout();

//     Playr playr;
//     Weapon* weapon_ptr2 = &weapon_bazooka;
//     playr.shoot(weapon_ptr2);
//     Weapon* weapon_ptr3 = &weapon_knife;
//     playr.shoot(weapon_ptr3);
//     return 0;
// }
// Урок 105. Виртуальный деструктор класса C++. Что это такое. Наследование. Полиморфизм. Чисто виртуальный деструктор c++. Наследование. Полиморфизм. virtual. override.


// class A {
// public:
//     A() {
//         std::cout << "A constructor dynamic memory allocated" << std::endl;
//     }
//     virtual ~A() {
//         std::cout << "A destructor dynamic memory freed" << std::endl;
//     }
// };

// class B : public A {
// public:
//     B() {
//         std::cout << "B constructor dynamic memory allocated" << std::endl;
//     }
//     ~B() override {
//         std::cout << "B destructor dynamic memory freed" << std::endl;
//     }
// };

// int main() {
//     A* b = new B(); // Выделение динамической памяти для объекта B
//     // Использование объекта b
//     delete b; // Освобождение динамической памяти

//     return 0;
// }

// Урок 106 Чисто виртуальный деструктор c++. Наследование. Полиморфизм. virtual. override.

// class A {
// public:
//     A() {
//         std::cout << "A constructor dynamic memory allocated" << std::endl;
//     }
//     virtual ~A() = 0;
// };
// A::~A() {};
// class B : public A {
// public:
//     B() {
//         std::cout << "B constructor dynamic memory allocated" << std::endl;
//     }
//     ~B() override {
//         std::cout << "B destructor dynamic memory freed" << std::endl;
//     }
// };

// int main() {
//     A* b = new B(); // Выделение динамической памяти для объекта B
//     // Использование объекта b
//     delete b; // Освобождение динамической памяти

//     return 0;
// }

// Урок 107. Делегирующие конструкторы c++. Вызов конструктора из конструктора.

// class Human {
// public:
//     Human(std::string name) {
//         this->name = name;
//         this->age = 0;
//         this->height = 0;
//         this->weight = 0;
//     }

//     Human(std::string name, int age): Human(name) {
//         this->age = age;
//     }

//     Human(std::string name, int age, double height, double weight): Human(name, age) {
//         this->height = height;
//         this->weight = weight;
//     }

//     ~Human() {
//         std::cout << "Destroying Human with name = " << name << std::endl;
//     }
//     std::string getName() {
//         return name;
//     }

//     int getAge() {
//         return age;
//     }

//     double getHeight() {
//         return height;
//     }

//     double getWeight() {
//         return weight;
//     }
// private:    
//     std::string name;
//     int age;
//     double height;
//     double weight;
// };

// int main () {
//     Human human("Alex",30,180,80);
//     std::cout << "Human name = " << human.getName() << " age = " << human.getAge() << " height = " << human.getHeight() << " weight = " << human.getWeight() << std::endl;
//     return 0;
// }
// Урок 108. c++ вызов виртуального метода базового класса. ООП.
// class Msg {
// public:
//    Msg(std::string msg) {
//         this->msg = msg;
//         std::cout << "Msg constructor dynamic memory allocated" << std::endl;
//     }
//     virtual std::string get_msg() {
//         return msg;
//     }
//     virtual ~Msg() {
//         std::cout << "Msg destructor dynamic memory freed" << std::endl;
//     }
//     private:
//     std::string msg;
// };

// class Brakets : public Msg {
// public:
//     Brakets(std::string msg) : Msg(msg) {}

//     std::string get_msg() override {
//         return "[" + Msg::get_msg() + "]";
//     }
// };

// class Printer {
// public:
//     void print(Msg* msg) {
//     std::cout << msg->get_msg() << std::endl;
//     }
// };




// int main () {
//     Msg* msg = new Msg("Hello");
//     Brakets* brakets = new Brakets("Hello");
//     Printer* printer = new Printer();
//     printer->print(msg);
//     printer->print(brakets);    
//     delete msg;
//     delete brakets;
//     delete printer;
//     return 0;
// }

// Урок 109 - 111. Множественное наследование c++ пример. ООП. Порядок вызова конструкторов при множественном наследовании. Порядок вызова деструкторов при множественном наследовании.

// class Car {
// public:
// Car (){
//     std::cout << "Car constructor dynamic memory allocated" << std::endl;
// }
// ~Car(){
//     std::cout << "Car destructor dynamic memory freed" << std::endl;
// }
// void drive(){
//     std::cout << "Car is driving" << std::endl;
// }
// };


// class Airplane {
// public:
// Airplane (){
//     std::cout << "Airplane constructor dynamic memory allocated" << std::endl;
// }
// ~Airplane(){
//     std::cout << "Airplane destructor dynamic memory freed" << std::endl;
// }
// void fly(){
//     std::cout << "Airplane is flying" << std::endl;
// }
// };

// class Flying_car : public Car, public Airplane {
//     public:
//     Flying_car(){
//         std::cout << "Flying car constructor dynamic memory allocated" << std::endl;
//     }
//     ~Flying_car(){
//         std::cout << "Flying car destructor dynamic memory freed" << std::endl;
//     }
// };

// int main() {

//     Flying_car flying_car;
//     flying_car.drive();
//     flying_car.fly();
//     return 0;
// }

// Урок 112. С++ множественное наследование одинаковые методы. приведение типов

// class Car {
// public:
// Car (){
//     std::cout << "Car constructor dynamic memory allocated" << std::endl;
// }
// ~Car(){
//     std::cout << "Car destructor dynamic memory freed" << std::endl;
// }
// void use(){
//     std::cout << "Car is driving" << std::endl;
// }
// };


// class Airplane {
// public:
// Airplane (){
//     std::cout << "Airplane constructor dynamic memory allocated" << std::endl;
// }
// ~Airplane(){
//     std::cout << "Airplane destructor dynamic memory freed" << std::endl;
// }
// void use(){
//     std::cout << "Airplane is flying" << std::endl;
// }
// };

// class Flying_car : public Car, public Airplane {
//     public:
//     Flying_car(){
//         std::cout << "Flying car constructor dynamic memory allocated" << std::endl;
//     }
//     ~Flying_car(){
//         std::cout << "Flying car destructor dynamic memory freed" << std::endl;
//     }

// };

// int main() {
//     Flying_car flying_car;
//     flying_car.Car::use();
//     ((Car)flying_car).use();
//     flying_car.Airplane::use();
//     ((Airplane)flying_car).use();
//     return 0;
// }

// Урок 113. Что такое интерфейс в ООП. Интерфейс c++ пример.

// class Ibicycle {
// public:
// void virtual ewist_the_wheel() = 0;
// void virtual drive() = 0;
// };

// class Simple_bicycle : public Ibicycle {
// public:
// void ewist_the_wheel() override {
//     std::cout << "metod ewist_the_wheel() imple_bicycle" << std::endl;
// }
// void drive() override {
//     std::cout << "metod drive() imple_bicycle" << std::endl;
// }
// };
// class sport_bicycle : public Ibicycle {
// public:
// void ewist_the_wheel() override {
//     std::cout << "metod ewist_the_wheel() sport_bicycle" << std::endl;
// }
// void drive() override {
//     std::cout << "metod drive() sport_bicycle" << std::endl;
// }
// };
// class Human {
// public:
// void ride_on_bicycle(Ibicycle & bicycle) {
//    std::cout << "Human is turn the steering wheel " << std::endl;
//    bicycle.ewist_the_wheel();
//    std::cout << "Human is driving by bicycle" << std::endl;
//    bicycle.drive();

// }
// };

// int main() {

//     Human human;

//     Simple_bicycle bicycle;
//     human.ride_on_bicycle(bicycle);

//     sport_bicycle sport_bicycle;
//     human.ride_on_bicycle(sport_bicycle);

//     return 0;
// }
// Урок 114. Виртуальное наследование c++. Ромбовидное наследование c++. 

// Урок 115 - 116. Чтение из файла с++ ifstream. Работа с файлами с++. Запись в файл. c++ ofstream.

// int main() {
//     std::ofstream file;
//     std::string path = "file.txt";
    
//     // Открытие файла в режиме добавления (append)
//     file.open(path, std::ofstream::app);

//     if (file.is_open()) {
//         std::cout << "File is open" << std::endl;

//         std::string input;
//         std::cout << "Enter a string to write to the file: ";
//         std::cin >> input;

//         // Запись данных в файл
//         file << input << "\n";
//         file << "Hello World!" << "\n";
//     } else {
//         std::cout << "File is not open" << std::endl;
//     }

//     // Закрытие файла
//     if (file.is_open()) {
//         file.close();
//     }
//      std::ifstream file2;
//     std::string path2 = "file.txt";
//     // Открытие файла в режиме чтения
//     file2.open(path2);
//     if (file2.is_open()) {
//         std::cout << "File is open" << std::endl;
//         std::string line;
//         while (getline(file2, line)) {
//             std::cout << line << std::endl;
//         }
//     } else {
//         std::cout << "File is not open" << std::endl;
//     }
//     // Закрытие файла
//     if (file2.is_open()) {
//         file2.close();
//     }

//     return 0;
// }

// Урок 117. Запись ОБЪЕКТА КЛАССА в файл с++. Чтение объекта из файла c++ 
// class Point {
// public:
//     Point() 
//     {
//     x = y = z = 0;
//     }
//     Point(int x, int y, int z) {
//         this->x = x;
//         this->y = y;
//         this->z = z;
//     }

//     void print() {
//         std::cout << x << " " << y << " " << z << std::endl;
//     }

//     int x;
//     int y;
//     int z;
// };

// int main() {
//     std::ofstream file;
//     std::string path = "point.txt";
//     Point point(14, 9, 16);
//     file.open(path, std::ofstream::app);
//     if (file.is_open()) {
//         // file << point.x << " " << point.y << " " << point.z;
//         file.write((char*)(&point), sizeof(Point));
//     }
//     else {
//         std::cout << "File is not open" << std::endl;
//     }
//     file.close();
//     // point.print();

//     std::ifstream file2;
//     std::string path2 = "point.txt";
//     file2.open(path2);
//     if (file2.is_open()) {
//         Point point2;
//         // std::string line;
//         // while (getline(file2, line)) {
//             // std::cout << line << std::endl;
//             while (file2.read((char*)(&point2), sizeof(Point))) {
//             point.print();
//             }
//             // file2.read((char*)(&point2), sizeof(Point));
//             // point.print();
//         }
//     else {
//         std::cout << "File is not open" << std::endl;
//     }
//     file2.close();
//     return 0;
// }

// Урок 118. Чтение и запись в файл с++ используя класс fstream c++.

// int main() {
//     setlocale(LC_ALL, "Rus");

//     std::string path = "file.txt";
//     std::fstream file;
//     file.open(path, std::fstream::in | std::fstream::out | std::fstream::app);

//     if (file.is_open()) {
//         std::cout << "File is open" << std::endl;
//         std::cout << "Push 1 to write" << std::endl;
//         std::cout << "Push 2 to read" << std::endl;
        
//         int choice;
//         std::cin >> choice;
//         std::cin.ignore();  // Чтобы игнорировать оставшийся символ новой строки после ввода числа

//         if (choice == 1) {
//             std::string input;
//             std::cout << "Enter a string to write to the file: ";
//             std::getline(std::cin, input);
//             file << input << "\n";
//         } else if (choice == 2) {
//             // Перемещаем указатель на начало файла
//             file.seekg(0, std::ios::beg);

//             std::string line;
//             while (std::getline(file, line)) {
//                 std::cout << line << std::endl;
//             }
//         }
//     } else {
//         std::cout << "File is not open" << std::endl;
//     }

//     file.close();

//     return 0;
// }

// Урок 119. Потоковый ввод вывод в файл c++. Перегрузка операторов.

// class Point {
// public:
//     Point() : x(0), y(0), z(0) {}

//     Point(int x, int y, int z) : x(x), y(y), z(z) {}
// private:
//     int x;
//     int y;
//     int z;

// friend std::ostream& operator<<(std::ostream& os, const Point& point);
// friend std::istream& operator>>(std::istream& is, Point& point);
// };

// std::ostream& operator<<(std::ostream& os, const Point& point) {
//     os << point.x << " " << point.y << " " << point.z;
//     return os;
// }

// std::istream& operator>>(std::istream& is, Point& point) {
//     is >> point.x >> point.y >> point.z;
//     return is;
// }

// int main() {
//     std::fstream file;
//     std::string path = "point.txt";
//     file.open(path, std::fstream::in | std::fstream::out | std::fstream::app);
//     if (file.is_open()) {
//         std::cout << "Reading points from file:\n";
//         std::string line;
//         while (true) {
//             Point point;
//             file >> point;
//             std::cout << point << std::endl;
//             if (file.eof()) {
//                 break;
//             }
//         }
//         file.close();
//     } else {
//         std::cout << "File is not open for reading" << std::endl;
//     }

//     return 0;
// }
// Урок 120. С++ try catch. Обработка исключений С++. try catch что это. 
// Урок 120. С++ try catch. Обработка исключений С++. try catch что это. Примеры





// int main()
// {
//     std::string path = "Myfile.txt";
//     std::ifstream fin;
//     fin.exceptions(std::ifstream::failbit | std::ifstream::badbit); // exceeption(ifstream::failbit | ifstream::badbit);
//     try
//     {
//         std::cout << "Try open file" << std::endl;
//         fin.open(path);
//         std::cout << "File open" << std::endl;
//     }
//     catch (const std::ifstream::failure& ex)
//     {
//         std::cout << ex.what() << std::endl;
//         std::cout << ex.code() << std::endl;
//         std::cout << "Error open file" << std::endl;
//     }
// /*
//     fin.open(path);
//     if (!fin.is_open())
//     {
//         std::cout << "Error open file" << std::endl;
//     }
//     else
//     {
//         std::cout << "File open" << std::endl;
//     }
//     */
//     fin.close();
//     return 0;
// }

// // Урок 121. Генерация исключений с++ пример. throw c++ пример.
// int main()
// {
//     std::string path = "Myfile.txt";
//     std::ifstream fin;
//     fin.exceptions(std::ifstream::failbit | std::ifstream::badbit); // exceeption(ifstream::failbit | ifstream::badbit);
//     try
//     {
//         std::cout << "Try open file" << std::endl;
//         fin.open(path);
//         std::cout << "File open" << std::endl;
//     }
//     catch (const std::ifstream::failure& ex)
//     {
//         std::cout << ex.what() << std::endl;
//         std::cout << ex.code() << std::endl;
//         std::cout << "Error open file" << std::endl;
//     }
//     fin.close();
//     return 0;


// void Foo(int value) {
//     if (value < 0) {
//         throw std::runtime_error("value < 0");
//     }
//     std::cout << "value = " << value << std::endl;
// }

// int main() {
//     try {
//         Foo(55);
//     }
//     catch (const std::exception &ex) {
//         std::cout << "We caught: " << ex.what() << std::endl;
//     }
//     return 0;
// }

// Урок 122. Несколько блоков catch. Обработка исключений С++. 


// void Foo(int value) {
//     if (value < 0) {
//         throw "value < 0 !!!";
//     }

//     if (value == 0) {
//         throw std::runtime_error("value = 0!!!");
//     }
//     if (value == 1) {
//         throw 1;
//     }
//     std::cout << "value = " << value << std::endl;
// }

// int main() {
//     try {
//         Foo(1);
//     }
//     catch (const std::exception &ex) {
//         std::cout << "Block catch 1. We caught: " << ex.what() << std::endl;
//     }
//     catch (const char *ex) {
//         std::cout << "Block catch 2. We caught: " << ex << std::endl;
//     }
//     catch (...) {
//         std::cout << "Block catch 3. We caught something else" << std::endl;
//     }
//     return 0;
// }

// Урок 123. ГСвой класс exception c++. Создание собственного класса исключений.

// class MyException : public std::exception {
// public:
//     MyException(const char* msg, int dataState)
//         : message(msg), dataState(dataState) {}

//     // Используем _NOEXCEPT для соответствия базовому классу в вашей среде
//     const char* what() const _NOEXCEPT override {
//         return message;
//     }

//     int GetDataState() const {
//         return dataState;
//     }

// private:
//     const char* message;  // Убедитесь, что это совпадает с инициализатором
//     int dataState;
// };

// void Foo(int value) {
//     if (value < 0) {
//         throw std::runtime_error("value < 0!!!");
//     }

//     if (value == 0) {
//         throw MyException("value = 0!!!", value);
//     }

//     if (value == 1) {
//         throw 1;
//     }

//     std::cout << "value = " << value << std::endl;
// }

// int main() {
//     try {
//         Foo(0);
//     }
//     catch (MyException& ex) {
//         std::cout << "Block catch 1. We caught: " << ex.what() << std::endl;
//         std::cout << "Data state: " << ex.GetDataState() << std::endl;
//     }
//     catch (const std::runtime_error& ex) {
//         std::cout << "Block catch 2. We caught runtime_error: " << ex.what() << std::endl;
//     }
//     catch (int ex) {
//         std::cout << "Block catch 3. We caught an integer: " << ex << std::endl;
//     }
//     catch (...) {
//         std::cout << "Block catch 4. We caught something else" << std::endl;
//     }
//     return 0;
// }

// Урок 124. Перечисляемый тип enum С++

// enum PCState
// {
//     OFF,
//     ON,
//     SLEEP
// };

// class PC
// {
// public:
//     PCState GetState()
//     {
//         return state;
//     };
//     void SetState(PCState State)
//     {
//         this->state = State;
//     };
//     private:
//     PCState state;
// };

// int main()
// {
//     PC pc;
//     pc.SetState(PCState::ON);
//     if (pc.GetState() == PCState::ON)
//     {
//         std::cout << "PC is working" << std::endl;
//     }
//     switch(pc.GetState())
//     {
//         case PCState::OFF:
//             std::cout << "PC is off" << std::endl;
//             break;
//         case PCState::ON:
//             std::cout << "PC is on" << std::endl;
//             break;
//         case PCState::SLEEP:
//             std::cout << "PC is sleeping" << std::endl;
//             break;
//     }
//     return 0;
// }

// Урок 125. Шаблоны классов с++ примеры. Обобщенные классы.

// class Point {
// public:
//     Point() 
//     {
//     x_ = y_ = z_ = 0;
//     }
//     Point(int x, int y, int z) {
//         this->x_ = x;
//         this->y_ = y;
//         this->z_ = z;
//     }

//     void print() {
//         std::cout << x_ << " " << y_ << " " << z_ << std::endl;
//     }
// private:
//     double x_, y_, z_;
// };

// template <typename T1, typename T2>
// class MyClass {
//  public:
//   // Конструктор с правильным именем
//   MyClass(T1 value, T2 value2) {
//     this->value_ = value;
//     this->value2_ = value2;
//   }

//   T1 get() {
//     return value_;
//   }
//  T2 get2() {
//     return value2_;
//   }

//   void set(T1 value) {
//     this->value_ = value;
//   }
// void set2(T2 value2) {
//     this->value2_ = value2;
//   }
//   void dataTypeSize() {
//     std::cout << "Size of T1: " << sizeof(T1) << " bytes" << std::endl;
//     std::cout << "Size of T2: " << sizeof(T2) << " bytes" << std::endl;
//   }

//  private:
//   T1 value_;
//   T2 value2_;
// };

// int main() {
//   int a = 5;
//   // Использование правильного имени класса с шаблоном
//   MyClass<int, Point> my_class_int(a, Point(1, 2, 3));
//   std::cout << my_class_int.get() << std::endl;

//   my_class_int.set(10);
//   std::cout << my_class_int.get() << std::endl;

//   my_class_int.dataTypeSize();

//   // Другой способ создания объекта
//   MyClass<int, Point> my_class(5, Point(1, 2, 3));
//   my_class.dataTypeSize();

//   return 0;
// }

// Урок 125. Наследование шаблонных классов.
//  class Point {
// public:
//     Point() 
//     {
//     x_ = y_ = z_ = 0;
//     }
//     Point(int x, int y, int z) {
//         this->x_ = x;
//         this->y_ = y;
//         this->z_ = z;
//     }

//     void print() {
//         std::cout << x_ << " " << y_ << " " << z_ << std::endl;
//     }
// private:
//     double x_, y_, z_;
// };

// template <typename T1, typename T2>
// class TypeSize {
//  public:
//   // Конструктор с правильным именем
//   TypeSize(T1 value, T2 value2) {
//     this->value_ = value;
//     this->value2_ = value2;
//   }

//   T1 get() {
//     return value_;
//   }
//  T2 get2() {
//     return value2_;
//   }

//   void set(T1 value) {
//     this->value_ = value;
//   }
// void set2(T2 value2) {
//     this->value2_ = value2;
//   }
//   void dataTypeSize() {
//     std::cout << "Size of T1: " << sizeof(T1) << " bytes" << std::endl;
//     std::cout << "Size of T2: " << sizeof(T2) << " bytes" << std::endl;
//   }

//  private:
//   T1 value_;
//   T2 value2_;
// };


// template <typename T1, typename T2>
// class TypeInfo : public TypeSize<T1, T2> {
//  public:
//   TypeInfo(T1 value, T2 value2) : TypeSize<T1, T2>(value, value2) {}

// void showTypeName() {
//     std::cout << typeid(T1).name() << std::endl;
//     std::cout << typeid(T2).name() << std::endl;
//   }


// };

// int main() {
//   int a = 5;
//   // Использование правильного имени класса с шаблоном
//   TypeInfo<double, Point> my_class_int(a, Point(1, 2, 3));
//   std::cout << my_class_int.get() << std::endl;

//   my_class_int.set(10.245);
//   std::cout << my_class_int.get() << std::endl;

//   my_class_int.dataTypeSize();

//   my_class_int.showTypeName();

//   // Другой способ создания объекта
// //   TypeInfo<int, Point> my_class(5, Point(1, 2, 3));
// //   my_class.dataTypeSize();

//   return 0;
// }

// Задание:
// Создайте шаблонный базовый класс Shape, который будет представлять геометрическую фигуру. От этого класса унаследуйте несколько шаблонных классов, представляющих конкретные фигуры, 
// такие как Circle и Rectangle.

// Требования к реализации:
// Базовый класс Shape:

// Шаблонный класс с типом данных T, представляющим тип чисел (например, int, double).
// Имеет метод area(), который возвращает площадь фигуры. Этот метод должен быть виртуальным и возвращать T.
// Имеет метод printArea(), который выводит площадь фигуры на экран.
// Класс-наследник Circle:

// Унаследуйте от Shape<T>.
// Имеет член данных radius_ типа T, представляющий радиус круга.
// Реализуйте метод area(), который вычисляет площадь круга по формуле: π * радиус².
// Используйте инициализационный список для инициализации радиуса и базового класса.
// Класс-наследник Rectangle:

// Унаследуйте от Shape<T>.
// Имеет два члена данных: width_ и height_ типа T, представляющие ширину и высоту прямоугольника.
// Реализуйте метод area(), который вычисляет площадь прямоугольника по формуле: ширина * высота.
// Используйте инициализационный список для инициализации ширины, высоты и базового класса.
// Задача:
// Реализуйте классы Shape, Circle, и Rectangle в соответствии с описанием.
// В main() создайте объекты Circle и Rectangle с различными параметрами, вызовите метод printArea() для каждого объекта, чтобы увидеть площади фигур.
// int main() {
//     Circle<double> circle(5.0);       // Радиус круга 5.0
//     circle.printArea();               // Должно вывести: Площадь круга: 78.54 (если π = 3.1416)

//     Rectangle<int> rectangle(4, 5);   // Прямоугольник шириной 4 и высотой 5
//     rectangle.printArea();            // Должно вывести: Площадь прямоугольника: 20

//     return 0;
// }

// Подсказки:
// Используйте константу M_PI из библиотеки <cmath> для вычисления значения π.
// Метод printArea() в базовом классе может вызывать метод area(), чтобы получить площадь и вывести её.
// Попробуйте выполнить это задание, и если будут возникать вопросы или трудности, мы разберём их вместе! Удачи!

// // Код для проверки:
// #include <iostream>
// #include <cmath>  // для M_PI

// template <typename T>
// class Shape {
//  public:
//   virtual T area() = 0;  // Чисто виртуальный метод
//   virtual void printArea() {
//     std::cout << "Area: " << area() << std::endl;
//   }
// };

// template <typename T>
// class Circle : public Shape<T> {
//  public:
//   Circle(T radius) : radius_(radius) {}
//   T area() {
//     return M_PI * radius_ * radius_;
//   }

//  private:
//   T radius_;
// };

// template <typename T>
// class Rectangle : public Shape<T> {
//  public:
//   Rectangle(T width, T height) : width_(width), height_(height) {}
//   T area() {
//     return width_ * height_;
//   } 
//  private:
//   T width_;
//   T height_;
// };

// int main() {
//     Circle<double> circle(5.0);        // Радиус круга 5.0
//     circle.printArea();                // Должно вывести: Площадь круга: 78.54 (если π = 3.1416)

//     Rectangle<int> rectangle(4, 5);    // Прямоугольник шириной 4 и высотой 5
//     rectangle.printArea();             // Должно вывести: Площадь прямоугольника: 20

//     return 0;
// }

// // Урок 128. Специализация шаблона класса. 
// template <typename T>
// class Printer {
// public:
//     void print(T value) 
//     {
//         std::cout << value << std::endl;
//     }
// };

// template <>
// class Printer<std::string> {
// public:
//     void print(std::string value) 
//     {
//         std::cout << "_____" << value << "_____" << std::endl;
//     }
// };

// int main() {
//     Printer<int> printer;
//     printer.print(5);        // Должно вывести: 5
//     printer.print(6); 
//     Printer<double> printer_d;
//     printer_d.print(5.5);    // Должно вывести: 5.5
//     Printer<std::string> printer_z;     // Должно вывести: 5.5
//     printer_z.print("Hello");  // Должно вывести: Hello
//     return 0;
// }

// Задание:
// Создайте шаблонный класс Container, который будет хранить значения и обеспечивать доступ к ним. Реализуйте полную специализацию для bool, 
// а также частичную специализацию для указателей.

// Требования:
// Общий шаблон класса Container<T>:

// Должен хранить одно значение типа T.
// Реализуйте методы:
// set(T value) — устанавливает значение.
// get() — возвращает текущее значение.
// print() — выводит значение на экран.
// Полная специализация для типа bool:

// В специализированной версии храните значение типа bool в виде одного бита для экономии памяти.
// Реализуйте методы:
// set(bool value) — устанавливает значение.
// get() — возвращает текущее значение.
// print() — выводит значение как "true" или "false".
// Частичная специализация для указателей T*:

// Должен хранить указатель и обеспечивать работу с ним.
// Реализуйте методы:
// set(T* value) — устанавливает указатель.
// get() — возвращает указатель.
// print() — выводит адрес указателя на экран.
// int main() {
//     Container<int> intContainer;       // Общий шаблон
//     intContainer.set(42);
//     intContainer.print();              // Должно вывести: Value: 42

//     Container<bool> boolContainer;     // Полная специализация для bool
//     boolContainer.set(true);
//     boolContainer.print();             // Должно вывести: Value: true

//     int value = 100;
//     Container<int*> ptrContainer;      // Частичная специализация для указателей
//     ptrContainer.set(&value);
//     ptrContainer.print();              // Должно вывести: Pointer Address: <адрес>

//     return 0;
// }
// Подсказки:
// Для полной специализации типа bool можно использовать побитовые операции для хранения значений в одном бите.
// В частичной специализации для указателей используйте шаблонный параметр T* и реализуйте методы так, чтобы корректно работать с указателями.
// Попробуйте выполнить это задание, и если будут вопросы или трудности, мы разберём их вместе! Удачи!

// template <typename T>
// class Container {
// public:
//   void set(T value) {
//     value_ = value;
//   }
//   T get() {
//     return value_;
//   }
//   void print() {
//     std::cout << "Value: " << value_ << std::endl;
//   }
// private:
//   T value_;
// };

// template <>
// class Container<bool> {
// public:
//     void set(bool value) {
//         bitset_[0] = value;  // Устанавливаем значение в бит
//     }

//     bool get() {
//         return bitset_[0];   // Возвращаем значение бита
//     }

//     void print() {
//         std::cout << "Value: " << (bitset_[0] ? "true" : "false") << std::endl;
//     }

// private:
//     std::bitset<1> bitset_;  // Хранение булевого значения в виде одного бита
// };

// template <typename T>
// class Container<T*> {
// public:
//   void set(T* value) {
//     value_ = value;
//   }
//   T* get() {
//     return value_;
//   }
//   void print() {
//     if (value_) {
//         std::cout << "Pointer Address: " << value_ << std::endl;
//     } else {
//         std::cout << "Pointer is null" << std::endl;
//     }
// }
// private:
//   T* value_;
// };

// int main() {
//     Container<int> intContainer;       // Общий шаблон
//     intContainer.set(42);
//     intContainer.print();              // Должно вывести: Value: 42

//     Container<bool> boolContainer;     // Полная специализация для bool
//     boolContainer.set(true);
//     boolContainer.print();             // Должно вывести: Value: true

//     int value = 100;
//     Container<int*> ptrContainer;      // Частичная специализация для указателей
//     ptrContainer.set(&value);
//     ptrContainer.print();              // Должно вывести: Pointer Address: <адрес>

//     return 0;
// }
// Урок 130. Умные указатели. Smart pointers.
// template <typename T>
// class SmartPointer
// {
// public:
// SmartPointer(T *ptr)
// {
// this -> ptr_ = ptr;
// std::cout << "Smart pointer created" << std::endl;
// }
// ~SmartPointer()
// {
// std::cout << "Smart pointer deleted" << std::endl;
// delete ptr_;
// }
// T &operator*()
// {
// return *ptr_;
// }
// T *get()
// {
// return ptr_;
// }
// void set(T *ptr)
// {
// delete ptr_;
// ptr_ = ptr;
// }

// private:
// T *ptr_;
// };

// int main() {
//   SmartPointer<int> ptr(new int(563));
//   std::cout << *ptr.get() << std::endl;
//     return 0;
// }

// Урок 131. auto_ptr | unique_ptr | shared_ptr | weak_ptr Умные указатели.
// Задание:
// Создайте программу, которая моделирует управление объектами в игровой системе с использованием 
// умных указателей. Вам нужно будет создать классы для представления игрока (Player) и предметов (Item). 
// Используйте std::shared_ptr для управления игроками и std::weak_ptr для отслеживания владения предметами,
//  чтобы избежать циклических ссылок.

// Требования:
// Класс Item:

// Каждый предмет имеет имя (строка) и указатель на владельца типа std::weak_ptr<Player>.
// Реализуйте метод setOwner(std::shared_ptr<Player> owner), который устанавливает владельца предмета.
// Реализуйте метод printOwner(), который выводит имя владельца, если он существует, или сообщение, 
// что владелец отсутствует.
// Класс Player:

// Игрок имеет имя (строка) и список предметов (std::vector<std::shared_ptr<Item>>).
// Реализуйте метод addItem(std::shared_ptr<Item> item), который добавляет предмет в инвентарь игрока 
// и устанавливает владельца предмета.
// Реализуйте метод printInventory(), который выводит список всех предметов и их владельцев.
// Основная программа:

// Создайте нескольких игроков и несколько предметов.
// Раздайте предметы игрокам.
// Выведите инвентарь каждого игрока и проверьте владение предметами через std::weak_ptr.
// Пример использования:
// cpp
// Copy code
// int main() {
//     // Создаём игроков
//     auto player1 = std::make_shared<Player>("Alice");
//     auto player2 = std::make_shared<Player>("Bob");

//     // Создаём предметы
//     auto sword = std::make_shared<Item>("Sword");
//     auto shield = std::make_shared<Item>("Shield");
//     auto potion = std::make_shared<Item>("Potion");

//     // Добавляем предметы игрокам
//     player1->addItem(sword);
//     player1->addItem(potion);

//     player2->addItem(shield);

//     // Выводим инвентарь игроков
//     player1->printInventory();
//     player2->printInventory();

//     // Выводим владельцев предметов
//     sword->printOwner();
//     shield->printOwner();
//     potion->printOwner();

//     return 0;
// }
// Подсказки:
// Используйте std::shared_ptr для владения объектами игроков и предметов.
// Используйте std::weak_ptr в классе Item для отслеживания владельца, чтобы предотвратить циклические ссылки.
// Обратите внимание на использование методов lock() для безопасного доступа к объектам через std::weak_ptr.
// Попробуйте выполнить задачу, и если будут вопросы или трудности, мы разберём их вместе! 

class Player
{
public:
    std::string name;
    std::vector<std::shared_ptr<Item>> items;
};

class Item
{
public:
    std::string name;
    std::weak_ptr<Player> owner;

    void setOwner(std::shared_ptr<Player> owner)
    {
        this->owner = owner;
    }       
    void printOwner()
    {
        if (auto owner = this->owner.lock())
        {
            std::cout << "Owner: " << owner->name << std::endl;
        }
        else
        {
            std::cout << "No owner" << std::endl;
        }
    }
};

