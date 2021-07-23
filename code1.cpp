#include <iostream>

using namespace std;
typedef struct sha
{
  int age;
  string sex;
  char intrsted;
} X;
int main()
{
  
  X hassi;
  hassi.age = 18;
  hassi.sex = "Male";
  hassi.intrsted = 'f';
  cout << "the age of hassan is " << hassi.age << endl;
  cout << "the intrst of hassan is " << hassi.intrsted << endl;
  cout << "the sex of hassan is " << hassi.sex << endl;

  return 0;
}