#include <iostream>
using namespace std;
int main(){
    long long int amount;
    cin >> amount;
    for (long int i = 0; i < amount; i++)
    {
        long long int num;
        cin >> num;
        long long int factors=0;
        while (num%(factors+1)==0)
        {
            factors++;
        }
        cout << factors << "\n";        
    }    
}