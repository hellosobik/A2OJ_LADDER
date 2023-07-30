#include <iostream>
using namespace std;
int turn_switch(int x){
    int y=x;
    if (y==1)
    {
        return 0;
    }else if (y==0){
        return 1;
    }
    return 0;
    
}
int main(){
    int arr1[3];
    int arr2[3];
    int arr3[3];
    int res_arr1[3]={1, 1, 1};
    int res_arr2[3]={1, 1, 1};
    int res_arr3[3]={1, 1, 1};
    cin >> arr1[0] >> arr1[1] >> arr1[2] ;
    cin >> arr2[0] >> arr2[1] >> arr2[2] ;
    cin >> arr3[0] >> arr3[1] >> arr3[2] ;
    for (int i = 0; i < 3; i++)
    {
        if (i==0 && arr1[i]%2==1)
        {
            res_arr1[0]=turn_switch(res_arr1[0]);
            res_arr1[1]=turn_switch(res_arr1[1]);
            res_arr2[0]=turn_switch(res_arr2[0]);
            // res_arr2[1]=turn_switch(res_arr2[1]); 
        }else if (i==1 && arr1[i]%2==1)
        {
            res_arr1[0]=turn_switch(res_arr1[0]);
            res_arr1[1]=turn_switch(res_arr1[1]);
            res_arr1[2]=turn_switch(res_arr1[2]);
            // res_arr2[0]=turn_switch(res_arr2[0]);
            res_arr2[1]=turn_switch(res_arr2[1]);
            // res_arr2[2]=turn_switch(res_arr2[2]);
        }else if (i==2 && arr1[i]%2==1)
        {
            res_arr1[1]=turn_switch(res_arr1[1]);
            res_arr1[2]=turn_switch(res_arr1[2]);
            // res_arr2[1]=turn_switch(res_arr2[1]);
            res_arr2[2]=turn_switch(res_arr2[2]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        if (i==0 && arr2[i]%2==1)
        {
            res_arr1[0]=turn_switch(res_arr1[0]);
            // res_arr1[1]=turn_switch(res_arr1[1]);
            res_arr2[0]=turn_switch(res_arr2[0]);
            res_arr2[1]=turn_switch(res_arr2[1]);
            res_arr3[0]=turn_switch(res_arr3[0]);
            // res_arr3[1]=turn_switch(res_arr3[1]);
        }else if (i==1 && arr2[i]%2==1)
        {
            // res_arr1[0]=turn_switch(res_arr1[0]);
            res_arr1[1]=turn_switch(res_arr1[1]);
            // res_arr1[2]=turn_switch(res_arr1[2]);
            res_arr2[0]=turn_switch(res_arr2[0]);
            res_arr2[1]=turn_switch(res_arr2[1]);
            res_arr2[2]=turn_switch(res_arr2[2]);
            // res_arr3[0]=turn_switch(res_arr3[0]);
            res_arr3[1]=turn_switch(res_arr3[1]);
            // res_arr3[2]=turn_switch(res_arr3[2]); 
        }else if (i==2 && arr2[i]%2==1)
        {
            // res_arr1[1]=turn_switch(res_arr1[1]);
            res_arr1[2]=turn_switch(res_arr1[2]);
            res_arr2[1]=turn_switch(res_arr2[1]);
            res_arr2[2]=turn_switch(res_arr2[2]);
            // res_arr3[1]=turn_switch(res_arr3[1]);
            res_arr3[2]=turn_switch(res_arr3[2]);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        if (i==0 && arr3[i]%2==1)
        {
            res_arr3[0]=turn_switch(res_arr3[0]);
            res_arr3[1]=turn_switch(res_arr3[1]);
            res_arr2[0]=turn_switch(res_arr2[0]);
            // res_arr2[1]=turn_switch(res_arr2[1]); 
        }else if (i==1 && arr3[i]%2==1)
        {
            res_arr3[0]=turn_switch(res_arr3[0]);
            res_arr3[1]=turn_switch(res_arr3[1]);
            res_arr3[2]=turn_switch(res_arr3[2]);
            // res_arr2[0]=turn_switch(res_arr2[0]);
            res_arr2[1]=turn_switch(res_arr2[1]);
            // res_arr2[2]=turn_switch(res_arr2[2]);
        }else if (i==2 && arr3[i]%2==1)
        {
            res_arr3[1]=turn_switch(res_arr3[1]);
            res_arr3[2]=turn_switch(res_arr3[2]);
            // res_arr2[1]=turn_switch(res_arr2[1]);
            res_arr2[2]=turn_switch(res_arr2[2]); 
        }
    }
    cout << res_arr1[0] << res_arr1[1] << res_arr1[2] << "\n";
    cout << res_arr2[0] << res_arr2[1] << res_arr2[2] << "\n";
    cout << res_arr3[0] << res_arr3[1] << res_arr3[2] << "\n";
    return 0;
}