#include<iostream>
using namespace std;

int main()
{
    int count = 1;

    // Declaring 2d array
    int array1[3][4];
    // intialize 2d array using loop

    for(int i =0; i<3; i++)
    {
        for(int j =0; j<4; j++)
        {
            array1[i][j] = count;
            count++;
        }
    }

    //  Printing the elements of 2d array
    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<4; j++)
        {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}