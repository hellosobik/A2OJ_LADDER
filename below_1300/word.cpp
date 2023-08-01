#include <iostream>
#include <string>
#include <cctype>
// #include <cstring>
using namespace std;
  
int main()
{
    string word;
    cin >> word;
    int upp=0;
    int loww=0;
    for (int i = 0; i < word.size(); i++)
    {
        if (isupper(word[i]))
        {
            upp++;
        }else{
            loww++;
        }
        
    }
    // cout << upp << " " << loww << " ";
    if (loww==upp)
    {
        // cout << tolower(word);
        for (int i = 0; i < word.size(); i++)
        {
            char letter=tolower(word[i]);
            cout << letter;
        }
        // cout << tolower(word);
        
    }else{
        if (loww>upp)
        {
            for (int i = 0; i < word.size(); i++)
        {
            char letter=tolower(word[i]);
            cout << letter;
        }
        }else {
            for (int i = 0; i < word.size(); i++)
        {
            char letter=toupper(word[i]);
            cout << letter;
        }
        }
        
    }
    
}