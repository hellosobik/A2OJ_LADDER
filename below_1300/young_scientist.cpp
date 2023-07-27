#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    num1=0;
    num2=0;
    num3=0;
    int no_of_cord;
    cin >> no_of_cord;
    for(int i = 0; i<no_of_cord; i++){
        int tmp_num1, tmp_num2, tmp_num3;
        cin >> tmp_num1 >> tmp_num2 >> tmp_num3;
        num1+=tmp_num1;
        num2+=tmp_num2;
        num3+=tmp_num3;
    }
    if ((num1==0)&&(num2==0)&&(num3==0)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
};