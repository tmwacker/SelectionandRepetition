//Programmer: Timothy Wacker
//This program will simulate a calculator for the user


#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;
    char choice;

    // Get user input
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operand (+, -, *, /): ";
    cin >> choice;

    // Perform the calculation
    switch (choice) {
        case '+':
            cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << static_cast<double>(num1) / num2 << endl;
            break;
        default:
            cout << "Error: Please use +, -, *, or / for the operand." << endl; //If invalid operaor is used this is the response message
    }

}