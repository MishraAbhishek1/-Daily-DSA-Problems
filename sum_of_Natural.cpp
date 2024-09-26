#include<iostream>
using namespace std;

//  calculate sum of all natural numbers 
int main()
{
    int n;
    cout <<" Enter the number: ";
    cin >> n;
    int sum =0;
    // using a for loop
    for(int i =0; i<=n; i++)
    {
        sum += i;
    }
    cout << "sum = " << sum;
    return 0;
}