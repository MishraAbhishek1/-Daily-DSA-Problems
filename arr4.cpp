// Problem : Find the largest element in array
#include <iostream>
using namespace std;

// function to find the maximum of array
int largestElement(int arr[], int n)
{
    int i;
    // initalize the maximumElent
    int max = arr[0];

    //now Traverse the array element
    // and the comapre the elemnt
    //every element with current max
    for(i =0; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[] = {10,324, 45, 66, 89, 989};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function call <<
    cout << " Largest in given aray is : "<< largestElement(arr, n);
    return 0;
}
// int arr[] = {10, 324, 45, 66, 89, 989};

// Dry Run

//     Initialization
//         arr is an array with the elements {10, 324, 45, 66, 89, 989}.
//         n is calculated as sizeof(arr) / sizeof(arr[0]), which is the number of elements in the array. For this array, n is 6.
//         largestElement function is called with arr and n.

//     Function Execution: largestElement(int arr[], int n)

//         Step 1: Initialize max with the first element of the array:

//         cpp

//     int max = arr[0]; // max = 10

//     Step 2: Iterate over each element of the array and update max if the current element is greater than max.

// Here's the iteration step-by-step:

//     Iteration 1: i = 0
//         arr[i] = 10
//         Compare arr[i] with max: 10 > 10 is false.
//         max remains 10.

//     Iteration 2: i = 1
//         arr[i] = 324
//         Compare arr[i] with max: 324 > 10 is true.
//         Update max: max = 324.

//     Iteration 3: i = 2
//         arr[i] = 45
//         Compare arr[i] with max: 45 > 324 is false.
//         max remains 324.

//     Iteration 4: i = 3
//         arr[i] = 66
//         Compare arr[i] with max: 66 > 324 is false.
//         max remains 324.

//     Iteration 5: i = 4
//         arr[i] = 89
//         Compare arr[i] with max: 89 > 324 is false.
//         max remains 324.

//     Iteration 6: i = 5
//         arr[i] = 989
//         Compare arr[i] with max: 989 > 324 is true.
//         Update max: max = 989.

// Return the result:

//     After completing the loop, max is 989.
//     The function returns 989.            