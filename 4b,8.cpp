# lab4b-recursions-
// question 8
#include <iostream>
using namespace std;

int sumOfDigits(int n)
{ 
        if(n==0)
        {
              return 0;
        }
        else
        {
              return (n%10) + sumOfDigits(n/10);
        }
}

int main()
{
        int num;
        
        cout<<"\n \nENTER NUMBER: ";
        cin>>num;
        cout<<"\n \nSUM OF DIGITS: "<<sumOfDigits(num);
        return 0;
}
