#include<iostream>
using namespace std;

int main()
{
    /*These are the new types of strings that are introduced in C++ as std::string class defined inside <string> header file. This provides many advantages over conventional C-style strings such as dynamic size, member functions, etc.*/

   // std::string str("GeeksforGeeks");
    string str1("Universe");
    cout << str1 << endl;
    

    // One More way we can make strings that have the same charcter repeating again and again>>

    // >>std:: string str(number, character)

    string str(5, 'I');
    cout << str;
    return 0;
}