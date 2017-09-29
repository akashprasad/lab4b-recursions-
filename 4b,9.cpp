# lab4b-recursions-
// question 9
#include <iostream>
using namespace std;
int fact=1,i=1;
int factorial(int a) 
{
  fact=fact*i;
  if(i<a)
  {
    i++;
    factorial(a);
  }
  return fact;
}
int main() 
{
   int n;
   cout<<"Enter a number :  ";
   cin>>n;
   cout<<"the factorial of  "<<n<<" : "<<factorial(n);
   return 0;
}
