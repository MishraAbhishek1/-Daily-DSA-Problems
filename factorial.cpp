#include <iostream>
using namespace std;
// Find the factorial of given number
int main()
{
    int n;
    long factorial = 1.0;

    cout << "Enter a Positive integer";
    cin >> n;

    if(n<0){
        cout << "Error ! factorial of a  negative number does not Exist ";
    }
    else{
        for(int i=1; i<=n; i++)
        {
            factorial *= i;
        }
        cout << "Factorial of " << n <<"=" << factorial;
    }
    return 0;
}