#include<iostream>
using namespace std;

// driver code
int main()
{
    char op;
    float num1, num2;

    // it allows userr to enter operator
    // i.e +,-,*,
    cout<<"Enter the operator(+,-,*,/)";
    cin >>op;

    // It allow user to enter operator
    cout<<"Enter the first number: ";
    cin >> num1;
    cout<<"Enter the second Number:";
    cin >> num2;

    // switch staement begins
    switch (op)
    {
        case '+':  
            // if user enter + >>
            cout << num1 + num2;
            break;
        // if user enter -;
        case '-':
            cout << num1 - num2;
            break;
        // if user enter * >>
        case '*':
            cout << num1 / num2;
            break;
        // if user enter / >>
        case '/':
            cout << num1/ num2;
            break;       
        // if the operator is other than +, -, *, />>
        // error message will display
        default:
            cout << "Error ! operator is is not correct";
    }
    // switch statement ends
    return 0;
}