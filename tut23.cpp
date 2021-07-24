#include <iostream>
using namespace std;

class Shop
{
    int itemId[5];
    int itemPrice[5];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    
    for (int i = 0; i < 5; i++)
    {
        dukaan.setPrice();
        cout<<"do u want to continue"<<endl;
        string j;
        cin>>j;
        string s="yes";
        
        if (j==s)
        {
            continue;
        }
        else
        {
            break;
        }
        
    }
    
    dukaan.displayPrice();
    return 0;
}
