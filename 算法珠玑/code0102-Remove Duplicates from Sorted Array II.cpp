/*Remove Duplicates from Sorted Array II
描述:
Follow up for "Remove Duplicates": What if duplicates are allowed at most twice?
For example, given sorted array A = [1,1,1,2,2,3] , your function should return length = 5 , 
and A is now [1,1,2,2,3]
分析:
加一个变量记录一下元素出现的次数即可。这题因为是已经排序的数组,所以一个变量即可解决。
如果是没有排序的数组,则需要引入一个hashmap来记录出现次数。
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            if (nums.size() <= 2) return nums.size();
            int index = 2;
            for (int i = 2; i < nums.size(); i++){
                if (nums[i] != nums[index - 2])
                nums[index++] = nums[i];
            }

            // 方法二
            // const int n = nums.size();
            // int index = 0;
            // for (int i = 0; i < n; ++i) {
            //     if (i > 0 && i < n - 1 && nums[i] == nums[i - 1] && nums[i] == nums[i + 1])
            //     continue;
            //     nums[index++] = nums[i];
            // }

            // 去掉末尾
            while (nums.size() != index){
                nums.pop_back();
            }

            return index;
        }

        
};

int main(){
    vector <int> A {1,2,2,2,3,3,3,4,4};
    cout << "A.size: " << A.size() << endl;
    Solution s;

    int index = s.removeDuplicates(A);
    cout << "index: " << index << endl;
    cout << "A.size: " << A.size() << endl;  // s.removeDuplicates(A)已经将A改变

    for (int i=0;i<A.size();i++){
        cout << A[i] << " ";
    }
    cout << endl;
}