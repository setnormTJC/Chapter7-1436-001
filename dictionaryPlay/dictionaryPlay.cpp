#include <iostream>

#include<fstream>

#include<string>

using namespace std;

int main()
{
    ifstream dictionaryFile{ "C:/Users/Work/Downloads/words.txt" };

    string currentWord;
    for(int i = 0; i < 100; i++) //gets the first 100 words of THAT dictionary
    {
        getline(dictionaryFile, currentWord);
        cout << currentWord[currentWord.length() - 1] << endl; 
    }
    return 0;
}