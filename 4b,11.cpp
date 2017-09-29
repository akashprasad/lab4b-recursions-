# lab4b-recursions-
// question 11
#include<iostream>
using namespace std;
int i=1,h=0;
int hcf(int a,int b)
{
  if(a%i==0 && b%i==0)
   h=i;
  if(i<=a)
  {
    i++;
    hcf(a,b);
  }
  return h;
}
int main()
{
  int x,y;
  cout<<"Enter two number : ";
  cin>>x>>y;
  cout<<endl<<"HCf of the numbers : "<<hcf(x,y);
  return 0;
}
