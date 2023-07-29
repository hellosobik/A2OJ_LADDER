#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    vector<vector<int>> parent_num_array;
    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        /* code */
    
    
    vector<int> num_array;
    int length_num_array;
    cin >> length_num_array;
    for (int i = 0; i < length_num_array; i++)
    {
        int x;
        cin >> x;
        num_array.push_back(x);

    }
    parent_num_array.push_back(num_array);
    }
    for (int i = 0; i < count; i++)
    {
        
    
    
    int on_place=parent_num_array[i].size();
    for (int j = 0; j <= parent_num_array[i].size(); j++)
    {
        // if (parent_num_array[i][j]==j+1 && parent_num_array[i][j+1]==j+2)
        if (parent_num_array[i][j]==j+1)
        {
            on_place--;
            // j++;
        }else if(parent_num_array[i][j]==j+1){
            on_place--;
        }

        // cout << num_array[i] << " " ;
    }
    // int result;
    // if (parent_num_array[i].size()-on_place==0)
    // {
    //     result=0;
    // }else if(parent_num_array[i].size()-on_place==1){
    //     result=1;
    // }else{
    //     result=parent_num_array[i].size()-on_place-1;
    // }
    
    cout << ceil((parent_num_array[i].size()-on_place)*(0.5)) << "\n";
    }
    return 0;
}