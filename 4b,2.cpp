# lab4b-recursions-
// question 2
#include <iostream>
using namespace std;
int i=1;
void print_natural(int n)
{
  cout<<i<<" ";
  if(i<n)
  { 
   i++;
   print_natural(n);
  } 
}
int main() 
{
    int n;
    cout<<"Enter nth term : ";
    cin>>n;
    print_natural(n);
    return 0;
}
