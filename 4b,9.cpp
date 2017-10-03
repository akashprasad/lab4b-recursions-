# lab4b-recursions-
// question 9
#include <iostream>
using namespace std;

int factorial(int n)
{ 
        if(n==1)
        {
              return 1;
        }
        else
        {
              return n*factorial(n-1);
        }
}

int main()
{
        int num;
        
        cout<<"\n \nENTER NUMBER: ";
        cin>>num;
        cout<<"\n \nFactorial of the number is: "<<factorial(num);
        return 0;
}
