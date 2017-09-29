# lab4b-recursions-
// question 4
#include <iostream>
using namespace std;
int sum=0;int i=1;
int print_sum(int n)
{
  sum=sum+i;
  if(i<n)
  {
  	i++;
  	print_sum(n);
  }
  return sum;
}
int main() 
{
   int n;
   cout<<"Enter nth term : ";
   cin>>n;
   cout<<"Sum of natural number between 1 & "<<n<<" : "<<print_sum(n);
   return 0;
}
