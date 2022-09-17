#include<iostream>
#include <cstdlib>
#include<time.h>
using namespace std;

int main()
{  
    srand(time(0));
    int compNumber = (rand()%50)+1;
   
    cout << "Welcome to the game of Higher or Lower." << endl;
    cout << "In this game you need to guess a number between 1 to 50 ." << endl;
    cout << "But you will have only 5 turns to reach towards the correct number." << endl;

    int userNumber = 0;
    int counter = 4;

    do
    {
        cout << "Choose a  number: ";
        cin >> userNumber;

        cout <<"\n";
        int i = counter--;

        if (userNumber == compNumber)
        {
            cout<<"You guessed it right , You Win. \n";
            break;
        }

        else if (userNumber > compNumber)
        {
            cout<<"Your guess is higher than the right number, Turns left : " << i << endl;
            cout<<"Try again entering a number lower than previous : " << userNumber << endl;
            cout<<endl;
        }

        else
        {
            cout<<"Your guess is lower than right the number, Turns left : " << i << endl;
            cout<<"Try again entering a number higher than previous : " << userNumber << endl;
            cout<<endl;
        }

        if (counter<0){
			    cout<<"Turns left is 0"<<endl;
			    cout<<"Computer Wins. The number was : "<< compNumber<<endl;
				break;
			}

    } while (userNumber >= 0);
}
