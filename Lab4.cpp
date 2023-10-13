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

void readInput(Computer& c1) { //creates a new (reference) structure of Computer called c1.

    std::cout << "Enter the name of the manufacturer: ";
    std::getline(std::cin, c1.manfac); // input of manufacturer

    std::cout << "Enter the model of the computer: ";
    std::cin >> c1.model; // in of model
  
    std::cout << "Enter processor type: ";
    std::cin.ignore();
    std::getline(std::cin, c1.cpu); // in of processor
  
    std::cout << "Enter the size of RAM (in GB): ";
    std::cin >> c1.ram; // in of memory

    std::cout << "Enter the size of hard drive (in GB): ";
    std::cin >> c1.drive; // in of drive

    std::cout << "Enter the year the computer was built: ";
    std::cin >> c1.year_built; // in of year built

    std::cout << "Enter the price: ";
    std::cin >> c1.price; // in of price

}

void sendOutput(Computer c1) { //calls the reference structure to define outputs below.

    std::cout << "Manufacturer: " << c1.manfac << std::endl;
    std::cout << "Model: " << c1.model << std::endl;
    std::cout << "Processor: " << c1.cpu << std::endl;
    std::cout << "Ram: " << c1.ram << "gb" << std::endl;    
    std::cout << "Hard Drive Size: " << c1.drive << "gb" << std::endl;
    std::cout << "Year Built: " << c1.year_built << std::endl;
    std::cout << "Price: $" << std::fixed << std::setprecision(2) << c1.price << std::endl; // output of the double, changes from floating to fixed point, and sets the decimal precision to 2 since you can only have single or double digit change.

}

int main() {
    Computer c1; // defines c1, same as calling int ___ for another function.

    readInput(c1);
    sendOutput(c1); //calls the input and output function.

    return 0;
}