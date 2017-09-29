# lab4b-recursions-
// question 1
#include<iostream>
using namespace std;
int pr=1,i=1;
int power(int n,int p)
{
  pr=pr*n;
  if(i<p)
  {
    i++;
    power(n,p);
  }
  return pr;
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
