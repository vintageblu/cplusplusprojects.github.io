/* Name: Max Function**/
/*Date: 20th March, 2023**/
/*Author: Bariat Shuaib**/

#include <iostream>
using namespace std;

int max(int num1, int num2);

int main()
{
    int x= 100;
    int y = 200;
    
    int ret;
    
    ret = max(x, y);
    cout<<"The maximum num is: "<<ret<<endl;
    return 0;
}

int max(int num1, int num2)
{
    int result;
    
    if(num1 > num2)
      result=num1;
    else
       result=num2;
    
    return result;
}
