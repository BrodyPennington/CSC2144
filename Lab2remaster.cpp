#include <iostream>
#include <string>

int main() {
    std::string input;

    std::cout << "Enter a student's name, social security number, user id, and password in one line below:" << std::endl;
    std::getline(std::cin, input); // normal cin input, but using getline function to read the full input and store. 

    int ssn_size = 9;
    int startlast = input.find(' ') + 1; // Finds the first space in the input, right behind the begining of the first name.
    int startssn = input.find(' ', startlast) + 1; // Finds the second space in the input, right behind the the beginning of the ssn. This will be used to replace the ssn with x's.
    int startid = input.find(' ', startssn) + 1; // This finds the third space behind the beginning of the user id, it will help find the beginning of the password.
    int startpass = input.find(' ', startid) + 1; // This finds the final space in the input right behind password, will be used to replace the password

    input.replace(startssn, ssn_size, std::string (9, 'x')); // starting at the space infront of the ssn, continuing to the final value of ssn, it replaces ssn with 9 * "x".

    int pass_size = input.size() - startpass; // this finds the size of the password input by subtracting the letters after the space before start pass with the total size of the input.
    input.replace(startpass, pass_size, std::string (pass_size, 'x')); // This does the same as the ssn, but it has a variable size compared to a ssn, so i had to use the int pass_size to tell it how long the password is and how many letters to use.

    std::cout << input << std::endl; // output.

    return 0;
}