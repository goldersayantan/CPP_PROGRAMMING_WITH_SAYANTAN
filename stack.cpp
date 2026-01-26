#include <iostream>
#include <stack>
using namespace std;

int main()  {
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    if(!st.empty()) {
        cout << st.top() << " is top of the stack" << endl;
        st.pop();
        cout << "After poppin top element, the new to will be: " << st.top();
    }else   {
        cout << "Stack is empty." << endl;
    }
    return 0;
}