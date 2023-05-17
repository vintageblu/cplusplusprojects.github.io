/*Name: Sml Function*****/
/*Date: 22nd February, 2023****/
/*Author: Bariat Shuaib****/


#include <iostream>
using namespace std;

int medium();

 int main()
 {
    int midnum;
    midnum = medium();
    return 0;
 } 
 
 int medium(){
 
    int x;
    int small;
    int y;
    int large;
    int z;
    int medium;
    
    
        cout << "Enter your first number:";
        cin >> x;
        cout << "Enter your second number:";
        cin >> y;
        cout << "Enter your third number:";
        cin >> z;
    
    
        small = x;
        if (y < small){
            small = y;}
        
        if (z < small){
            small = z;}
            
        large = x;
        if (y > large){
            large = y;}
        
        if (z > large){
            large = z;}
        
        if (x != small && x != large) {
            medium = x;
        }
        if (y != small && y != large) {
            medium = y;
        }
        if (z != small && z != large) {
            medium = z;
        }
        cout << "medium is" << " " << medium << "." << endl;
    
}
