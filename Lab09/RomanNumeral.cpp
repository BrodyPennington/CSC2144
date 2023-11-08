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

int RomanNumeral::convertToInt(char r) {
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;

    return -1;
}

int RomanNumeral::romanToNumber(std::string newValue)
        {
            int result = 0;

            // Traverse given input
            for (int i = 0; i < newValue.length(); i++) {
                // value of first symbol
                int s1 = convertToInt(newValue[i]);

                if (i + 1 < newValue.length()) {
                    // Getting value of symbol s[i+1]
                    int s2 = convertToInt(newValue[i + 1]);

                    // Comparing both values
                    if (s1 >= s2) {
                        result = result + s1;
                    } else {
                        result = result + s2 - s1;
                        i++;
                    }
                } else {
                    result = result + s1;
                }
            }
            return result;
        }

void RomanNumeral::print() {
    std::cout << "The equivalent of the Roman numeral " << value << " is " << romanToNumber(value) << std::endl;
}
