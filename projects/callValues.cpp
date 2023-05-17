/* Name: Call by values*/
/* Date: 5th April 2023*/
/* Author: Bariat Shuaib*/

#include <iostream>
using namespace std;

void swap(int x, int y);                            //function declaration

int main()
{
    int a = 100;                                    //local variable declaration
    int b = 200;
    
    cout<<"Before swap, value of a:"<<a<<endl;
    cout<<"Before swap, value of b:"<<b<<endl;
    
    swap(a,b);                                      //calling a function to swap the values
    cout<<"After swap in main, value of a:"<<a<<endl;
    cout<<"After swap in main, value of b:"<<b<<endl;
    
    return 0;
}

void swap(int x, int y){
    int temp;
    temp = x;                                         //save the value at address x
    x=y;                                              //put y into x
    y = temp;                                         //put x into y
    cout<<"After swap in function, value of a:"<<x<<endl;
    cout<<"After swap in function, value of b:"<<y<<endl;
    
    return;
}


// what is a pointer? a pointer is something that holds the address of another variable
// call by pointer?
// call by value?
// call by reference?
