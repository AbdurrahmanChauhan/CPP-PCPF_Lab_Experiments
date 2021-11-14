#include <iostream>
using namespace std;
class shape
{
private:
    int length;
    int breadth;

public:
    void area(int l, int b)
    {
        int area = l * b;
        cout << "Area:" << area << endl;
    }
};
int main()
{
    shape rectangle;
    int l, b;
    cout << "Enter the length of rectangle:";
    cin >> l;
    cout << "Enter the breath of rectangle: ";
    cin >> b;
    rectangle.area(l, b);
    return 0;
}

