// 一只小猴子一天摘了许多桃子，第一天吃了一半，然后忍不住又吃了一个；
// 第二天又吃了一半，再加上一个；后面每天都是这样吃。
// 到第10天的时候，小猴子发现只有一个桃子了。问小猴子第一天共摘了多少个桃子。

#include <iostream>
using namespace std;

int main()
{
    /* code */
    int remain_num = 1;
    int lastday_num = 0;

    for (int day=0; day<9; lastday_num = (remain_num + 1) * 2,remain_num = lastday_num,day++);
    // for (int day=0;day<9;day++){  // 这里往前推到第二天,此时求前一天的数量(lastday_num),就是第一天的数量
    //     lastday_num = (remain_num + 1) * 2;  //求前一天的数量(lastday_num)
    //     remain_num = lastday_num;
    // }
    cout << remain_num;
    return 0;
}
