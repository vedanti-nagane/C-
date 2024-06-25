#include <iostream>
using namespace std;


//Struct keyword

struct employee
{
    int empID;
    char favChar;
    float salary;
};

int main()
{
    struct employee harry;
    harry.empID = 1;
    harry.favChar = 'a';
    harry.salary = 123456;
    cout<<"The value is : "<<harry.empID<<endl;
    cout<<"The value is : "<<harry.favChar<<endl;
    cout<<"The value is : "<<harry.salary<<endl;

    return 0;
}