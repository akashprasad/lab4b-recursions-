# lab4b-recursions-
// question 7
#include <iostream>
using namespace std;
int rev=0,di=0;
int reverse(int a) 
{
  di=a%10;
  rev=rev*10+di;
  a=a/10;
  if(a!=0)
    reverse(a);
  return rev;
}
int main() 
{
   int n,temp;
   cout<<"Enter a number :  ";
   cin>>n;
   temp=reverse(n);
   if(n==temp)
     cout<<endl<<"Palindrome number";
   else 
     cout<<endl<<"Not Palindrome number";
   return 0;
}
