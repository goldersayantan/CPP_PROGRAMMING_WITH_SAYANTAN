#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector <int> boards, int M, int N, int maxUnitAllowed)  {
    int painters = 1, units = 0;
    for(int i = 0; i < boards.size(); i++)  {
        if(boards[i] > maxUnitAllowed)   {
            return false;
        }
        if((units + boards[i]) <= maxUnitAllowed)    {
            units += boards[i];
        }else   {
            painters++;
            units = boards[i];
        }
    }

    if(painters > M)    {
        return false;
    }else   {
        return true;
    }
}

int paintersPartition(vector<int> boards, int M, int N) {
    if(M > N)   {
        return -1;
    }
    int totalBoardUnit = 0;
    for(int i = 0; i < boards.size(); i++)  {
        totalBoardUnit += boards[i];
    }
    int st = 0, end = totalBoardUnit, ans = 0;
    while(st <= end)    {
        int mid = st + (end - st) / 2;
        if(isValid(boards, M, N, mid))  {
            ans = mid;
            end = mid - 1;
        }else   {
            st = mid + 1;
        }
    }
    return ans;
}

int main()  {
    vector <int> vec = {10, 20, 5, 7, 9, 30, 21};
    int M = 4;
    int N = 7;
    int result = paintersPartition(vec, M, N);
    cout << result;
    return 0;
}