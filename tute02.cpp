/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include<iostream>
#include<iomanip>
using namespace std;

//function main begins with program execution
int main()
{

       double salary; //declaring variable
       double netSalary; //declaring variable
       int etype; //declaring variable
       int otHrs; //declaring variable
       int otRate; //declaring variable

         cout << "Enter Emplyee Type : "; //prompt
         cin >> etype; //read

         cout << "Enter Salary : "; //prompt
         cin >> salary; //read

         cout << "Enter OT Hours : "; //prompt
         cin >> otHrs; //read

             switch(etype) //checking condition
             {

                   case 1: otRate = 1000;
                       break;

                   case 2: otRate = 1500;
                       break;

                   case 3: otRate = 1700;
                       break;

             } //end of the switch

               netSalary = salary + otHrs * otRate; //calculation
               cout << setw(10) << setiosflags(ios::fixed) << setprecision (2) << "Net Salary is " << netSalary << endl; //display

                  return 0;

} //end of the main function 
