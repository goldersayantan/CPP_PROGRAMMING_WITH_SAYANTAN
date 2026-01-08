#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector <int>& nums)    {
    for(int i = 1; i <= nums.size() - 1; i++)   {
        int key = nums[i];
        int j = i - 1;
        while(j >= 0 && nums[j] > key)  {
            nums[j + 1] = nums[j];
            j = j - 1;
        }
        nums[j + 1] = key;
    }
}

int main()  {
    vector <int> nums = {65, 56, 5, 10, 8, 63, 69, 52, 20, 75};
    insertionSort(nums);
    for (int data : nums)   {
        cout << data << ", ";
    }
    cout << endl;
    return 0;
}
