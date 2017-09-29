# lab4b-recursions-
// question 6
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
   int n;
   cout<<"Enter a number :  ";
   cin>>n;
   cout<<endl<<"The reverse of the  "<<n<<" : "<< reverse(n);
   return 0;
}
