// Name: Brody Pennington
// Lab: Lab 1
// Due Date: 9/7/2023
// Filename: Lab1.cpp
// Description: Write a program to convert time from a 24 hour notation to 12 hour notation.

#include <iostream>
#include <iomanip>

void input(int& hour, int& minute, int& second) {
    std::cout << "Enter the time in the following format: Hour Minute Second" << std::endl;
    std::cin >> hour >> minute >> second;
} 

void findMeridian(int hour, bool& meridian){
    if (hour >= 12 && hour <= 24) {
        meridian = true;
    } else if (hour < 12 && hour >= 0) {
        meridian = false;
    }
}

void compute(int hour, int& hourTwelve) {
    if (hour == 0 && hour != 12) { // if 24 hour = 0 but not equal to 12, then the time = 12AM
        hourTwelve = 12;
    } else if (hour == 12 && hour != 0) { // if 24 hour = 12 but not equal to 0, then the time is 12PM
        hourTwelve = 12;
    } else if (hour < 12 && hour != 0) { // if 24 hour is less than 12 and not equal to 0, then the time must be between 12:01AM and 11:59AM.
        hourTwelve = hour;                                                                                                
    } else if (hour > 12 && hour != 24) { // if 24 hour time is greater than 12 but not equal to 24, then the time must be between 12:01PM and 11:59PM
        hourTwelve = hour - 12;
    } // Since the only thing that changes between 24 and 12 hour time is hours, there is no need to change the minutes and seconds.
}

void output(int hourTwelve, int minute, int second, bool meridian) {
    std::string ampm = meridian ? " PM": " AM";
    std::cout << hourTwelve << ":" << std::setw(2) << std::setfill('0') << minute << ":" << std::setw(2) << std::setfill('0') << second << ampm << std::endl;
}


int main() {
    int hour, minute, second;
    int hourTwelve;
    bool meridian = false; // AM = false, PM = true

    // tertiary

    input(hour, minute, second);
    findMeridian(hour, meridian);
    compute(hour, hourTwelve);
    output(hourTwelve, minute, second, meridian);
    



    return 0;
}

