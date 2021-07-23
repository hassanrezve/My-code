#include <iostream>
#include <string>

using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_binary(void);
    void swap(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "enter a binary number " << endl;
    cin >> s;
    chk_binary(); // using within another member func
}
void binary ::chk_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "invalid format for binary" << endl;
            exit(0);
        }
    }
}
void binary::swap(void)
{
    
    cout << "swapping" << endl;
    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout<<"Displaying swapping"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_binary();
    b.display();
    b.swap();
    b.display();

    return 0;
}