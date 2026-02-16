#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Brute force
void stock_span1(vector <int> arr, vector <int>& ans)   {
    for(int i = 0; i < arr.size(); i++) {
        int count = 0;
        for(int j = i; j >= 0; j--) {
            if(arr[j] <= arr[i])    {
                count++;
            }else   {
                break;
            }
        }
        ans.push_back(count);
    }
}

void stock_span2(vector<int> arr, vector<int>& ans) {
    stack<int> st;

    // First element
    st.push(0);
    ans.push_back(1);

    for (int i = 1; i < arr.size(); i++) {
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }

        if (st.empty()) {
            ans.push_back(i + 1);
        } else {
            ans.push_back(i - st.top());
        }

        st.push(i);
    }
}


int main()  {
    vector <int> arr = {100, 80, 60, 70, 60, 75, 85};
    vector <int> ans;
    stock_span2(arr, ans);
    for(int i : ans)    {
        cout << i << " " << endl;
    }
    return 0;
}