#include <iostream>

using namespace std;
// inline function;
// inline int prodct(int x, int y)
//  {
//  int c = x*y+90;
//     return c;
//  }
// stattic fuctons do not used in inline fucttion but can be;
// int prodct(int x, int y)
// {
//     static int c = 0;
//     c = c + 1;
//     return x * y + c;
// }
int bankpolicy(int ACmoney, float intrstRate=1.04)//default arguments in function but cam be changed in main
{
     return ACmoney*intrstRate; 
}
int main()
{
    // int a, b;
    // cout << "Enter the value of a and b" << endl;
    // cin >> a >> b;
    // bleow line for  defualt argument function
    cout<<"Enter the balance on which you wanted intrest "<<endl;
    int money;
    cin>>money;
    // cout << "the product of a and b is  " << prodct(a, b) << endl;
    cout<<"The bank with give u total "<<bankpolicy(money)<<" after year"<<" on "<<money<<"Rs"<<endl;
    
    return 0;
}