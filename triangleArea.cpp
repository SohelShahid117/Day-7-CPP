#include <iostream>
using namespace std;
int main()
{
    // cout << "hello world";
    double Area, base, height;

    cout << "enter base:";
    cin >> base;
    cout << endl;

    cout << "enter height :";
    cin >> height;
    cout << endl;
    Area = (float)1 / 2 * base * height;
    cout << "area of triangle" << Area;
    return 0;
}