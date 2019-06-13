#include <iostream>
#include <cmath>

using namespace std;


int main(){
    //二次方程 ax2+bx+c = 0 (其中a≠0）
    float a,b,c,x1,x2,delta;
    cout << "input a,b,c: " << endl;
    cin >> a >> b >> c;

    delta = 4*a*c - b*b;
    if (delta == 0){
        x1 = x2 = -b/(2*a);
        cout << "x1 = x2 = " << x1 << endl;
    }
    else if (delta > 0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        cout << "x1 = " << x1 << "\nx2 = " << x2 << endl;
    }
    else if (delta < 0){
        cout << "result are complexs."
    }

}