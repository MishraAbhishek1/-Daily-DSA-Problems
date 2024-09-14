#include<iostream>
using namespace std;

// Example 1>> Displaying array elements

int main(){
    int numbers[5] = {7,5,4,3,2};

    cout<<"This is the numbers of array: ";
    // Printing array elements
    //using range based for lopp
    for(int n: numbers)
    {
        cout << n<< " ";
    }

    cout << "\n the new way to Print array elements using for loop : ";

    //using Traditional for loop
    
    for(int i = 0; i<5; ++i)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}