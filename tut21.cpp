#include <iostream>

using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d;
    int e;
    void setdata(int a1, int b1, int c1);//will bee declared after classs
    void gett()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};
void employee ::setdata(int a1, int b1, int c1)//declaration of set data after class
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
  
    
    employee harry;
    harry.e=9;
    harry.d=78;
    

    harry.setdata(1, 5, 7);
    harry.gett();

    return 0;
}