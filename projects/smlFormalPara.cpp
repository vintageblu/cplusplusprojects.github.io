/*Name: Sml Formal parameters*****/
/*Date: 17th March, 2023****/
/*Rev 1*/
/*Author: Bariat Shuaib****/


#include <iostream>
using namespace std;

int medium(int x, int y, int z);

   int main()
 {
    int x;
    int y;
    int z;
    int sml;
  
    
        cout << "Enter your first number:";
        cin >> x;
        cout << "Enter your second number:";
        cin >> y;
        cout << "Enter your third number:";
        cin >> z;
         sml = medium(x, y, z);
    cout<<"the middle number is "<<sml;
    return 0;
 } 
 
 int medium(int x, int y, int z){
 
    int small;
    int large;
    int medium;
    
    
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
    return medium;
 }
