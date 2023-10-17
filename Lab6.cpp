// Name: Brody Pennington
// Lab: Lab 6
// Due Date: 10/19/2023
// Filename: Lab6.cpp
// Description: Using a class, take a counter input as a privatized integer, and give 4 options: increase counter, decrease counter, display counter, or exit program.

#include <iostream>

class Counter {
    private:
        int counter; // private integer counter

        int getCounter_selection; // counter option selection

    public:

        int i = 1; // also used to get rid of magic number when incrementing and decrementing by 1

        int inc = 1;
        int dec = 2;
        int dis = 3; // created these integers to get rid of my magic numbers in my if loops.
        int ex = 4;

        void setCounter() {
            std::cout << "Enter the initial value of the counter: ";
            std::cin >> counter; // gets counter value
        };

        void getCounter() {
            std::cout << " " << std::endl;
            std::cout << "Choose one of the following:" << std::endl;
            std::cout << " " << std::endl;
            std::cout << "1) Increment the counter." << std::endl;
            std::cout << "2) Decrement the counter." << std::endl;
            std::cout << "3) Display the counter." << std::endl; // displays counter options
            std::cout << "4) Exit the program." << std::endl;
            std::cout << " " << std::endl;

            std::cout << "Enter the number of your choice here: ";
            std::cin >> getCounter_selection; // gets the decision of what you want to do to the counter
            std::cout << " " << std::endl;
        };

        void increment() {
            if (getCounter_selection == inc) {
                int sum = counter + i;
                counter = sum;  // increments the counter by i (1) when the choice is inc (1) and sets the counter == the sum.
                std::cout << "Counter incremented." << std::endl;
            };
        };

        void decrement() {
            if (getCounter_selection == dec) {
                int diff = counter - i;
                counter = diff; // decrements the counter by i (1) when the choice is dec (2) and sets the counter == the difference.
                std::cout << "Counter decremented." << std::endl;
            };
        };

        void print() {
            if (getCounter_selection == dis) {
                std::cout << "Counter = " << counter << std::endl; // prints the counter when choice is dis (3)
            };
        };

        void exit_program() {
            if (getCounter_selection == ex) {
                std::cout << "Exiting program." << std::endl;
                exit(0); // exits the program when choice is ex (4)
            }
        }
};

int main(){
    Counter counter_run; // creates new reference class for Counter called counter_run.

    counter_run.setCounter();
    counter_run.getCounter();
    counter_run.increment();
    counter_run.decrement(); // Calls all the functions of the counter.
    counter_run.print();
    counter_run.exit_program();

    while (true) {
        counter_run.getCounter();
        counter_run.increment(); // keeps the functions running until the program is terminated.
        counter_run.decrement();
        counter_run.print();
        counter_run.exit_program();
    };


}