// topic Varialble >>
// variable in c++ is a name given toa memory location it is the basic unit of storage ina program.
/*
    The value stored in a variable can be changed during program execution.
    A variable is only a name given to a memory location, all the operations done on the variable effects that memory location.
    In C++, all the variables must be declared before use.
*/

// How to declare a variables ?
# include<iostream>
using namespace std;
int main()
{
    int a = 50;
    int b = 60;
    cout<< a << endl<< b<< endl;
    float f = 50.8;
    char c = 'z';
    cout<<f<<endl<<endl<<c;

/*Types of Variables

There are three types of variables based on the scope of variables in C++

    Local Variables
    Instance Variables
    Static Variables*/

    /*
    class Abhishek {
    public:
         static int a; >> static varible >> default value is zero
         int b; >> instance variable

    public:
        fun()
           {
           int c; >> Local Variable
           }     
    }
    */
}    