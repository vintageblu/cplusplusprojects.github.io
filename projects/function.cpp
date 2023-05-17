/*Name: Function Example*****/
/*Date: 20th February, 2023****/
/*Author: Bariat Shuaib****/

#include <iostream>
using namespace std;

int max(int num1, int num2);

   int main()
 {
    int largest, num1, num2;
    cout<<"Enter your first number:"<<endl; 
    cin>>num1;
    
    cout<< "Enter your second number:"<<endl;
    cin>>num2;
    
    largest = max(num1,num2);
    cout<<"The largest number is "<<largest <<endl;
    return 0;
 } 
 
 int max(int num1, int num2){
 
    int result;

    if (num1>num2){
        result = num1;
    }
      else{
        result = num2;
      }
    return result;
}
