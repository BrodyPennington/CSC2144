//
// Created by brody on 11/6/2023.
//

#ifndef CSC2144_ROMANNUMERAL_H
#define CSC2144_ROMANNUMERAL_H
#include <string>

class RomanNumeral {
public:
    RomanNumeral() = default;
    RomanNumeral(std::string newValue);
    void setValue(std::string newValue);
    std::string getValue();
    int result;
    int convertToInt(char r);
    int romanToNumber(std::string newValue);
    void print();

private:
    std::string value{};
};

#endif //CSC2144_ROMANNUMERAL_H
