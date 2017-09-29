# lab4b-recursions-
// question 5
#include <iostream>
using namespace std;
int i=1;int j=1,sum=0,sum2=0;
int print_even(int n)
{
  if(i<=n)
  {
     if(i%2==0)
     {
       sum=sum+i;
     }
     i++;
     print_even(n);
  }
  return sum;
}
int print_odd(int n)
{
  if(j<=n)
  {
   if(j%2!=0)
   {
      sum2=sum2+j;
   } 
   j++;
   print_odd(n);
  } 
  return sum2;
}   
int main() 
{
   int n;
   cout<<"Enter nth term : ";
   cin>>n;
   cout<<endl<<"The sum of Even number between 1 & "<<n<<" : "<< print_even(n);
   cout<<endl<<"The sum of Odd number between 1 & "<<n<<" : "<< print_odd(n);
   return 0;
}
