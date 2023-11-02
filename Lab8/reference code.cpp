#include<iostream>
 #include<fstream>
 #include<string>
 #include<iomanip>
 using namespace std;


 const int MAX = 50;
 // a function called GetData to read and store data into two arrays,
 void GetData(ifstream& infile,string name[],int scores[][5],int& n)
 {
    n = 0;
    int i=0;
    int j=0;
    while(!infile.eof())
    {
    infile >> name[i];
    for(int j=0; j<5; j++)
    infile >> scores[i][j];
    i++;
    }
    n = i;
 }

 char determineGrade(double avg)
 {
 if(avg>=90 && avg<=100)
 return 'A';
 else if(avg>=80 && avg<=89)
 return 'B';
 if(avg>=70 && avg<=79)
 return 'C';
 if(avg>=60 && avg<=69)
 return 'D';
 if(avg>=50 && avg<=59)
 return 'F';
 }

 // a function called Average that is used to calculate the average test score and grade,
 void Average(int a[][5],char grade[],double avg[],int no_of_students)
 {
    for(int i=0; i<no_of_students; i++)
    {
    double sum =0;
        for(int j=0; j<5; j++)
        sum+= a[i][j];
    avg[i] = sum/static_cast<double> (5);
    grade[i] = determineGrade(avg[i]);
    }
 }

 // function called PrintResults to output the results.
 void PrintResults(string name[],double avg[],int scores[][5],char grade[],int n)
 {
 for(int i=0; i<n; i++){
 cout << left << setw(10)<< name[i];
    for(int k=0; k<5; k++)
        cout << right << setw(8) << scores[i][k];
    cout << endl;
 }
 cout << setw(8) <<"Average ";
 for(int i=0; i<n; i++)
     cout << setw(5) << avg[i];
     cout << endl;
 }

 int main()
 {
 // a one-dimensional array to store the students� names,
 string name[MAX];
 // a (parallel) two-dimensional array to store the test scores,
 int scores[MAX][5];
 // a parallel one-dimensional array to store grades.
 char grade[MAX];
 int no_of_students;
 double avg[MAX];

 ifstream infile("StudentData.txt");

 if(!infile)
 {
    cout <<"unable to open file.so exiting from program" << endl;
    return 0;
 }

 GetData(infile, name, scores, no_of_students);
 infile.close();
 Average(scores, grade, avg, no_of_students);
 PrintResults(name,avg,scores,grade,no_of_students);


 return 0;
 }