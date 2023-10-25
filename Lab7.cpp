// Name: Brody Pennington
// Lab: Lab 7
// Due Date: 10/23/2023
// Filename: Lab7.cpp
// Description: take a make and model of a car, then output the make and model along with the speed after adding or subtracting 5 five times, using a class.

#include <iostream>


class Car {
    private:

    int model;
    int speed;
    std::string make;

    public:


        Car(std::string type, int year) { // Parameterized Constructor
            model = year;
            make = type;
            speed = 0;

        }
        Car() { // default constructor
            model = 1900;
            make = "";
            speed = 0;
        }

        void setModel(int year) { // uses the reference string for year manufactured and sets it to model.
            model = year;
        }
        void setMake(std::string type) { // Uses the reference string for type and sets it to the make.
            make = type;
        }
        void setSpeed(int speed) {
            speed = speed;
        }

        int getModel() {
            return model; // returns the model as defined above when called
        }
        std::string getMake() {
            return make; // returns the make as defined above when called
        }
        int getSpeed() {
            return speed; // returns speed as defined wayyyyy above when called.
        }

        void accelerate() {
            speed += 5; // adds 5 to speed when called
        }
        void brake() {
            if (speed >= 5) {
                speed -= 5; // subtracts 5 from speed when called as long as the speed is greater than or equal to 5. else it sets speed to 0. When called obviously.
            } else {
                speed = 0;
            }
        }
};

int main() {
        // name of new class
    Car sportsCar ("BMW M4", 2015); // this is the "model" and make. It goes back up to the setModel and setMake functions to identify the make and model.
    std::cout << "This car is a " << sportsCar.getModel() << " " << sportsCar.getMake() << std::endl;
                                        // calls model of sports car class    // calls make

    std::cout << "Accelerating..." << std::endl;
    for (int accel = 0; accel < 5; accel++) {
        sportsCar.accelerate();
        std::cout << "Speed: " << sportsCar.getSpeed() << "mph" << std::endl;
    }
    std::cout << std::endl;


    std::cout << "Braking..." << std::endl;
    for (int brake = 0; brake < 5; brake++) {
        sportsCar.brake();
        std::cout << "Speed: " << sportsCar.getSpeed() << "mph" << std::endl;

        if (sportsCar.getSpeed() == 0) {
            std::cout << sportsCar.getModel() << " " << sportsCar.getMake() << " has now stopped." << std::endl;
        }
     }


 return 0;
}