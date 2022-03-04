/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/
#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
}

long nCr(int n, int r)
{
  int a,z;
  int b=1,c,x=1,y,w=1,q;
  for(a=n;a>=1;a--)
    {
      b=b*a;
    }
  for(c=r;c>=1;c--)
    {
      x=x*c;
    }
  y=n-r;
  for(q=y;q>=1;q--)
    {
      w=w*q;
    }
  z=b/(x*w);
  return z;
}