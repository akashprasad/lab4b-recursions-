# lab4b-recursions-
// question 6
#include <iostream>
using namespace std;


int reverse_function(int num)
{  
   static int rem, sum=0;
   if(num)
   {
      rem=num%10;
      sum=sum*10+rem;
      
      reverse_function(num/10);
   }
   else
      return 0;
    return sum;
}

int main()
{
  int n;
  cout<<"\n \nEnter the number: ";
  cin>>n;
  int rev=reverse_function(n);
  cout<<"\n \nThe reverse of the number is: "<<rev;
  return 0;
}
