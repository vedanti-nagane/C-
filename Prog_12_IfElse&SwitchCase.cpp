#include <iostream>
using namespace std;

int main()
{
    int age;

    // if else-if else ladder
    cout<<"Enter your age : ";
    cin>>age;

    if(age<18)
    {
        cout<<"You are underage. Sorry."<<endl;
    }
    else if(age==18)
    {
        cout<<"You can be a spectator."<<endl;
    }
    else if(18<age<21)
    {
        cout<<"JUMP IN THE POOL!!!"<<endl;
    }
    else
    {
        cout<<"You are OVER-AGE. Booo!";
    }

    //Switch case
    switch (age)
    {
    case 19 :
        cout<<"Join Cali Club!"<<endl;
        break;
    
    case 20:
        cout<<"Join Cat Club!"<<endl;
    
    case 21:
        cout<<"Join the Senior's Club!"<<endl;

    default:
        cout<<"No club for you, oldie."<<endl;
        break;
    }

    cout<<"This is the end of program."<<endl;

    return 0;
    
}