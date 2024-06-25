//Reference Variables

#include <iostream>
using namespace std;

int main()
{
    int x = 6;
    int & y = x;    //Here 'y' is the reference variable.. It referes of value of x when 'y' is called

    cout<<x<<endl;
    cout<<y;        

    return 0;
}