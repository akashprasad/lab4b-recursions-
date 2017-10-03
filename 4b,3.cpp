# lab4b-recursions-
// question 3
#include <iostream>
using namespace std;
void print_evenodd(int i,int n)
{
  if(i!=n)
  {
     if(i%2==0)
     {
       cout<<i<<" is even number "<<endl;
       print_evenodd(i+1,n);
     }
    else
    {
      cout<<i<<" is odd number "<<endl;
      print_evenodd(i+1,n);
    }
  }
  else
    if(n%2==0)
      cout<<n<<" is even number "<<endl;
    else
      cout<<n<<" odd number ";
 }
int main() 
{
   int n;
   cout<<"Enter nth term : ";
   cin>>n;
   print_evenodd(1,n);
   return 0;
}
