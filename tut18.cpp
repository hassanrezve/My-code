#include <iostream>
using namespace std;
//  int factorial(int n)
//  {
//      if (n<=1)
//      {
//          return 1;
//      }

//      return n = n * factorial(n-1);
//  }
int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

int main()
{
    //  learing factorail not part of code tut
    //  cout<<"Enter a number to find its fatorial "<<endl;
    //  int x,fact;
    //  cin>>x;
    //  fact=x;
    //  while (x>1)
    //  {
    //      x--;
    //      fact=fact*x;
    //  }
    //  cout<<"The Awnser is "<<fact<<endl;

    //  int a;
    //  for factorail

    //  cout<<"enter a number to find its factorial"<<endl;
    //  cin>>a;
    //  cout<<"the factorail of "<<a<<" is "<<factorial(a)<<endl;
    //  for fabonacci;
    int a;
    cout << "Enter the value to find fabonacci" << endl;
    cin >> a;
    cout << "the value of fabonacci at " << a << " is " << fib(a) << endl;
    return 0;
}