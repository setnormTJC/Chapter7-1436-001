#include <iostream>

using namespace std;

int main()
{
    cout << "Player 1 - enter a (single) word for P2 to guess: " << endl; 

    string correctWord; 

    cin >> correctWord; 

    system("CLS"); //"clear" for Linux (clears the screen)


    string guessedWord; 
    for (int i = 0; i < correctWord.length(); i++)
    {
        guessedWord.append("*");
    }
    cout << "The mystery word is: " << endl; 
    cout << guessedWord << endl; 

    cout << "Player 2 - enter a (single) letter - and we'll check if that letter is in the word:  " << endl;
    string guessedLetter;
    cin >> guessedLetter;


    while (guessedWord != correctWord) //the game loop condition
    {
        int foundPosition = correctWord.find(guessedLetter); 

        if (foundPosition != string::npos)
        {
            cout << "That letter WAS found at index: " << foundPosition << endl;

            cout << "The UPDATED mystery word is: " << endl;

            guessedWord.replace(foundPosition, 1, guessedLetter);

            cout << guessedWord << endl; 

            cout << "Enter another letter: " << endl; 
            cin >> guessedLetter; 
        }

        else
        {
            cout << "Too bad - so sad, that letter was NOT in the word - guess again" << endl;
            cin >> guessedLetter;
        }
    } //end while loop 

    //string::npos
    //if (correctWord.find(guessedLetter))



    return 0;
}