/*Name: Guess my number*/
/*Date: 19th April, 2023*/
/*Rev 1*/
/*Author: Bariat Shuaib*/

#include <iostream>
using namespace std;

int main()
{
    int done = 1;
    int guess = 50; 
    int high = 100; 
    int low = 0; 
    int number; 
    int times = 0;
    char ans;
    
    cout << "Welcome to 'Guess My Number' game!" << endl;
    cout << "I can guess any number you input between 1 and 100, and I will guess your number in 7 tries or less!" << endl;
    cout << "Enter a number: " << endl;
    cin >> number;
    
    do
    {
        if (guess < 0 ||guess > 100)
        done = 1;
        cout << "guess " << guess << endl;
        if (guess == number )
            ans = 'y';
        else if  (guess < number)
            ans = 'l';
        if (guess > number)
            ans = 'h';
        times = times + 1;
        
        switch (ans)
        {
        case 'l':
            low = guess;
            guess = low + (( high - low) / 2);
            cout << "low " << low << endl;
         break;
         case 'h':
            high = guess;
            guess = low + ((high - low) / 2);
            cout << "high " << high << endl;
         break;
         case 'y':
            cout << "Ha! I guessed you number" << endl;
            cout << "I was able to guess your number in " << times << " tries" << endl;
            done = 0;
            break;
         default:
            cout << "That's not a valid answer, try again." << endl;
            break;
        }
    } while (done);
     return 0 ;
}
