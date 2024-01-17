// Lab02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    float A;
    float B;
    float X;;

    cout << "Hello my name is Josh and I'm going to solve the equation for x: " << endl;
    cout << "Ax + B = 4" << endl;
    cout << "Please enter a value for A: ";
    cin >> A;
    cout << "Please enter a value for B: ";
    cin >> B;
    
    cout << endl;

    cout << "Ok! Let me do some mental math to solve " << A << "x + " << B << " = 4..." << endl;


    cout << "The answer is: " << (4 - B)/A << endl;
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
