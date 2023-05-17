/** Name: Return Function**/
/**Date: 13th March, 2023**/
/**Author: Bariat Shuaib**/

#include <iostream>
using namespace std;

int max(int num1, int num2, int num3);

int main()
{
    int x= 100;
    int y = 200;
    int z = 500;
    
    int ret;
    
    ret = max(x, y, z);
    cout<<"The smallest num is: "<<ret<<endl;
    return 0;
}

int max(int num1, int num2, int num3)
{
    int result;
    
    if(num1 < num2)
      result=num1;
    if(num2 < num1)
      result=num2;
    if(num3 < num1)
      result=num3;
    
    return result;
}
