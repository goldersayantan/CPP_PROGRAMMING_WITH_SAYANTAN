#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int target) {
    int st = 0, end = (size - 1);
    while(st <= end)  {
        int mid = st + ((end - st) / 2);  // (st + end) / 2 
        if(arr[mid] == target)  {
            return mid;
        }else if(arr[mid] < target)  {
            st = mid + 1;
        }else   {
            end = mid - 1;
        }
    }
    return -1;
}

int main()  {
    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    int target = 12;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, size, target);
    cout << result << endl;
}