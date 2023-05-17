// Main function of the C++ program.

#include <iostream>
using namespace std;
/***Name: Do While Loop****/
/***Date: 27th January 2023****/
/***Author: Bariat Shuaib****/
int main()
{
    int x;
    int small;
    int y;
    int large;
    int z;
    int medium;
    int i;
    
    i = 0;
    
    do{
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
        cout << "Small is" << " " << small << "," << endl;
        cout << "medium is" << " " << medium << "," << endl;
        cout << "large is" << " " << large << "," << endl;
        i++;
    }
    while (i<3);
}
