# lab4b-recursions-
// question 8
#include <iostream>
using namespace std;
int sum=0,di=0;
int sum_digit(int a) 
{
  di=a%10;
  sum=sum+di;
  a=a/10;
  if(a!=0)
   sum_digit(a);
  return sum;
}
int main() 
{
   int n;
   cout<<"Enter a number :  ";
   cin>>n;
   cout<<"Sum of the digits of the "<<n<<" : "<<sum_digit(n);
   return 0;
}
