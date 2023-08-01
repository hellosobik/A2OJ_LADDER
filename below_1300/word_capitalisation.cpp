#include <iostream>
#include <string>
#include <cctype>
using namespace std;
  
int main()
{
    string word;
    cin >> word;
    char c = toupper(word[0]);
    for (int i = 0; i < word.size(); i++)
    {
        if (i==0)
        {
            cout << c;
        }else{
            cout << word[i];
        }
        
    }
}