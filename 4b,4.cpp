# lab4b-recursions-
// question 4
#include <iostream>
using namespace std;
int print_sum(int n)
{
  int sum=0;
  if(n==0)
  {
        return sum;
  }
  sum=sum+n;
  return sum+print_sum(n-1);
}
int main()
{
   int n;
   cout<<"Enter nth term : ";
   cin>>n;
   cout<<"Sum of natural number between 1 & "<<n<<" : "<<print_sum(n);
   return 0;
}


