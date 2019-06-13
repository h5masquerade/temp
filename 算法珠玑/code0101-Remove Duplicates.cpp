/*Remove Duplicates from Sorted Array
Given a sorted array, remove the duplicates in place such that each element appear only once and return
the new length.
Do not allocate extra space for another array, you must do this in place with constant memory.
For example, Given input array A = [1,1,2] ,
Your function should return length = 2, and A is now [1,2] .
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {  // &指向对象,方便修改,得到需要的向量
            if (nums.empty()) return 0;

            int index = 1;  // 注意后面的处理逻辑顺序
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] != nums[index - 1])
                {
                    nums[index] = nums[i];  // 合成一句: nums[index++] = nums[i];
                    index++;  // 去掉重复项后的向量长度应该为:　index
                }
            }
            while (nums.size() != index){
                nums.pop_back();
            }
            return index;

            // int index = 0;
            // for (int i = 1; i < nums.size(); i++) {
            //     if (nums[index] != nums[i]){
            //         index++;  // 合成一句: nums[++index] = nums[i];
            //         nums[index] = nums[i];  // 去掉重复项后的向量长度应该为:　index+1
            //     }
            // }
            // while (nums.size() != index+1){  // 末尾需要去掉的元素个数为: nums.size() - (index+1), 用for或者while
            //     nums.pop_back();
            // }
            // return index+1;

            // 方法二: 使用STL 得到index
            // return distance(nums.begin(), unique(nums.begin(), nums.end()));  // #include<algorithm>

            }
};

int main(){
    vector <int> A {1,2,2,3,3,4};
    cout << "A.size: " << A.size() << endl;
    Solution s;

    int index = s.removeDuplicates(A);
    cout << "index: " << index << endl;
    cout << "A.size: " << A.size() << endl;  // s.removeDuplicates(A)已经将A改变

    for (int i=0;i<A.size();i++){
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}