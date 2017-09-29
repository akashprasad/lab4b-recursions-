# lab4b-recursions-
// question 14
#include <iostream>
using namespace std;
int i=0,sum=0;
int array(int x[10]) 
{
  sum=sum+x[i];
  if(i<9)
  {
     i++;
     array(x);
  }
  return sum;
}
int main() 
{
   int n[10];
   cout<<"Enter 10 element of array : ";
   for(int k=0;k<10;k++)
     cin>>n[k];
   cout<<endl<<"Sum of the  element of the array : "<<array(n);
   return 0;
}
