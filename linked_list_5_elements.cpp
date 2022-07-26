#include <iostream>
using namespace std;
// Program to create a linked list with 5 elements in C++
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        // initializing next with null
        next = NULL;
    }
};

int main()
{
    // STATICALLY
    Node n1(2);
    Node n2(3);
    Node n3(4);
    Node n4(5);
    Node n5(6);
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    cout << n1.data << " " << n2.data << " " << n3.data << " " << n4.data << " " << n5.data;
}