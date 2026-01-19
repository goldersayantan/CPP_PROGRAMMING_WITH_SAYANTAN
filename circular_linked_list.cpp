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

class CircularList    {
private:
    Node* head;
    Node* tail;
public:
    CircularList()  {
        head = tail = NULL;
    }
    void insert_at_head(int val)    {
        Node* newNode = new Node(val);
        if(head == NULL) {
            head = tail = newNode;
            tail -> next = head;
            return;
        }else   {
            newNode -> next = head;
            head = newNode;
            tail -> next = head;
        }
    }
    void insert_at_tail(int val)   {
        Node* newNode = new Node(val);
        if(head == NULL)    {
            head = tail = newNode;
            tail -> next = head;
        }else   {
            newNode -> next = head;
            tail -> next = newNode;
            tail = newNode;
        }
    }
    void delete_at_head()   {
        if(head == NULL)    {
            cout << "List is empty" << endl;
            return;
        }else if(head == tail)    {
            delete tail;
            head = tail = NULL;
        }else   {
            Node* temp = head;
            head = head -> next;
            temp -> next = NULL;
            tail -> next = head;
            delete temp;
        }
    }
    void delete_at_tail()   {
        if(head == NULL)    {
            cout << "List is empty" << endl;
            return;
        }else if(head == tail)    {
            delete tail;
            head = tail = NULL;
        }else   {
            Node* temp = head;
            while(temp -> next != tail) {
                temp = temp -> next;
            }
            Node* deleteNode = tail;
            tail = temp;
            tail -> next = head;
            deleteNode -> next = NULL;
            delete deleteNode;
        }   
    }
    void display()  {
        if(head == NULL)    {
            return;
        }
        cout << head -> data << " -> ";
        Node* temp = head -> next;
        while(temp != head) {
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }
        cout << temp -> data << endl;
    }
};

int main()  {
    CircularList cl;
    cl.insert_at_head(3);
    cl.insert_at_head(2);
    cl.insert_at_head(1);
    cl.display();
    cl.insert_at_tail(4);
    cl.insert_at_tail(5);
    cl.insert_at_tail(6);
    cl.display();
    cl.delete_at_head();
    cl.display();
    cl.delete_at_tail();
    cl.display();
    return 0;
}