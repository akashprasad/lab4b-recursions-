# lab4b-recursions-
// question 13
#include <iostream>
using namespace std;
int i=0;
int array(int x[10]) 
{
  cout<<x[i]<<endl;;
  if(i<9)
  {
     i++;
     array(x);
  }
  return 0;
}
int main() 
{
   int n[10];
   cout<<"Enter 10 element of array : ";
   for(int k=0;k<10;k++)
     cin>>n[k];
   cout<<endl<<"element of the array : "<<endl;
   array(n);
   return 0;
}
