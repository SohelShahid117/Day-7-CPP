#include <iostream>
using namespace std;
int main()
{
    // cout << "hello world";
    double Area, base, height, circleArea;
    float pi = 3.1416;
    float r;

    cout << "enter base:";
    cin >> base;
    cout << endl;

    cout << "enter height :";
    cin >> height;
    cout << endl;
    Area = (float)1 / 2 * base * height;
    cout << "area of triangle" << Area;
    cout << endl;

    cout << "enter the radius of circle : ";
    cin >> r;
    cout << endl;
    circleArea = pi * r * r;
    cout << "area of circle " << circleArea;

    return 0;
}