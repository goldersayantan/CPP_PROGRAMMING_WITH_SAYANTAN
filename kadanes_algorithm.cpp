#include <iostream>
#include <vector>
using namespace std;
int main()  {
    vector <int> nums = {-4, -1, 2, 5, -2, 7, 9};
    int curr_sum = nums[0];
    int max_so_far = nums[0];
    for(int i = 1; i < nums.size(); i++)    {
        curr_sum = max(nums[i], nums[i] + curr_sum);
        max_so_far = max(max_so_far, curr_sum);
    }
    cout << max_so_far;
}