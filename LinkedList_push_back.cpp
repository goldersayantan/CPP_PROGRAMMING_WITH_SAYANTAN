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

class LL {
private:
    Node* head;
    Node* tail;
public:
    LL()    {
        head = tail = NULL;
    }
    void push_back(int val)    {
        Node* newNode = new Node(val);
        if(head == NULL)    {
            head = tail = newNode;
            return;
        }else   {
            tail -> next = newNode;
            tail = newNode;
        }
    }
    void display()  {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << "NULL";
    }
};

int main()  {
    LL l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.display();
    return 0;
}