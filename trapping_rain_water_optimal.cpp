#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    if(n < 3) return 0;

    int totalTrap = 0;

    vector<int> left_boundary(n);
    vector<int> right_boundary(n);

    // Build left prefix max
    left_boundary[0] = height[0];
    for(int i = 1; i < n; i++) {
        left_boundary[i] = max(left_boundary[i - 1], height[i]);
    }

    // Build right prefix max
    right_boundary[n - 1] = height[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        right_boundary[i] = max(right_boundary[i + 1], height[i]);
    }

    // Calculate trapped water
    for(int i = 0; i < n; i++) {
        totalTrap += min(left_boundary[i], right_boundary[i]) - height[i];
    }
    return totalTrap;
}

int main()  {
    vector <int> arr = {4, 2, 0, 3, 2, 5};
    int totalTrap = trap(arr);
    cout << totalTrap << endl;
}
