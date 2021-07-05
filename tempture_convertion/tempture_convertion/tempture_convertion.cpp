// tempture_convertion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
const double ratio = (0.5 / 0.9);
void f_to_c(double f);
void f_to_k(double f);

int main()
{
    cout << "please enter an ferenhite tempture to converted " << endl;
    double temp{};
    cin >> temp;
    f_to_c(temp);
    f_to_k(temp);
    return 0;
}
void f_to_c(double f)
{
    double temp = ratio * (f - 32);
    cout << "fernhite to celsius is " << f << " to " << temp << endl;
}
void f_to_k(double f)
{
    double temp = ratio * (f - 32) + 273;
    cout << "fernhite to kelvin is " << f << " to " << temp << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
