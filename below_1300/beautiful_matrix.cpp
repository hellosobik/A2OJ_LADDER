#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3, num4, num5;
    int current_pos_x;
    int current_pos_y;
    int req_pos_x=2;
    int req_pos_y=2;
    for(int i=0; i<5; i++){
        cin >> num1 >> num2 >> num3 >> num4 >> num5;
        if (num1==1){
            current_pos_x=0;
        }else if (num2==1)
        {
            current_pos_x=1;
        }else if (num3==1)
        {
            current_pos_x=2;
        }else if (num4==1)
        {
            current_pos_x=3;
        }else if (num5==1)
        {
            current_pos_x=4;
        }
        if (num1==1 || num2==1 || num3==1 || num4==1 || num5==1){
            current_pos_y=i;
        }
        
    }
    int no_of_steps_x = current_pos_x-req_pos_x;
    int no_of_steps_y = current_pos_y-req_pos_y;
    if (no_of_steps_x<0){
        no_of_steps_x*=-1;
    }
    if (no_of_steps_y<0){
        no_of_steps_y*=-1;
    }
    cout << no_of_steps_x+no_of_steps_y;
    return 0;
}