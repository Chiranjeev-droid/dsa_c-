#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int main()
{
    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    n1.next = &n2;
    cout << n1.data << " " << n2.data << endl;
};