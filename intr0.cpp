#include<iostream>
#include<stack>
using namespace std;
/*C++ Stack

A stack stores multiple elements in a specific order, called LIFO.

LIFO stands for Last in, First Out. To vizualise LIFO, think of a pile of pancakes, where pancakes are both added and removed from the top. So when removing a pancake, it will always be the last one you added. This way of organizing elements is called LIFO in computer science and programming.

Unlike vectors, elements in the stack are not accessed by index numbers. Since elements are added and removed from the top, you can only access the element at the top of the stack. */

// Crate a Stack >>
int main()
{
    stack<string> cars;
/*Note: The type of the stack (string in our example) cannot be changed after its been declared.

Note: You cannot add elements to the stack at the time of declaration, like you can with vectors:*/

// stack<string> cars = {"Volvo", "BMW", "FORD","HUNDAI"};
// Add elments in stack using Push Keyword and Pop Keywoord
cars.push("Volvo");
cars.push("Mercedy");
cars.push("Hundai");
cars.push("HondaCity");

cout << cars.top() <<" ";
}