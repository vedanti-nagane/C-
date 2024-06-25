// Break and Continue keywords are used in loops
#include <iostream>
using namespace std;

int main()
{
    // Break --> It stops the loop and exists it
    for (int i = 0; i < 40; i++)
    {
        if(i==4)
        {
            break;
        }
        cout<<i<<endl;
    }

    cout<<"-----------------------"<<endl;
    
    // Continue --> It skips the steps following 'continue' keyword inside the loop for a particular provided condition, and instead goes to next iteration of loop then continues 
    for (int i = 0; i <= 6; i++)
    {
        if(i==4)
        {
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}