#include<iostream>
using namespace std;

class shop
{
    int id;
    static int count;
    public:
        void setdata(void)
        {
            cout<<"Enter the Id of the Employee"<<endl;
            cin>>id;
        }
        void getdata(void)
        {
            cout<<"the is the "<<id<<" of thes employe"<<endl;
        }

};


int main()
{
    shop hassan;
    hassan.setdata();
    hassan.getdata();
    return 0;
}