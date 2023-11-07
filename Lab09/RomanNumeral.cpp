#include "RomanNumeral.h"
#include <iostream>

RomanNumeral::RomanNumeral(std::string newValue) {
    value = newValue;
}

void RomanNumeral::setValue(std::string newValue) {
    value = newValue;
}

std::string RomanNumeral::getValue() {
    return value;
}

int RomanNumeral::convertToInt(std::string newValue, int& result) {
    int n = int(newValue.length());
    if (n == 0) {
        return 0;
    }

    result = 0;
    for (int i = 0; i < n; i++) {
        switch (newValue[i]) {
            case 'I':
                result += 1;
                break;
            case 'V':
                result += 5;
                break;
            case 'X':
                result += 10;
                break;
            case 'L':
                result += 50;
                break;
            case 'C':
                result += 100;
                break;
            case 'D':
                result += 500;
                break;
            case 'M':
                result += 1000;
        }
    }

    for (int i = 1; i < n; i++) {
        if ((newValue[i] == 'V' || newValue[i] == 'X') && newValue[i - 1] == 'I') {
            result -= 1 + 1;
        }

        if ((newValue[i] == 'L' || newValue[i] == 'C') && newValue[i - 1] == 'X') {
            result -= 10 + 10;
        }

        if ((newValue[i] == 'D' || newValue[i] == 'M') && newValue[i - 1] == 'C') {
            result -= 100 + 100;
        }
    }
}

void RomanNumeral::print(std::string newValue, int result) {
    std::cout << "The equivalent of the Roman numeral " << value << " is " << convertToInt(newValue, result) << std::endl;
}
