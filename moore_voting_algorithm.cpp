#include <iostream>
#include <vector>
using namespace std;
int main()  {
    vector <int> nums = {5, 6, 2, 4, 7, 5, 9, 3, 5, 10, 5, 5, 2, 10};
    int freq = 0;
    int ans = 0;
    for(int i = 0; i < nums.size(); i++)    {
        if(freq == 0)   {
            ans = nums[i];
        }
        if(ans == nums[i])  {
            freq++;
        }else   {
            freq--;
        }
    }
    cout << ans;
}