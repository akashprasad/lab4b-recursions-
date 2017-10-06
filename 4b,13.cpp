# lab4b-recursions-
// question 13
#include <iostream>
using namespace std;
void disparr (int a[100],int n,int i)
{if(i!=n)	
{cout<<a[i]<<" ";
disparr (a,n,i+1);
}
}

int main() 
{	int a[100],n,i;
	cout<<"Enter the number of elements in the array ";
	cin>>n;	cout<<"\nEnter the array elements ";
	for(i=0;i<n;i++)
	{cin>>a[i];}
	cout<<"\nTHe elements of the array are ";
	disparr(a,n,0);
	return 0;
}
