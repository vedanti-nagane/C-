// ARRAYS
/*
--> Array is a collection of similar type of items stored in a continuous/contiguous memory locations
--> Used to store a large data, of same type, using a single variable, instead of 'n' number of variables (say, there are n data values)
--> Say, we want to store marks of 2500 students, so instead of making 2500b variables containing marks of each student individually, we make a single array of size 2500 and data type int
*/

#include <iostream>
using namespace std;

int main()
{
    
    // SYNTAX OF ARRAY
    // data_type name_of_array [size_of_array] = {data in array};
    // WRITING SIZE OF ARRAY IS OPTIONAL

    // Method 1 of creating array
   cout<<"Creating Array by using method 1 :"<<endl;

    int marks[4] = {23, 45, 56, 67};
    //Value of an array can be changed
    marks[3] = 77;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<"------------------------------"<<endl;
    //----------------------------------------------------------------

    // Method 2 of creating array
    cout<<"Creating Array by method 2 :"<<endl;

    int mathMarks[4];
    mathMarks[0] = 243;
    mathMarks[1] = 464;
    mathMarks[2] = 543;
    mathMarks[3] = 643;

    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;

    cout<<"------------------------------"<<endl;
    //----------------------------------------------------------------

    // Printing elements of array using loops
    cout<<"Printing array using for loop :"<<endl;
    for(int i = 0; i<4; i++)
    {
        cout<<marks[i]<<endl;
    }

    cout<<"------------------------------"<<endl;
    //----------------------------------------------------------------

    //Printing Array using while loop
    int i = 0;
    cout<<"Printing Array using while loop :"<<endl;
    while (i<4)
    {
        cout<<marks[i]<<endl;
        i++;
    }

    cout<<"------------------------------"<<endl;
    //----------------------------------------------------------------

    //Printing Array using while loop
    i = 0;
    cout<<"Printing Array using do-while loop :"<<endl;
    do
    {
        cout<<marks[i]<<endl;
        i++;
    } while (i<4);

    cout<<"------------------------------"<<endl;
    //----------------------------------------------------------------

    //Addressing in arrays
    cout<<"Addressing in Arrays :"<< endl;
    int arr[5] = {2,8,7,9,5};

    for (int i = 0; i < 5; i++)
    {
    cout<<"Address of consecutive memory addresse of index "<<i<<" is : "<< &arr+i <<endl;
    }

    return 0;
}