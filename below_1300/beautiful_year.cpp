#include <iostream>
#include <string>
using namespace std;
int main(){
    int given_year_num;
    cin >> given_year_num;
    given_year_num++;
    string given_year_str;
    int result_year=0;
    while (result_year == 0)
    {
        given_year_str=to_string(given_year_num);
        int net_sum = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if(given_year_str[i]==given_year_str[j]){
                    net_sum+=1;
                }   
            }
        }
        if (net_sum==4)
        {
            result_year=given_year_num;
        } else{
            given_year_num++;
        }        
    }
    cout << result_year;
    return 0;
}
