#include <iostream>
using namespace std;

int main()
{
    struct node
    {
        int data;
        struct node *prev;
        struct node *next;
    };
    // for getting data

    struct node *head = 0, *new_node, *tail, *temp, *current, *next_node;
    int count, choice = 1;
    while (choice)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        cout << "Enter data\n";
        cin >> new_node->data;
        new_node->prev = 0;
        new_node->next = 0;
        if (head == 0)
        {
            head = tail = new_node;
        }
        else
        {
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
        cout << "Do you want to continue(0,1)\n";
        cin >> choice;
    }
    // for giving output the data entered

    cout << "The data entered by you in nodes is\n";
    temp = head;
    while (temp != 0)
    {
        cout << "node no. = " << count << " --> ";
        cout << temp->data << "\n";
        temp = temp->next;
        count++;
    }

    cout << "Do you want to reverse this linked list (0,1)\n";
    cin >> choice;
    current = head;
    while (current != 0)
    {
        next_node = current->next;
        current->next = current->prev;
        current->prev = next_node;
        current = next_node;
    }
    current = head;
    head = tail;
    tail = current;
    cout << "The data entered by you after reversing is\n";
    temp = head;
    while (temp != 0)
    {
        cout << "node no. = " << count << " --> ";
        cout << temp->data << "\n";
        temp = temp->next;
        count++;
    }

    return 0;
}