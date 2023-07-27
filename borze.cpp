#include <iostream>
#include <string>
using namespace std;

int main(){
    string borze_code;

    string zero = ".";
    string one = "-.";
    string two = "--";
    cin >> borze_code;
    for (int i = 0; i <= borze_code.size() - 1 ; i++)
    {
        if (borze_code.substr(i, 2)==one)
        {
            cout << 1;
            i++;
        }
        else if (borze_code.substr(i, 2)==two)
        {
            cout << 2;
            i++;
        }
        else
        {
            cout << 0;
        }
        
    }
    return 0;
}