// Main function of the C++ program.

#include <iostream>
using namespace std;
/*Project Name: Shopping Cart**/
/*Date: 30th January 2023**/
/*Author: Bariat Shuaib*/

int main()
{
    int discount; int dispercent; int many; int count; int choice; int tax; int maximum;
    float available; float total; float price; float grandtotal; float roses; 
    float hairextensions; float malejeans; float femalejeans; float jordans; float x;
    
    many = 0;
    count = 0;
    grandtotal = 1;
    tax = 7/100;
    
    cout<< "What is your maximum to spend?" << endl;
    cin>> maximum;
    available=maximum;
    
    while (grandtotal<maximum){
    cout<< "You can spend up to $" << available << ". " ;
    cout<< "Here are the list of items you can purchase, select any item below: " << endl;
    cout<< "1) ROSES $75.00 per half a dozen at 25% discount" << endl;
    cout<< "2) HAIR EXTENSIONS $100.00 per pack at 10% discount" << endl;
    cout<< "3) MALE JEANS $150.00 per pair" << endl;
    cout<< "4) FEMALE JEANS $175.00 per pair at 5% discount" << endl;
    cout<< "5) JORDANS $200.00" << endl;
    cout<< "Enter the number for the item you desire:" << endl;
    cin>> choice;
    
      if (choice==0){
           grandtotal = maximum + 1;
           cout<<"You have $" << available << " dollars left on your card. You have " << count << " items in your cart. Your total cost is $." << x << " Thank you for shopping with the BEST OF BC."<< endl;
       }
      else{
        if (choice==1){
          choice= (int) 75.00;
        }
        if (choice==2){
          choice= (int) 100.00;
        }
        if (choice==3){
          choice= (int) 150.00;
        }
        if (choice==4){
          choice= (int) 175.00;
        }
        if (choice==5){
          choice= (int) 200.00;
        }
    }
    
      //cout<< "Do you want to select another item?" <<endl;
      //cout<< "Select the corresponding number of the item you want" <<endl;
      //cin>> choice;
    
    cout<< "How many of this item would you like" << endl;
    cin>> many;
    
    choice = many * choice;
    cout<<"Does this item have a discount? ";
    cout<< "Enter 1 for yes or 2 for no" << endl;
    cin>> discount;
    
    if (discount==1){
        cout<< "What is the % of the discount";
        cin>> dispercent;
        price= choice*(dispercent/100);
        price= choice-price;
    }
    else {
        price=choice;
    }
    
    count = count * many;
    total = price + price*0.07;
    
    if (total>available){
    cout<<"You only have"<< available<< "You cannot make this purchase" <<endl;
    count = count - many;
    }
    
    count = count + many;
    grandtotal= grandtotal + total;
    x = grandtotal;
    
    cout<< "You have " << count << " items in your cart. Your total cost is $ " << grandtotal << " ";
    available = maximum - grandtotal;
    
    }  
    return 0;
}
