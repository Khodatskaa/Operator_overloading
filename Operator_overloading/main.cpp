#include "Var.h"
#include <iostream>

int main() {
    var intVar(5);
    var doubleVar(3.14);
    var stringVar("Hello ");

    var result = stringVar + intVar;
    std::cout << "stringVar + intVar: " << result.toString() << std::endl;

    result = intVar * doubleVar;
    std::cout << "intVar * doubleVar: " << result.toDouble() << std::endl;

    result = doubleVar / intVar;
    std::cout << "doubleVar / intVar: " << result.toDouble() << std::endl;

    var a(10);
    var b(20);
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;

    std::cout << "intVar to int: " << intVar.toInt() << std::endl;
    std::cout << "doubleVar to double: " << doubleVar.toDouble() << std::endl;
    std::cout << "stringVar to char*: " << stringVar.toString() << std::endl;

    return 0;
}
