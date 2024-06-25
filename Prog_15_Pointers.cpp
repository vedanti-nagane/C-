// Pointers
/* 
--> Pointer is a data type
--> It stores the address of variables, functions and other pointers
--> We can access and manipulate the data stored in that memory location using pointers
*/
#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    //SYNTAX
    int *b = &a;
    /*
    OR
    int *b;
    b = &a;
    */

    // 1.
    // int --> Type of data that the pointer is pointing to
    // *b --> This is the pointer. It's name is 'b'.

    // 2.
    // &a --> Denotes 'address of' a
    cout<<"The address of a is : "<<b<<endl;
    cout<<"The address of a is : "<<&a<<endl;
    
    // 3.
    // * --> Dereference operator
    // Gives the stored value at the mentioned pointer
    cout<<"The value at address b is :"<<*b<<endl;

    // 4.
    // Pointer to pointer
    int  **c = &b;
    cout<<"Address of b is : "<<&b<<endl;
    cout<<"Address of b is : "<<c<<endl;
    // Dereferencing
    cout<<"Value at address c is : "<<*c<<endl;
    // Dereferencing c twice
    cout<<"Value at address of address c is : "<<**c<<endl;
    
    return 0;
}