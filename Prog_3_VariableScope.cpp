//Variable Scope : Local and Global Variables

#include <iostream>
using namespace std;

//This is global variable
int a = 2;

void func()
{
    cout<<a;     //Since there is no local variable in this function, program goes to global variable 'a' and considers that value for 'a'   
}

int main()
{
    //This is local variable of same name
    int a = 34;
    a = 45;

    func();     
    cout<< endl <<a;    //Since, a local value is present within the function, the local value is given precedence over global value, so '45' is printed
    return 0;

}