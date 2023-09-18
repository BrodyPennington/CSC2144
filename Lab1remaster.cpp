// Name: Brody Pennington
// Lab: Lab 1
// Due Date: 9/7/2023
// Filename: Lab1.cpp
// Description: Write a program to convert time from a 24 hour notation to 12 hour notation.

#include <iostream>
#include <iomanip>

void input(int& hour, int& minute, int& second);
void output(int hour, int minute, int second, char& meridian);

int main() {
    int hour, minute, second;
    char meridian;


    return 0;

}

void input(int& hour, int& minute, int& second) {
    std::cout << "Enter the time in the following format: Hour:Minute:Second" << std::endl;
    std::cin << hour << minute << second;
}

void output(int hour, int minute, int second, char& meridian) {
    
}
