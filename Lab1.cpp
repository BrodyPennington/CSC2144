// Name: Brody Pennington
// Lab: Lab 1
// Due Date: 9/7/2023
// Filename: Lab1.cpp
// Description: Write a program to convert time from a 24 hour notation to 12 hour notation.

#include <iostream>
#include <iomanip>

int main() {

    int hour = 00;
    float min = 00;
    float sec = 00; // Here I am defining the what each integer equals in time. Each integer starts at zero and is given a true value further into the program.
    int hourt = 00;

    std::cout << "Welcome! Give a 24 hour time to convert to 12 hour time in the following format:" << std::endl;
    std::cout << "Hour" << std::endl;
    std::cout << "Minute" << std::endl; //Here I am simply giving instructions to the person reading the terminal and how to insert the time.
    std::cout << "Second" << std::endl;

    std::cin >> hour >> min >> sec; //Here, the user will insert the time.
    
    std::cout << "The time in 12 hour format is:" << std::endl;

    if (hour == 0 && hour != 12) { // if 24 hour = 0 but not equal to 12, then the time = 12AM
        hourt = 12;
    } else if (hour == 12 && hour != 0) { // if 24 hour = 12 but not equal to 0, then the time is 12PM
        hourt = 12;
    } else if (hour < 12 && hour != 0) { // if 24 hour is less than 12 and not equal to 0, then the time must be between 12:01AM and 11:59AM.
        hourt = hour;                                                                                                
    } else if (hour > 12 && hour != 24) { // if 24 hour time is greater than 12 but not equal to 24, then the time must be between 12:01PM and 11:59PM
        hourt = hour - 12;
    } // Since the only thing that changes between 24 and 12 hour time is hours, there is no need to change the minutes and seconds.



    if (hour < 12 && hour >= 0) {
        if (min < 10 || sec <10) {
            std::cout << hourt << ":" << std::setw(2) << std::setfill('0') << min << ":" << std::setw(2) << std::setfill('0') << sec << "AM" << std::endl; //Here, if the 24 hour time is less than 12, but not equal to 0, then the 12 hour time is morning(AM).
        } else {
            std::cout << hourt << ":" << min << ":" << sec << "AM" << std::endl;
        }
    } else if (hour > 12 && hour <= 24) {                                             
        if (min < 10 || sec <10) {
            std::cout << hourt << ":" << std::setw(2) << std::setfill('0') << min << ":" << std::setw(2) << std::setfill('0') << sec << "PM" << std::endl; //Here, if the 24 hour time is less than 12, but not equal to 0, then the 12 hour time is morning(AM).
        } else {
            std::cout << hourt << ":" << min << ":" << sec << "PM" << std::endl;
        } //Here, if the 24 hour time is greater than 12, but not equal to 24, then the 12 hour time is afternoon(PM).
    }



    return 0;
}