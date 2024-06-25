// Typecasting : Changing data type of a varibale to another data type

#include <iostream>
using namespace std;

int main()
{
    int a = 57;
    float b = 45.98;

    cout<<int(b)<<endl;
    //OR
    cout<<(int)b<<endl;

    //and

    cout<<float(a)<<endl;
    //OR
    cout<<(float)a<<endl;

    cout<< a + b <<endl;
    cout<< a + int(b) <<endl;
    cout<< a + (int)b <<endl;

    return 0;
}