#include<iostream>
#include<vector>
using namespace std;

vector <int> left_boundary(vector <int> arr)   {
    int n = arr.size();
    vector <int> left (n, -1);
    int maxSoFar = arr[0];
    for(int i = 1; i < n; i++) {
        left[i] = maxSoFar;
        maxSoFar = max(maxSoFar, arr[i]);
    }
    return left;
}

vector <int> right_boundary(vector <int> arr)   {
    int n = arr.size();
    vector <int> right (n, -1);
    int maxSoFar = arr[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        right[i] = maxSoFar;
        maxSoFar = max(maxSoFar, arr[i]);
    }
    return right;
}

vector <int> final_boundary(vector <int> left, vector <int> right)  {
    vector <int> result;
    for(int i = 0; i < left.size(); i++)    {
        if(left[i] <= right[i]) {
            result.push_back(left[i]);
        }else   {
            result.push_back(right[i]);
        }
    }
    return result;
}

int trap(vector <int> arr, vector <int> boundary) {
    int total_trap = 0;
    for(int i = 1; i <= arr.size() - 2; i++)    {
        if(boundary[i] > arr[i]) {
            total_trap += boundary[i] - arr[i];
        }
    }
    return total_trap;
}

void display(vector <int> arr)  {
    for(int i : arr)    {
        cout << i << " ";
    }
    cout << endl;
}

int main()  {
    vector <int> arr = {4, 2, 0, 3, 2, 5};
    vector <int> left = left_boundary(arr);
    vector <int> right = right_boundary(arr);
    vector <int> boundary = final_boundary(left, right);
    int total_trap = trap(arr, boundary);
    cout << total_trap << endl;
    return 0;
}