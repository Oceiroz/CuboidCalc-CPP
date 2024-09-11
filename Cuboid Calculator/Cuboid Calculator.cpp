﻿// Cuboid Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
float GetInput(string inputMessage);
int main()
{
    float base = GetInput("input the size of the base");
    float height = GetInput("please input height");
    float width = GetInput("please input width");
    float volume = base * width * height;
    float surfaceArea = 2 * (base * width + base * height + width * height);
    cout << "volume is:" << volume << endl;
    cout << "surface area is:" << surfaceArea << endl;

}
float GetInput(string inputMessage)
{
    float userInput = 0.0;
    while (true)
    {
        cout << inputMessage << endl;
        string rawInput;
        getline(cin, rawInput);
        try
        {
            userInput = stof(rawInput);
            if (userInput < 0)
            {
                throw new exception;
            }
            break;
        }
        catch (exception)
        {
            cout << "this input is invalid" << endl;
        }
    }
    return userInput;
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