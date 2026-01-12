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
    void insert_middle(int data, int pos)    {
        Node* newNode = new Node(data);
        Node* temp = head;
        if(pos < 0) {
            cout << "Invalid position" << endl;
        }else if(pos == 0)  {
            push_front(data);
        }else{
            for(int i = 0; i <= pos-1; i++) {
                if(temp == NULL)    {
                    cout << "Invalid position" << endl;
                    return;
                }
                temp = temp -> next;
            }
            newNode -> next = temp -> next;
            temp -> next = newNode;
        }
    }
    void display()  {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << "NULL" << endl;;
    }
};

int main()  {
    LL l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.display();
    l1.insert_middle(5, 5);
    l1.display();
    return 0;
}