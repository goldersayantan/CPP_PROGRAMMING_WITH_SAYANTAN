#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector <int> arr, int target, int start, int end)  {
    if(start < end) {
        int midIdx = start + (end - start) / 2;
        if(arr[midIdx] == target)   {
            return midIdx;
        }
        if(arr[midIdx] > target)    {
            return binarySearch(arr, target, start, midIdx - 1);
        }else   {
            return binarySearch(arr, target, midIdx + 1, end);
        }
    }else   {
        return -1;
    }
    
}

int main()  {
    vector <int> arr = {1, 2, 5, 9, 12, 15, 63, 123, 564};
    int target = 125;
    int start = 0;
    int end = arr.size() - 1;
    int result = binarySearch(arr, target, start, end);
    cout << result;

    return 0;
}
