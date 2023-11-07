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
    int convertToInt(std::string newValue, int& result);
    void print(std::string newValue, int result);

private:
    std::string value{};

};

#endif //CSC2144_ROMANNUMERAL_H
