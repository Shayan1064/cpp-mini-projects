#include <iostream>
using namespace std;
int main(){

    cout<<"Welcome to Number guessing game"<<endl;
    cout<<endl;
    cout<<"You have 5 tries to guess the number "<<endl;
    cout<<endl;
    cout<<"Remember the number is between 1 and 50 "<<endl;

    int secretNumber,guess,attempts=0;
    const int  MAX_TRIES=5; // your choice

    srand(time(0)); // random number genreator
    secretNumber=rand() % 50 + 1; // random number is between 1 and 50
    while (attempts < MAX_TRIES)
    {
        cout<<"Enter the number to guess"<<endl;
        cin>>guess;
        attempts++;

        if (guess==secretNumber)
        {
            cout<<" Congratulations You guessed the number in "<<attempts<<" attempts "<<endl;
            break;
         } else if (guess < secretNumber)
            {
                cout<<"Too low "<<endl;
            }else{
                cout<<"Too high "<<endl;
            }
        
    }
    if (guess!=secretNumber)
    {
         cout<<"You Failed"<<endl;
    }
    
}