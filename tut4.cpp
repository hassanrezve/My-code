#include <iostream>

using namespace std;
int glo=12;
void sum()
{
    cout<<"the function to add 2 variables "<<endl;
    int a , b , i;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    i=a+b;
    cout<<"the value is "<<i<<endl;

}
int main()
{
    int a = 13 , b = 14;
    float pi = 3.17;
    char y = 'c';
    float glo=12.4;
    cout<<"Global var"<<::glo<<endl;
    cout<<"local var"<<glo<<endl;
    
    
    cout<<"The value of a is "<<a<<"and the value of b is "<<b<<endl;
    cout<<"The value of pi is "<<pi<<"and the value of  is y  "<<y<<endl;
    sum();
    
    return 0;
}