#include <iostream>
using namespace std;
int sum(int x, int y)
{
    int c = x + y;
    return c;
}
// void swapP(int* x , int* y)
// {                  //temp x y
//     int temp = *x; //  4  4 5
//     *x = *y;        // 4  5 5 
//     *y = temp;      // 4  5 4
// }
void swapR(int &x , int &y)
{                  //temp x y
    int temp = x; // 4  4 5
    x = y;        // 4  5 5 
    y = temp;      //4  5 4
}
int main()
{
//     // swap using pointers var
    int a = 4, b = 5;
//     int* i=&a;
//     int* j=&b;
//     cout<<"ADress of a"<<&a<<endl;
//     // swap in main func
//     cout<<*i<<" Before "<<*j<<endl;
//     int temp = *i;
//     *i=*j;
//     *j=temp;
//     cout<<*i<<" wap "<<*j<<endl;
    // // swap using outer func
    // cout << "the sum of a nd b is " << sum(a, b) << endl;
    // swapP(&a,&b);
    // cout<<"the value of a is "<<a<<" the value of b is "<<b<<endl;
    // // swap using refrence var only
    swapR(a,b);
    cout<<"the value of Ra is "<<a<<" the value of Rb is "<<b<<endl;

    return 0;
}