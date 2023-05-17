/*Name: Pointer 1*/
/*Date: 12th April, 2023*/
/*Author: Bariat Shuaib*/

#include <iostream>
using namespace std;

int main()
{                                                              //notes:
    int var = 20;                                              // actual variable declaration.
    int *ip;                                                   // pointer variable 
    
    ip = &var;                                                 // store address of var in pointer variable
    
    cout<<"Value of var variable: "<<var<<endl;                // print the address stored in ip pointer variable
    
    cout<<"Address stored in ip variable: "<< *ip <<endl;      // access the value at the address available in pointer
    
    return 0;
}



