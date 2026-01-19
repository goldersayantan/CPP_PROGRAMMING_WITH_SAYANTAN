#include <iostream>
using namespace std;

class Node  {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int data)  {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

class DoublyList    {
private:
    Node* head;
    Node* tail;
public:
    DoublyList()    {
        head = tail = NULL;
    }
    void push_front(int val)   {
        Node* newNode = new Node(val);
        if(head == NULL)    {
            head = tail = newNode;
            return;
        }else   {
            head -> prev = newNode;
            newNode -> next = head;
            head = newNode;
        }
    }
    void push_back(int val) {
        Node* newNode = new Node(val);
        if(head == NULL)    {
            head = tail = newNode;
            return;
        }else   {
            tail -> next = newNode;
            newNode -> prev = tail;
            tail = newNode;
        }
    }
    void pop_front()    {
        if(head == NULL)    {
            cout << "List is empty" << endl;
        }
        Node* temp = head;
        if(head != NULL)    {
            head = head -> next;
            head -> prev = NULL;
        }
        temp -> next = NULL;
        delete temp;
    }
    void pop_back()     {
        if(head == NULL)    {
            cout << "List is empty" << endl;
        }
        Node* temp = tail;
        if(tail != NULL)    {
            tail = tail -> prev;
            tail -> next = NULL;
        }
        temp -> prev = NULL;
        delete temp;
    }
    void display()  {
        Node* temp = head;
        while(temp != NULL) {
            cout << temp -> data << " <-> ";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
};

int main()  {
    DoublyList dll;
    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);
    dll.display();
    dll.push_back(4);
    dll.push_back(5);
    dll.push_back(6);
    dll.display();
    dll.pop_front();
    dll.display();
    dll.pop_back();
    dll.display();
    return 0;
}