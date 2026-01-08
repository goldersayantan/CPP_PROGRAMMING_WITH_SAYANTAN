#include <iostream>
#include <vector>
using namespace std;

void merge(vector <int>& nums, int left, int mid, int right)    {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++)
        L[i] = nums[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = nums[mid + 1 + j];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            nums[k] = L[i];
            i++;
        } else {
            nums[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) nums[k++] = L[i++];
    while (j < n2) nums[k++] = R[j++];
}


void mergeSort(vector <int>& nums, int left, int right) {
    if(left < right)    {
        int mid = (left + right) / 2;
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        merge(nums, left, mid, right);
    }
}

int main()  {
    vector <int> nums = {65, 56, 5, 10, 8, 63, 69, 52, 20, 75};
    int left = 0;
    int right = nums.size() - 1;
    mergeSort(nums, left, right);
    for (int data : nums)   {
        cout << data << ", ";
    }
    cout << endl;
    return 0;
}