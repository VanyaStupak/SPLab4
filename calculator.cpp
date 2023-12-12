// Calculator.cpp
#include "Calculator.h"

Calculator::Calculator() {
    // Конструктор класу (можна реалізувати його за потреби)
}

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::multiply(int a, int b) {
    return a * b;
}

float Calculator::divide(int a, int b) {
    if (b != 0) {
        return static_cast<float>(a) / b;
    } else {
        // Обробка помилки: ділення на нуль
        return 0.0f;
    }
}
