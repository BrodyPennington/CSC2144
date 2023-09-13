// Name: Brody Pennington
// Lab: Lab 2
// Due Date: 9/11/2023
// Filename: Lab1.cpp
// Description: Take three inputs (Student name, SSN, User ID, and password) and output everything with the SSN and password hidden with asterisks. 


#include <iostream>
#include <string>

int main() {
    std::string firstName;
    std::string lastName;
    std::string ssn;
    std::string userid;
    std::string password;
    std::string::size_type privssn;
    std::string::size_type privpass;
    

    std::cout << "Enter a student's name, social security number, user id, and password in one line:" << std::endl;
    std::cin >> firstName >> lastName >> ssn >> userid >> password;

    if (ssn > 9) {
        std::cout << "Invalid input, please try again!"
    }
    
    privssn = ssn.length();
    privpass = password.length();

    for (int x = 0; x < privssn; x++) {
        ssn[x] = 'x';
    }
    for (int y = 0; y < privpass; y++) {
        password[y] = 'x';
    }

    std::cout << firstName << " " << lastName << " " << ssn << " " << userid << " " << password;



    return 0;

}