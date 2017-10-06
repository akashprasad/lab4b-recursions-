# lab4b-recursions-
// question 12
#include <iostream>
using namespace std;
int lcm(int a,int b,int c)
{
if (b%a==0&&b%c==0)
return b;
else
return lcm(a,b+1,c);}

int main() 
{	int a,b;
	cout<<"Enter the numbers ";
	cin>>a>>b;
	if(a>b)	
{cout<<"\nLCM of given numbers is "<<lcm(a,a,b);}
	else if (b>a)
	{cout<<"\nLCM is "<<lcm(a,b,b);}
	else
	cout<<"\n The LCM is "<<a;
	return 0;
}

