//Scope resolution to get global variable within a class which contains local variable of same name
//Scope resolution operator ::

#include <iostream>
using namespace std;

int c = 44;

int main()
{
    int a = 2, b = 3, c;   
    c = a + b;

    cout<<"Sum of a + b = "<<c<<endl;
    cout<<"The global variable c is : "<<::c<<endl;

    return 0;
}