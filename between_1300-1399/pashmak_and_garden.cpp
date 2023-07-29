#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    double l=pow((pow((x2-x1), 2)+pow((y2-y1), 2)), 0.5);
    if(x1==x2 || y1==y2){
        if (y1==y2)
        {
            // cout << "horizontal line " << l << " ";
            if (y1>=l)
            {
                x3=x1;
                x4=x2;
                y3=y1-l;
                y4=y2-l;
                cout << x3 << " " << y3 << " " << x4 << " " << y4;

            }else{
                x3=x1;
                x4=x2;
                y3=y1+l;
                y4=y2+l;
                cout << x3 << " " << y3 << " " << x4 << " " << y4;
            }
            
        }else if(x1==x2){
            // cout << "vertical line " << l << " ";
            if (x1>=l)
            {
                y3=y1;
                y4=y2;
                x3=x1-l;
                x4=x2-l;
                cout << x3 << " " << y3 << " " << x4 << " " << y4;

            }else{
                y3=y1;
                y4=y2;
                x3=x1+l;
                x4=x2+l;
                cout << x3 << " " << y3 << " " << x4 << " " << y4;
            }
        }
        
    }else if ((y2-y1)==(x2-x1) || (y2-y1)==-(x2-x1)){
        // cout << "line diagonal " << l << " ";
        x3=x1;
        y3=y2;
        x4=x2;
        y4=y1;
        cout << x3 << " " << y3 << " " << x4 << " " << y4;
        

    }else{
        cout << -1;
    }

    return 0;
}