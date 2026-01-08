#include <iostream>
using namespace std;

class Node  {
public:
    int data;
    Node* next;

    Node(int data)  {
        this -> data = data;
        next = NULL;
    }
};

class List  {
private:
    Node* head;
    Node* tail;

public:
    List()  {
        head = tail = NULL;
    }
};

int main()  {

    return 0;
}