#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> stalls, int N, int C, int minDistance)   {
    int cows = 1, lastStallPosition = stalls[0];
    for(int i = 1; i < N; i++)  {
        if(stalls[i] - lastStallPosition >= minDistance)    {
            cows++;
            lastStallPosition = stalls[i];
        }

        if(cows == C)   {
            return true;
        }
    }
    return false;
}

int aggressiveCow(vector <int> stalls, int N, int C) {
    if(C > N)   {
        return -1;
    }
    sort(stalls.begin(), stalls.end());
    int st = 1, end = stalls[N - 1] - stalls[0], ans = 0;
    while(st <= end) {
        int mid = st + (end - st) / 2;
        if(isPossible(stalls, N, C, mid))    {
            ans = mid;
            st = mid + 1;
        }else   {
            end = mid - 1;
        }
    }
    return ans;
}

int main()  {
    int N;
    cout << "Enter the number of stalls you have : ";
    cin >> N;
    vector<int> stalls(N);
    for(int i = 1; i <= N; i++) {
        cout << "Enter the " << i << " stall position : ";
        cin >> stalls[i];
    }
    int C;
    cout << "Enter the number of cows : ";
    cin >> C;
    int result = aggressiveCow(stalls, N, C);
    cout << "After keeping the cows in stalls, the largest minimum distance will be : " << result;
    return 0;
}