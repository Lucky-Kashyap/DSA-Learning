#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers : " << endl;

    cin >> a >> b;

    char op;

    cout << "Enter the operation which you want to perform : " << endl;

    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Addition of two numbers : " << a + b << endl;
        break;
    case '-':
        cout << "Subtraction of two numbers : " << a - b << endl;
        break;
    case '*':
        cout << "Multiplication of two numbers : " << a * b << endl;
        break;
    case '/':
        cout << "Division of two numbers : " << a / b << endl;
        break;
    default:
        cout << "You enter invalid operatio" << endl;
    }

    return 0;
}
