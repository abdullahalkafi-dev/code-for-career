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
void print_forword(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
void print_backword(Node *tail)
{

    Node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
}

void insert_head(Node *&head, int val, Node *&tail)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}

void insert_tail(Node *&head, int val, Node *&tail)
{

    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    new_node->prev = tail;
    tail->next = new_node;
    tail = new_node;
}
void insert_at_any_position(Node *&head, Node *&tail, int index, int val)
{

    Node *new_node = new Node(val);
    Node *temp = head;

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
    }
    if (index == 0)
    {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    int i = 0;
    while (i < index - 1)
    {
        temp = temp->next;
        i++;
    }
    Node *next_node = temp->next;

    temp->next = new_node;
    new_node->prev = temp;
    new_node->next = next_node;
    next_node->prev = new_node;
}

void delete_head(Node *&head, Node *&tail)
{
    if (head->next == NULL)
    {
        tail = NULL;
        return;
    }
    Node *nextHead = head->next;

    delete head;
    head = nextHead;
    head->prev = NULL;
}

void delete_at_any_position(Node *&head, int ind)
{
    if (head == NULL || ind < 0)
        return;

    if (ind == 0)
    {
        Node *NodeToDelete = head;

        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        delete NodeToDelete;
        return;
    }

    Node *temp = head;
    int i = 0;
    while (i < ind - 1 & temp->next !=NULL)
    {
        temp = temp->next;
        i++;
    }
    if(temp->next !=NULL){
    temp->next->prev = temp->next;

    }

    delete temp->next;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;
    insert_head(head, 0, tail);
    
    insert_head(head, -10, tail);

    insert_head(head, -20, tail);
    insert_tail(head, 40, tail);
    insert_at_any_position(head, tail, 3, 5);
    insert_at_any_position(head, tail, 3, 6);
    insert_at_any_position(head, tail, 3, 7);
    //    delete_head(head,tail);
    // delete_head(head,tail);
    delete_at_any_position(head, 10);

  int val;
  while(true){
    cin>>val;
    if(val==-1){
        break;
    }
    insert_tail(head,val,tail);
  }


    print_forword(head);
    cout << endl;
    print_backword(tail);
    return 0;
}