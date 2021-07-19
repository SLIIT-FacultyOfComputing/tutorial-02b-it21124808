/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include<iostream>
using namespace std;

//function mian begins with program execution
int main()
{

        int no, i; //declaring variable
        long fac; //declaring variable

          cout << "Enter a Number : "; //prompt
          cin >> no; //read

          fac = 1; //initialization

             for(i=no; i>=1; i--)
             {

                   fac *= i;

             } //end of the for loop

           cout << "Factorial of " << no << " is " << fac << endl; //display

           return 0;

} //end of the main function