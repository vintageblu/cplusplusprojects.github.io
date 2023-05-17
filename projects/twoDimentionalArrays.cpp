/*Name: 2 dimensional arrays*/
/*Date: 29th March,2023*/
/*Author: Bariat Shuaib*/

#include <iostream>
using namespace std;

int main()
{
    int a[5][2]={{0,0},{1,2},{2,4},{3,6},{4,8}};
    for(int i=0; i<=4; i++)
    for(int j=0; j<=1; j++){
        
        cout<<"a[" << i << "][" << j << "]:";
        cout<<a[i][j]<<endl;
    }
    return 0;
}
