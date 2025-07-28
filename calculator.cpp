#include <iostream>
using namespace std;

/* TODO: make a basic arthmetic calculator(done)*/
// make it persistant and take more inputs from the user

double num1{}, num2{}; // initialize variables to store the input value
char operation{};      // char is used to store arthmetic operations */+-

void GetUserInput()    // this function gets an input/expression from user
{
    cout << "enter an expression: ";
    cin >> num1 >> operation >> num2;  // input stored in given variable in given order
}
double arthmetic()    // this functon takes values returned from GetUserInput function and performs basic operations accordingly
{
    switch (operation)
    {
    case '+':

        return num1 + num2;
        break;
    case '-':

        return num1 - num2;
        break;
    case '*':

        return num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            return num1 / num2;
        }
        else
        {
            cout << "can't divide by zero \n"; // handles division by zero
        }
        break;
    default:
        cout << "invalid expression \n";
    }
    return 0;
}
int main()
{
    GetUserInput(); // calls the function for user input
    cout << arthmetic();    // prints out values returned by arithmetic function
    return 0;
}
