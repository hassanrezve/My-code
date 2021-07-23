#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

// union money
// {
//     /* data */
//     int rice; //4
//     char car; //1
//     float pounds; //4
// };


int main(){
    // enum Meal{ breakfast, lunch, dinner};
    // Meal m1 = lunch;
    // cout<<(m1==2);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

    ep harry;
    // struct employee shubham;
    // struct employee rohanDas;
    harry.eId = 1;
    harry.favChar = 'c';
    harry.salary = 120000000;
    cout<<"The value is "<<harry.eId<<endl; 
    cout<<"The value is "<<harry.favChar<<endl; 
    cout<<"The value is "<<harry.salary<<endl; 
    return 0;
}
#include <iostream>
 using namespace std;

 typedef struct Animal
 {
     string name;
     char colour;
     double age;
 }ep;

int main()
{
    ep hary;
    hary.name="hassan";
    hary.age=71;
    hary.colour='r';
    cout<<hary.name<<endl;
    cout<<hary.colour<<endl;
    cout<<hary.age<<endl;
    ep hassan;
    hassan.name="REzve";
    hassan.age=50;
    hassan.colour='b';
    cout<<hassan.name<<endl;
    cout<<hassan.colour<<endl;
    cout<<hassan.age<<endl;

    return 0;
}
