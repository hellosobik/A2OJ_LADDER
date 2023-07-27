#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    int str_size_useless;
    int no_of_swap;
    cin >> str_size_useless >> no_of_swap;
    cin >> str;
    int str_size = str.size();
    for (int i = 0; i < no_of_swap; i++)
    {
        for (int j = 0; j < str_size-1; j++)
        {
            if (str[j]=='B' && str[j+1]=='G')
            {
                swap(str[j], str[j+1]);
                j++;
            }
            
        }
        
    }
    cout << str;
    
}