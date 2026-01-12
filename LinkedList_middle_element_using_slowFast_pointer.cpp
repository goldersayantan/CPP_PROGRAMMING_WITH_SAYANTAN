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

class LL    {
    Node* head;
    Node* tail;
public:
    LL()    {
        head = tail = NULL;
    }
    void push_front(int data)   {
        Node* newNode = new Node(data);
        if(head == NULL)    {
            head = tail = newNode;
        }else   {
            newNode -> next = head;
            head = newNode;
        }
    }
    int middle_element()   {
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast -> next != NULL) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow -> data;
    }
    void display()  {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
};

int main()  {
    LL ll;
    ll.push_front(6);
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.display();
    int mid_element = ll.middle_element();
    cout << "The middle element will be: " << mid_element << endl;
    return 0;
}