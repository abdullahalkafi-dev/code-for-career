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

void reverse_doubly_linked_list(Node *&head, Node *tail, Node *tempA, Node *tempB)
{

    if (tempA == tempB || tempA == NULL || tempB == NULL || tempA->prev == tempB)
    {
        return;
    }

    int tempVal = tempA->val;
    tempA->val = tempB->val;
    tempB->val = tempVal;

    reverse_doubly_linked_list(head, tail, tempA->next, tempB->prev);
}

void reverse_doubly_linked_list_for_loop(Node *&head, Node *tail)
{

    Node *left = head;
    Node *right = tail;

    for (; left != right & left->prev != right; left = left->next, right = right->prev)
    {
        int tempVal = left->val;
        left->val = right->val;
        right->val = tempVal;
    }
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

    if (head != NULL)
    {
        // reverse_doubly_linked_list(head, tail, head, tail);
        reverse_doubly_linked_list_for_loop(head, tail);
    }
    print_linked_list(head);

    return 0;
}
