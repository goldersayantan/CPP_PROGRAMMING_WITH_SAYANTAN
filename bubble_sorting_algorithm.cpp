#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector <int>& nums)   {
    for(int i = 0; i < nums.size(); i++)  {
        bool swapped = false;
        for(int j = 0; j < nums.size() - i - 2; j++) {
            if(nums[j] > nums[j + 1])   {
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)   {
            break;
        }
    }
}

int main()  {
    vector <int> nums = {65, 56, 5, 10, 8, 63, 69, 52, 20, 75};
    bubbleSort(nums);
    for (int data : nums)   {
        cout << data << ", ";
    }
    cout << endl;
    return 0;
}