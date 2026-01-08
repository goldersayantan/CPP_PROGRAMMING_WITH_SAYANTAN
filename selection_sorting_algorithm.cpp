#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[min_index]) {
                min_index = j;
            }
        }
        swap(nums[i], nums[min_index]);
    }
}

int main() {
    vector<int> nums = {65, 56, 5, 10, 8, 63, 69, 52, 20, 75};
    selectionSort(nums);
    for (int data : nums) {
        cout << data << ", ";
    }
    cout << endl;
    return 0;
}
