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
private:
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
    void reverse()  {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;  // After reversing new head
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
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.display();
    ll.reverse();
    ll.display();
    return 0;
}