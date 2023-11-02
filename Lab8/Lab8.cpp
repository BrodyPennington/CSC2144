// Name: Brody Pennington
// Lab: Lab 8
// Due Date: 10/31/2023
// Filename: Lab8.cpp
// Description: Using pointers and arrays, make a program that takes an input file, averages the grades, 
// assigns a letter grade to each student, finds class average, and prints all out.
//

#include <iostream>
#include <fstream>
#include <iomanip>

const int maximum = 50;


void readData(std::fstream& classGrades, std::string name[], int scores[][5], int numberStudents) {
    int i;
    int j;

    numberStudents = 0;

    while(classGrades >> name[i]) {
        
        for(int j = 0; j < 5; j++) 
            classGrades >> scores[i][j];
            i++;
        
    }
    numberStudents = i;
}

char assignLetterGrade(double average) {
    if (average >= 90 && average <= 100) 
        return 'A';
     else if (average >= 80 && average <= 89) 
        return 'B';
     else if (average >= 70 && average <= 79) 
        return 'C';
     else if (average >= 60 && average <= 69) 
        return 'D';
     else if (average >= 50 && average <= 59) 
        return 'F';
    
return 0;
}

void calculateAverage(int a[][5], char grade[], double avg[], int numberStudents) {
    for (int i = 0; i < numberStudents; i++) {
        double total = 0;

        for(int j = 0; j < 5; j++) 
            total += a[i][j];

        avg[i] = total/static_cast<double> (5);
        grade[i] = assignLetterGrade(avg[i]);
        
    }
}



void print(std::string name[], double avg[], int scores[][5], char grade[]) {
    std::cout << std::endl;
    std::cout << std::left << std::setw(10) << "Name";
    std::cout << std::setw(8) << "Average";
    std::cout << std::setw(4) << "Grade" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << std::left << std::setw(10) << name[i];
        std::cout << std::setw(8) << avg[i];
        std::cout << std::setw(4) << grade[i] << std::endl;
    }
}

int main() {
    
    
    std::string name[maximum];
    int scores[maximum][5];
    char grade[maximum];
    int numberStudents;
    double avg[maximum];

    std::fstream classGrades ("lab08-input.txt");

    readData(classGrades, name, scores, numberStudents);
    classGrades.close();
    calculateAverage(scores, grade, avg, numberStudents);
    print(name, avg, scores, grade, numberStudents);

    return 0;
}