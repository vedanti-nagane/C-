#include <iostream>
using namespace std;

int main()
{
    //1. Assignment Operators --> Used to assign values to variables
    int a = 4, b = 5;
    // Another example, char d = 'd';

    cout<<"-----------------------"<<endl;


    //2. Arithematic Operators
    cout<<"The value of a + b is : "<< a + b <<endl;
    cout<<"The value of a - b is : "<< a - b <<endl;
    cout<<"The value of a * b is : "<< a * b <<endl;
    cout<<"The value of a / b is : "<< a / b <<endl;
    cout<<"The value of a % b is : "<< a % b <<endl;
    cout<<"The value of a++ is : "<< a++ <<endl;     //First print then increment
    cout<<"The value of a-- is : "<< a-- <<endl;     //First print then decrement
    cout<<"The value of ++a is : "<< ++a <<endl;     //First increment then print
    cout<<"The value of --a is : "<< --a <<endl;     //First decrement then print


    cout<<"-----------------------"<<endl;


    //3. Comparision Operators
    cout<<"The value of a == b is : "<<(a==b)<<endl;
    cout<<"The value of a != b is : "<<(a!=b)<<endl;
    cout<<"The value of a >= b is : "<<(a>=b)<<endl;
    cout<<"The value of a <= b is : "<<(a<=b)<<endl;
    cout<<"The value of a > b is : "<<(a>b)<<endl;
    cout<<"The value of a < b is : "<<(a<b)<<endl;

    cout<<"-----------------------"<<endl;


    //4. Logical Operators --> && is AND operator and || is OR operator
    cout<<"The value of this logical operator ((a==b)&&(a<b)) is : "<< ((a==b)&&(a<b))<<endl;
    cout<<"The value of this logical operator ((a==b)||(a<b)) is : "<< ((a==b)||(a<b))<<endl;
    cout<<"The value of this logical operator (!(a==b)) is : "<< (!(a==b))<<endl;


    cout<<"-----------------------";


    return 0;
}