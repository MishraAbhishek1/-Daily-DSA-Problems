# include <iostream>
using namespace std;

// display sum and average of array elements using for Loop
int main()
{
    double numbers[] = {4,2,3,6,7,8};
    double sum = 0;
    double count = 0;
    double average;

    cout << "The nubers are: ";

    // print array elements
    // use of range based for Loop>>
    for(const double &n: numbers)
    {
        cout << n << " ";
    
    // calculate the sum
    sum += n;
    // count the no of. of array elements
    ++count;
    }
    // Print the sum>>
    cout << "\n Their Sum = "<< sum << endl;
    // find the average >>
    average = sum / count;
    cout << "their Average = "<<average<<endl;

    return 0;
}