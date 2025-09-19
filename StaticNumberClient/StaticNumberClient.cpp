#include <iostream>
#include "NumberLibrary.h"

int main() {
    std::cout << "Zero: " << NumberLibrary::Number::ZERO.getValue() << std::endl;
    std::cout << "One: " << NumberLibrary::Number::ONE.getValue() << std::endl;

    NumberLibrary::Number a = NumberLibrary::createNumber(10.5);
    NumberLibrary::Number b = NumberLibrary::createNumber(2.5);

    NumberLibrary::Number sum = a + b;
    NumberLibrary::Number diff = a - b;
    NumberLibrary::Number product = a * b;
    NumberLibrary::Number quotient = a / b;

    std::cout << "a + b = " << sum.getValue() << std::endl;
    std::cout << "a - b = " << diff.getValue() << std::endl;
    std::cout << "a * b = " << product.getValue() << std::endl;
    std::cout << "a / b = " << quotient.getValue() << std::endl;

    NumberLibrary::Number negative = -a;
    std::cout << "-a = " << negative.getValue() << std::endl;

    return 0;
}