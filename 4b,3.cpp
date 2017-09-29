# lab4b-recursions-
// question 3
#include <iostream>
using namespace std;
int i=1;int j=1;
void print_even(int n)
{
  if(i<=n)
  {
     if(i%2==0)
     {
       cout<<i<<" ";
     }
     i++;
     print_even(n);
  }
}
void print_odd(int n)
{
  if(j<=n)
  {
   if(j%2!=0)
   {
      cout<<j<<" ";
   } 
   j++;
   print_odd(n);
  } 
}   
int main() 
{
   int n;
   cout<<"Enter nth term : ";
   cin>>n;
   cout<<endl<<"Even number between 1 & "<<n<<" : ";
   print_even(n);
   cout<<endl<<"Odd number between 1 & "<<n<<" : ";
   print_odd(n);
   return 0;
}
