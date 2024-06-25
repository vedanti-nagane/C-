// Loops in C++ 
// 1. for     2. while      3. do-while
 
#include <iostream>
using namespace std;

int main()
{
    // for loop
    /*
    SYNTAX
    for(initialisation; condition; updation)
    {
        loop body;
    } 
    */
    for (int i = 0; i <= 5; i++)
    {
        cout<<i<<endl;
    }

    cout<<"--------------------"<<endl;

    // while loop
    /*
    SYNTAX
    while(condition)
    {
        code;
    }
    */
   int a = 1;
   while(a<=30)
   {
    cout<<a<<endl;
    a++;
   }

   // do while loop  --> Does 'do' statement then continues the loop if the 'while' statement is true
   /*
   SYNTAX
   do {
        code;
    } while(condition);l
    */
   int c = 2;
   do{
    cout<<c<<endl;
    c++;
   } while(c<=20);

/*
TABLE OF 6 USING DO WHILE LOOP

#include <iostream>
using namespace std;

int main()
{
    int a = 6; 
    do
    {
        cout<<a<<endl;
        a = a + 6;        
    } while (a<=60);

    return 0;    
}
*/

    return 0;
}