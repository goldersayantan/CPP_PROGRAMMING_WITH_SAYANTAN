#include <iostream>
using namespace std;

class Node  {
public:
    int data;
    Node* next;
    Node(int data)  {
        this -> data = data;
        this -> next = NULL;
    }
};

class Stack    {
private:
    Node* head;
    Node* tail;
public:
    Stack()    {
        head = tail = NULL;
    }
    void push(int data) {
        Node* newNode = new Node(data);
        if(head == NULL)    {
            head = tail = newNode;
            cout << data << " pushed into the stack." << endl;
            return;
        }
        newNode -> next = head;
        head = newNode;
        cout << data << " pushed into the stack." << endl;
    }
    void pop()  {
        if(head == NULL)    {
            cout << "Stack is empty, nothing to pop." << endl;
            return;
        }
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        cout << temp -> data << " popped from the stack." << endl;
        delete temp;
    }
    void top()  {
        if(head == NULL)    {
            cout << "Stack is empty.";
            return;
        }
        cout << head -> data << " is top element." << endl;
    }
    
};

int main()  {
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.top();
    st.pop();
    st.top();
}