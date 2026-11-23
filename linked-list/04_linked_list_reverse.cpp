#include <iostream>
using namespace std;

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *new_node, *temp;
    head = 0;
    int choice, count = 1;
    do
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        cout << "Enter data\n";
        cin >> new_node->data;
        new_node->next;

        if (head == 0)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
        cout << "Do you want to continue(0,1)\n";
        cin >> choice;
    } while (choice == 1);

    cout << "The data entered by you in nodes is\n";
    temp = head;
    while (temp != 0)
    {
        cout << "node no. = " << count << " --> ";
        cout << temp->data << "\n";
        temp = temp->next;
        count++;
    }
    cout << "Do you want to reverse the given linked list (0,1)\n";
    cin >> choice;
    if (choice)
    {
        struct node *prev_node, *current_node, *next_node;
        prev_node = 0;
        current_node = next_node = head;
        while (next_node != 0)
        {
            next_node = next_node->next;
            current_node->next = prev_node;
            prev_node = current_node;
            current_node = next_node;
        }
        head = prev_node;
        cout << "The data entered by you in nodes is\n";
        temp = head;
        count = 1;
        while (temp != 0)
        {
            cout << "node no. = " << count << " --> ";
            cout << temp->data << "\n";
            temp = temp->next;
            count++;
        }
    }
    return 0;
}