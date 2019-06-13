# include <iostream>

using namespace std;

void odd_even(int number); //判断奇偶

int main(){
    int number01;
    cout << "input a number01: ";
    cin >> number01;
    odd_even(number01);

    int number02;
    cout << "input a number02: ";
    cin >> number02;
    odd_even(number02);

    int rst_add;
    rst_add = number01 + number02;
    cout << number01 << " + " << number02 << " = " << rst_add << endl;

    int quotient,remainder; //商数,余数
    quotient = number01 / number02;
    remainder = number01 % number02;
    cout << number01 << " divided by " << number02 << ", quotient = " << quotient << ", remainder = " << remainder << endl;

    return 0;
}

void odd_even(int number){
    // 三元运算符
    (number % 2 == 0) ? cout << number << " 为偶数。" << endl :  cout << number << " 为奇数。" << endl;
    // if (number % 2 == 0){
    //     cout << "the number is even." << endl;
    // }
    // else{
    //     cout << "the number is odd." << endl;
    // }
}
