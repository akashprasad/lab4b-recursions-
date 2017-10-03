# lab4b-recursions-
// question 1
#include<iostream>
using namespace std;
int power(int n,int p)
{
  if(p==0)
  {
    return 1;
  }
  return n*power(n,p-1);
}
 int main()
{
  int a,b;
  cout<<"Enter a number : ";
  cin>>a;
  cout<<endl<<"Enter power of the number : ";
  cin>>b;
  cout<<endl;
  cout<<endl<<a<<"^"<<b<<" = "<<power(a,b);
  return 0;
}
