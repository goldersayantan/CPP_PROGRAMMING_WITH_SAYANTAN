#include <iostream>
using namespace std;

int searchElement(int arr[], int size, int target) {
    int left = 0, right = (size - 1);
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target)  {
            return mid;
        }
        if(arr[0] <= arr[mid])   {
            if((arr[left] <= target) && (arr[mid] > target))   {
                right = mid - 1;
            }else   {
                left = mid + 1;
            }
        }else   {
            if((arr[mid] < target) && (arr[right] >= target))   {
                left = mid + 1;
            }else   {
                right = mid - 1;
            }
        }
        
    }
}

int main()  {
    int arr[] = {7, 8, 9 , 0, 1, 2, 3, 4, 5 ,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 0;
    int result = searchElement(arr, size, target);
    cout << result;
}
            