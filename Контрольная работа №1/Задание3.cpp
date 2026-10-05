#include <iostream>
#include <cmath>

// Вывод корня квадратного многочлена ax^2 + bx + c
void Kvadrat(double a, double b, double c) {
    // Расчёт дискриминанта
    if (a == 0) {
        if (b == 0 && c == 0) {
            std::cout << "x - любое действительное число\n";
            return;
        }
        if (b == 0) {
            std::cout << "Корней нет\n";
            return;
        }
        double x = -c / b;
        std::cout << "Корень: x = " << x << "\n";
        return;
    }

    double disc = b * b - 4 * a * c;

    if (disc > 0) {
        double x1 = (-b + std::sqrt(disc)) / (2 * a);
        double x2 = (-b - std::sqrt(disc)) / (2 * a);
        std::cout << "x1 = " << x1 << ", x2 = " << x2 << "\n";
    } else if (disc == 0) {
        double x = -b / (2 * a);
        std::cout << "Один корень: x = " << x << "\n";
    } else {
        std::cout << "Действительных корней нет\n";
    }
}


// Запрашивает радиус круга и сторону квадрата, сравнивает их площади

void Areas() {
    double radius = 0.0;
    double side = 0.0;

    std::cout << "радиус круга: ";
    std::cin >> radius;

    std::cout << "сторона квадрата: ";
    std::cin >> side;

    double circleArea = 3.14 * radius * radius;
    double squareArea = side * side;

    std::cout << "Площадь круга: " << 3.14 * radius * radius << "\n";
    std::cout << "Площадь квадрата: " << side * side << "\n";

    // сравнение площадей
    if (circleArea == squareArea) {
        std::cout << "Площади равны\n";
    } 
    else if (circleArea > squareArea) {
        std::cout << "Наибольшая площадь у круга\n";
    } 
    else {
        std::cout << "Наибольшая площадь у квадрата\n";
    }
}


int main() {
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    // Ввод коэффициентов квадратного многочлена
    std::cout << "Введите коэффициенты a, b, c: ";
    std::cin >> a >> b >> c;

    // Ввод символа команды
    char command = '\0';
    std::cout << "Введите команду (R / c / s): ";
    std::cin >> command;

    // Обработка команды
    if (command == 'R') {
    std::cout << "Piskunov Nikolay\n"; // Вывод фамилии и имени
    } 
    else if (command == 'c') {
        Kvadrat(a, b, c); // Вывод корней квадратного многочлена
    } 
    else if (command == 's') {
        Areas(); // Сравнение площадей фигур
    } 
    else {
        std::cout << "Неизвестная команда\n";
    }

    return 0;
}
