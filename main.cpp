#include <iostream>
#include "Calculator.h"

int main() {
    Calculator calc;

    std::cout << "Add: " << calc.add(5, 3) << std::endl;
    std::cout << "Subtract: " << calc.subtract(5, 3) << std::endl;
    std::cout << "Multiply: " << calc.multiply(5, 3) << std::endl;
    std::cout << "Divide: " << calc.divide(5, 3) << std::endl;

    return 0;
}
