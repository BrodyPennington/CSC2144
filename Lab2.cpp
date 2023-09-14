// Name: Brody Pennington
// Lab: Lab 2
// Due Date: 9/11/2023
// Filename: Lab1.cpp
// Description: Take three inputs (Student name, SSN, User ID, and password) and output everything with the SSN and password hidden. 


#include <iostream>
#include <string>

int main() {
    std::string firstName;
    std::string lastName;
    std::string ssn;        // creates string variables to take text inputs and store.
    std::string userid;
    std::string password;
    std::string::size_type privssn; // These are also string variables, but used to store the number of letters in a string.
    std::string::size_type privpass;
    

    std::cout << "Enter a student's name, social security number, user id, and password in one line:" << std::endl;
    std::cin >> firstName >> lastName >> ssn >> userid >> password; // Regular cin inputs

    
    privssn = ssn.length(); //This reads the length of the ssn input and stores.
    privpass = password.length(); // This reads the length of the password input and stores.

    for (int x = 0; x < privssn; x++) { // This replaces the ssn with x's.
        ssn[x] = 'x';         // As long as x < privssn, ssn[0-9] (since ssn's are only 9 numbers) is replaced with x.
    }
    for (int y = 0; y < privpass; y++) {
        password[y] = 'x';  // This does the same as above, just with the password.
    }

    std::cout << firstName << " " << lastName << " " << ssn << " " << userid << " " << password; // New output with x's.



    return 0;

}