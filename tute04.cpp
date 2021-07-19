/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long factorial(int no);//function declaration
long nCr(int n, int r);//function declaration

//function main begins with program execution
int main() 
{
  int n, r; //declaring variables

  std::cout << "Enter a value for n "; //prompt
  std::cin >> n; //read

  std::cout << "Enter a value for r "; //prompt
  std::cin >> r; //read

  std::cout << "nCr = "; //display
  std::cout << nCr(n,r); //function calling
  std::cout << std::endl; //new line character

      return 0;

} //end of the main Function
long factorial(int no) //function implementation
{
      int fac = 1, i; //declaring variable

        for(i=no; i>=1; i--)
        {
          
              fac *= i; 

        } //end of the for loop

        return fac;
} //end of the function
long nCr(int n, int r) //function implementation
{

      return factorial(n) / (factorial(r) * factorial (n - r));

} //end of the function


