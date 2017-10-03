# lab4b-recursions-
// question 2
#include <iostream>
using namespace std;
void print_natural(int i,int n)
{
  if(i==n)
  { 
   cout<<" "<<i;
   return;
  } 
   cout<<i<<" ";
   print_natural(i+1,n);
  } 
}
int main() 
{
    int n;
    cout<<"Enter nth term : ";
    cin>>n;
    print_natural(1,n);
    return 0;
}
