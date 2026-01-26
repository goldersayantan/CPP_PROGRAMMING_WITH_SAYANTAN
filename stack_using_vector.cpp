#include <iostream>
#include <vector>
using namespace std;

class Stack {
public:
    vector <int> st;
    void push(int data) {
        st.push_back(data);
        cout << data << " Pushed into the stack." << endl;
    }
    void pop()  {
        if(st.empty()) {
            cout << "Stack is empty, nothing to pop." << endl;
            return;
        }
        int element = st.back();
        st.pop_back();
        cout << element << " popped back from the stack." << endl;
    }
    void top()  {
        if(st.empty()) {
            cout << "Stack is empty, nothing to pop." << endl;
            return;
        }
        int element = st.back();
        cout << element << " is the top of the stack." << endl;
    }
};

int main()  {
    Stack st;
    st.pop();
    st.push(1);
    st.push(2);
    st.push(3);
    st.pop();
    st.top();
    return 0;
}