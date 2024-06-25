//sizeof() Keyword : Gives size of for total amount of storage required (in bytes), to storing any value.

#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    float b = 3.14;
    double c = 3.14;
    long d = 3.14;
    char e = 'a';
    bool f = false;

    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl; 
    cout<<sizeof(c)<<endl; 
    cout<<sizeof(d)<<endl; 
    cout<<sizeof(e)<<endl; 
    cout<<sizeof(f)<<endl; 

    return 0;
}