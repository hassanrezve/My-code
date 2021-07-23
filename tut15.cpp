#include <iostream>
using namespace std;

int sum(int a , int b);//formal values these are function prototypes 
int multiplye(int a , int b);//formal values these are function prototypes 
int main()
{
int num1  , num2;//acyual parameters values
cout<<"Enter first number "<<endl;
cin>>num1;
cout<<"Enter 2nd number "<<endl;
cin>>num2;
cout<<"the sum is "<<sum(num1,num2)<<endl;
int nu1  , nu2;
cout<<"Enter first number "<<endl;
cin>>nu1;
cout<<"Enter 2nd number "<<endl;
cin>>nu2;
cout<<"the multiply is "<<multiplye(nu1,nu2)<<endl;

return 0;

}
int sum (int a , int b)//formal values
{

    int c=a+b;
    return c;

}
int multiplye (int a , int b)//formal values
{

    int c=a*b;
    return c;

}
