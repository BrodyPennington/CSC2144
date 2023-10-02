// Name: Brody Pennington
// Lab: Lab 4
// Due Date: 10/5/2023
// Filename: Lab4.cpp
// Description: Using Structs, make a program that takes a description of a computer and output it.


#include <iostream>
#include <stdio.h>
#include <iomanip>

struct Computer {
    std::string manfac, model, cpu;

    int ram, drive, year_built;

    double price;
};

Computer readInput(Computer& c1) {

    std::cout << "Enter the name of the manufacturer: ";
    std::cin >> c1.manfac;

    std::cout << "Enter the model of the computer: ";
    std::cin >> c1.model;
  
    std::cout << "Enter processor type: ";
    std::cin >> c1.cpu;
  
    std::cout << "Enter the size of RAM (in GB): ";
    std::cin >> c1.ram;

    std::cout << "Enter the size of hard drive (in GB): ";
    std::cin >> c1.drive;

    std::cout << "Enter the year the computer was built: ";
    std::cin >> c1.year_built;

    std::cout << "Enter the price: ";
    std::cin >> c1.price;
}

Computer sendOutput(Computer& c2) {

    readInput(c2);


    std::cout << "Manufacturer: " << c2.manfac << std::endl;
    std::cout << "Model: " << c2.model << std::endl;
    std::cout << "Processor: " << c2.cpu << std::endl;
    std::cout << "Ram: " << c2.ram << "gb" << std::endl;
    std::cout << "Hard Drive Size: " << c2.drive << "gb" << std::endl;
    std::cout << "Year Built: " << c2.year_built << std::endl;
    std::cout << "Price: $" << c2.price << std::endl;

}

int main() {
    Computer c1;
    readInput(c1);

    Computer c2;
    sendOutput(c2);


    return 0;
}