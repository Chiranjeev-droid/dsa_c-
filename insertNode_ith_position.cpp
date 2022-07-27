#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

node *takeinput()
{
    int data;
    cin >> data;
    node *head = NULL;
    node *tail = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

node *insertNode(node *head, int i, int data)
{
    // creating node
    node *newnode = new node(data);
    int count = 0;
    node *temp = head; // temp will be referring to i-1th adddress

    // when user want to insert element at 0th index
    if (i == 0)
    {
        newnode->next = head;
        head = newnode;
        return head;
    }

    // agr count ko greater than equal to krdiya toh vo null ke next ko bhi include krdega which will give segmentation fault error.
    // temp != null just to check whether ll are empty or not.
    while (temp != NULL && count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL)
    // execute when jb hmne i ki value within limits daali aur hmaara temp correct node pr phuch chuka hai tb execute hoga ye block.
    {
        node *a = temp->next;
        temp->next = newnode;
        newnode->next = a;
    }
    return head;
}
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    node *head = takeinput();
    print(head);
    cout << endl;
    int i, data;
    cin >> i >> data;
    head = insertNode(head, i, data);
    print(head);
}