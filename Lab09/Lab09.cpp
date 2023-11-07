// Name: Brody Pennington
// Lab: Lab 9
// Due Date: 9/10/2023
// Filename: Lab09.cpp
// Description: Convert a Roman Numeral to a positive integer and display.

#include <iostream>
#include "RomanNumeral.h"

void input(RomanNumeral* rNumeral) {
    if (rNumeral == nullptr) {
        return;
    }
    std::string newValue;
    std::cout << "Enter a roman numeral: ";
    std::cin >> newValue;
    std::cout << std::endl;

    rNumeral->setValue(newValue);
}


int main() {
    RomanNumeral numeral{};
    input(&numeral);
    numeral.print();
}