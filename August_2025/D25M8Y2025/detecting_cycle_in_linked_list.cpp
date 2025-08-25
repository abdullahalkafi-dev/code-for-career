#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_linked_list(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    tail->next = new_node;
    new_node->prev = tail;
    tail = new_node;
}

bool check_cycle(Node * head ){

Node* slowMove =head;
Node* fastMove =head;


}


int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int i;
        cin >> i;
        if (i == -1)
        {
            break;
        }
        insert_at_tail(head, tail, i);
    }


    print_linked_list(head);

    return 0;
}
