#include <iostream>
#include "Calculator.h"

int main() {
    Calculator calc;

    int x = 10;
    int y = 5;

    std::cout << "Sum: " << calc.add(x, y) << std::endl;
    std::cout << "Difference: " << calc.subtract(x, y) << std::endl;
    std::cout << "Product: " << calc.multiply(x, y) << std::endl;

    std::cout << "Quotient: " << calc.divide(x, y) << std::endl;

    return 0;
}
