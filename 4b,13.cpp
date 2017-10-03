# lab4b-recursions-
// question 13
#include <iostream>
using namespace std;
int i=0;
int array(int x[],int n)
{
  cout<<x[i]<<endl;;
  if(i<n-1)
  {
     i++;
     array(x,n);
  }
  return 0;
}
int main()
{
   int n[100],l;
   cout<<"Enter the number of element of array(0 to 100): ";
   cin>>l;
   cout<<"Enter element of array(0 to 100) : ";
   for(int k=0;k<l;k++)
     cin>>n[k];
   cout<<endl<<"element of the array : "<<endl;
   array(n,l);
   return 0;
}
