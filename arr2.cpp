#include <iostream>
using namespace std;

// Example 2: >> Take inputs from user to store them in array 

int main()
{
    int array[10];
    cout<< "Enter the 10 numbers: "<< endl;

    // store input from  user to array<<

    for(int i = 0; i<10; i++)
    {
        cin >> array[i];
    }
    cout << "the array number is : ";
    // print array elements
    for(int n=0; n<10; n++)
    {
        cout << array[n] << " ";
    }
    return 0;
}