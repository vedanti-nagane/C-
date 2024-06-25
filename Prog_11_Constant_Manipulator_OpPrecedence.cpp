#include <iostream>
#include <iomanip>
// <iomanip> contains setw instruction
using namespace std;

int main()
{
    const int a = 4;
    int b = 45, c = 6432, d = 24356;
    //Constant keyword : const --> It makes the value of a variable constant, it cannot be changed througho9ut the program, attempt to chnace the value of this variable throws error

    //Manipulators : They determine the way the output looks
    //endl is a manipulator
    //setw(n) is another keyword --> It gives right alighment to the output upto n places
    cout<<"Value of a is : "<<setw(4)<<a<<endl;
    cout<<"Value of b is : "<<setw(4)<<b<<endl;
    cout<<"Value of c is : "<<setw(4)<<c<<endl;
    cout<<"Value of d is : "<<setw(4)<<d<<endl;

    //Operators precedence
    // () --> * and / --> + and -

    return 0;
}