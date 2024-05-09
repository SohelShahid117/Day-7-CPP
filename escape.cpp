#include <iostream>
using namespace std;
// C++ Bangla Tutorials 5 : Escape sequence
int main()
{
    cout << "hello sohel \t \\ shaid" << endl;
    cout << "ctg\?,\a \" BD\n";
    cout << "01823012335\n";
    string a = "aaaaaaaaaaaaaaaa\n";
    cout << a;

    char b[] = "aaaaaaaaaaaaaaaa\n";
    cout << b;

    int num;
    cout << "enter a number :";
    cin >> num;
    cout << "enter number is :" << num;

    int num1, num2;
    cout << "\n enter two number : ";
    cin >> num1 >> num2;
    int sum = num1 + num2;
    cout << "sum is : " << sum << endl;
    int mul = num1 * num2;
    cout << "mul = " << mul << endl;
    double div = (float)num1 / num2; // type casting
    cout << "div = " << div << endl;

    double mod = num1 % num2; // type casting
    cout << "div = " << mod << endl;
    return 0;
}
/*
https://youtu.be/9zL8nm7mnsI?si=eQBnTQawZGUwRqxd
*/
