#include <iostream>
using namespace std;

class Node  {
public:
    int data;
    Node *next;
    
    Node(int data)  {
        this -> data = data;
        this -> next = NULL;
    }
};

class LL    {
    Node *head;
    Node *tail;

public:
    LL()    {
        head = tail = NULL;
    }
    void push_front(int val)   {
        Node* newNode = new Node(val);  // Creating of new node using Node class
        if(head == NULL)    {
            head = tail = newNode;
            return;
        }else   {
            newNode -> next = head;
            head = newNode;
        }
    }
    int search(int val)   {
        Node* temp = head;
        int pos = 0;
        if(head == NULL)    {
            cout << "Empty Linked List";
            return pos;
        }        
        while(temp != NULL) {
            if(temp -> data == val) {
                return pos;
            }else   {
                temp = temp -> next;
                pos++;
            }
        }
        return -1;
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
    LL l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.display();
    int idx = l1.search(2);
    cout << idx;
    return 0;
}