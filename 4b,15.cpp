# lab4b-recursions-
// question 15
#include <iostream>
using namespace std;
int i=0,x=0;
int array_max(int a[10])
{
  if(a[i]>a[0])
    a[0]=a[i];
  if(i<10)
  {
  	i++;
  	array_max(a);
  }
  return a[0];
}
int array_min(int a[10])
{
  if(a[i]<a[0])
    a[0]=a[i];
  if(x<10)
  {
    x++;
    array_min(a);
  }
  return a[0];
}
int main() 
{
	int a[10];
	cout<<endl<<"Enter the element of array : ";
	for(int x=0;x<10;x++)
	 cin>>a[x];
	cout<< endl<<"maximum element of array : "<<array_max(a);
	cout<<endl<<"minimum element of array : "<<array_min(a);
	return 0;
}
