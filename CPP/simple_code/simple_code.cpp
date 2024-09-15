#include <exception>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>

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
#include <iostream>

template <typename T>
class MyClass {
 public:
  // Конструктор с правильным именем
  MyClass(T value) {
    this->value_ = value;
  }

  T get() {
    return value_;
  }

  void set(T value) {
    this->value_ = value;
  }

  void dataTypeSize() {
    std::cout << "Size of T: " << sizeof(T) << " bytes" << std::endl;
  }

 private:
  T value_;
};

int main() {
  int a = 5;
  // Использование правильного имени класса с шаблоном
  MyClass<int> my_class_int(a);
  std::cout << my_class_int.get() << std::endl;

  my_class_int.set(10);
  std::cout << my_class_int.get() << std::endl;

  my_class_int.dataTypeSize();

  // Другой способ создания объекта
  MyClass<int> my_class(5);
  my_class.dataTypeSize();

  return 0;
}
