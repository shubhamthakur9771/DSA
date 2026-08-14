#include <iostream>
using namespace std;

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *tail, *new_node, *temp;
    tail = 0;
    int choice, count = 1;
    do
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        cout << "Enter data\n";
        cin >> new_node->data;
        new_node->next = 0;

        if (tail == 0)
        {
            tail = new_node;
            tail->next = new_node;
        }
        else
        {
            new_node->next = tail->next;
            tail->next =
                new_node;
            tail = new_node;
            cout << "The first data enterd is " << tail->next->data << "\n";
        }
        cout << "Do you want to continue(0,1)\n";
        cin >> choice;
    } while (choice == 1);

    cout << "The data entered by you in nodes is\n";
    temp = tail->next;
    while (temp->next != tail->next)
    {
        cout << "node no. = " << count << " --> ";
        cout << temp->data << "\n";
        temp = temp->next;

        count++;
    }
    cout << "node no. = " << count << " --> ";
    cout << temp->data << "\n";

    return 0;
}