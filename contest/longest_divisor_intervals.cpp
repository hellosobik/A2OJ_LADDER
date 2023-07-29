#include <iostream>
#include <queue>
using namespace std;

// void showq(queue<int> gq)
// {
//     queue<int> g = gq;
//     while (!g.empty()) {
//         cout << '\t' << g.front();
//         g.pop();
//     }
//     cout << '\n';
// }

int main(){
    // int arr[2];
    int given_num;
    cin >> given_num;
    int upper_limit=given_num/2;
    cout << upper_limit << " ";
    queue<int> interval;
    queue<int> interval_last;
    for (int i = 1; i <= upper_limit; i++)
    {
        if (given_num%i==0)
        {
            cout << i << " | ";
            interval.push(i);
            }
            // cout << i << " ";
        // }else{
        //     interval_last=interval;
        //     // showq(interval);
        //     cout << interval_last.front() <<"," << interval_last.back() << " | ";
        //     while (!interval.empty())
        //         {
        //             interval.pop();
        //         }
            
        // }
        
    }
    cout << interval_last.front() <<"," << interval_last.back();
    // showq(interval_last);
    return 0;
}