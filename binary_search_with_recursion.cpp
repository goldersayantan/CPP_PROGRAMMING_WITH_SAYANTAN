#include <iostream>
using namespace std;

int binary_search(int arr[], int target, int st, int end)  {
    if(st > end)    {
        return -1;
    }
    int mid = st + ((end - st) / 2);
    if(arr[mid] == target)   {
        return mid;
    }else if(arr[mid] < target)  {
        st = mid + 1;
        return binary_search(arr, target, st, end);
    }else {
        end = mid - 1;
        return binary_search(arr, target, st, end);
    }
}

int main()  {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int target = 20;
    int size = sizeof(arr) / sizeof(arr[0]);
    int st = 0;
    int end = size - 1;
    int result = binary_search(arr, target, st, end);
    cout << result << endl;
}