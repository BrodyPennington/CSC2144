// Name: Brody Pennington
// Lab: Lab 5
// Due Date: 10/12/2023
// Filename: Lab5.cpp
// Description: Using a class, make a program that takes a description of a computer and output it with the inputs private.

#include <iostream>
#include <stdio.h>
#include <iomanip>


class computerInfo 
{
    private:

        std::string manfac, model, cpu;
        int ram, drive, year_built;            // declares strings, ints, and the price double just like the struct.
        double price;

    public:
        void setData()  // creates a function to take inputs for the private data.
        {
            std::cout << "Enter the name of the manufacturer: ";
            std::getline(std::cin, manfac); // input of manufacturer

            std::cout << "Enter the model of the computer: ";
            std::cin >> model; // in of model
  
            std::cout << "Enter processor type: ";
            std::cin.ignore();
            std::getline(std::cin, cpu); // in of processor
  
            std::cout << "Enter the size of RAM (in GB): ";
            std::cin >> ram; // in of memory

            std::cout << "Enter the size of hard drive (in GB): ";
            std::cin >> drive; // in of drive

            std::cout << "Enter the year the computer was built: ";
            std::cin >> year_built; // in of year built

            std::cout << "Enter the price: ";
            std::cin >> price; // in of price
        }

        void print()    // outputs the "private" data.
        {
            std::cout << "Manufacturer: " << manfac << std::endl;
            std::cout << "Model: " << model << std::endl;
            std::cout << "Processor: " << cpu << std::endl;
            std::cout << "Ram: " << ram << "gb" << std::endl;    
            std::cout << "Hard Drive Size: " << drive << "gb" << std::endl;
            std::cout << "Year Built: " << year_built << std::endl;
            std::cout << "Price: $" << std::fixed << std::setprecision(2) << price << std::endl; // output of the double, changes from floating to fixed point, and sets the decimal precision to 2 since you can only have single or double digit change.
        };
};



int main()
{
computerInfo computer; // creates a new reference class called "computer".

computer.setData(); //calls the functions in "computer".
computer.print();


}