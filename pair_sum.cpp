#include <iostream>
#include <vector>
using namespace std;
int main()  {
    int nums[] = {2, 7, 11, 15, 19};
    int target = 18;
    int left = 0;
    int right = (sizeof(nums) / sizeof(nums[0])) - 1;
    vector <int> ans;
    while(left < right) {
        if((nums[left] + nums[right]) == target)    {
            ans.push_back(nums[left]);
            ans.push_back(nums[right]);
            break;
        }else if(nums[left] + nums[right] < target) {
            left++;
        }else {
            right--;
        }
    }
    for(int i: ans) {
        cout << i << ", ";
    }
}