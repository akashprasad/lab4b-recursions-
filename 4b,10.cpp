# lab4b-recursions-
// question 10
#include <iostream>
using namespace std;
int a=0,b=1,c=1,i=1;
void fibo(int x) 
{
  cout<<c<<" ";
  c=a+b;
  a=b;
  b=c;
  if(i<x)
  {
    i++;
    fibo(x);
  }
}
int main() 
{
   int n;
   cout<<"Enter nth term :  ";
   cin>>n;
   cout<<endl<<n<<" Fibonacci term  : ";
   fibo(n);
   return 0;
}
