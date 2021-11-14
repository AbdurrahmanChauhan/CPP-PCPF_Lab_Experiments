//Roll No:08
#include <iostream>
using namespace std;
class Account
{
public:
    float salary = 600000;
};
class Programmer : public Account
{
public:
    float bonus = 5000;
};
int main()
{
    Programmer p1;
    cout << "Salary:" << p1.salary << endl;
    cout << "Bonous:" << p1.bonus << endl;
    return 0;
}

