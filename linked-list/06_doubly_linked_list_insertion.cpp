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

    struct node *head = 0, *new_node, *tail, *temp;
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
    cout << "The data entered by you in nodes is\n";
    temp = head;
    while (temp != 0)
    {
        cout << "node no. = " << count << " --> ";
        cout << temp->data << "\n";
        temp = temp->next;
        count++;
    }

    // for inserting node

    cout << "Do  you want to insert data(0,1)\n";
    cin >> choice;
    while (choice)
    {
        // for insertion at begining
        cout << "Do  you want to insert data at begining (0,1)\n";
        cin >> choice;
        if (choice)
        {
            while (choice)
            {
                new_node = (struct node *)malloc(sizeof(struct node));
                cout << "Enter data\n";
                cin >> new_node->data;
                new_node->prev = 0;
                new_node->next = 0;
                head->prev = new_node;
                new_node->next = head;
                head = new_node;

                cout << "Do you want to continue(0,1)\n";
                cin >> choice;
            }

            cout << "The final data entered by you after inserting data at begining node  is\n";
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
        else if (choice == 0)
        {
            // for insertion at end
            cout << "Do  you want to insert data at end of nodes (0,1)\n";
            cin >> choice;
            if (choice)
            {
                while (choice)
                {
                    new_node = (struct node *)malloc(sizeof(struct node));
                    cout << "Enter data\n";
                    cin >> new_node->data;
                    new_node->prev = 0;
                    new_node->next = 0;
                    tail->next = new_node;
                    new_node->prev = tail;
                    tail = new_node;

                    cout << "Do you want to continue(0,1)\n";
                    cin >> choice;
                }

                cout << "The final data entered by you after inserting data at the last node  is\n";
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
        }
        // for insertion at specific position
        cout << "Do you want to enter your data at specific position \n";
        cin >> choice;
        if (choice)
        {

            int count;
            int pos2, choice = 1, i = 1;
            cout << "Enter the position at which you want to insert node\n";
            cin >> pos2;

            while (choice)
            {
                struct node *temp;
                // *head , *new_node, *tail,;
                new_node = (struct node *)malloc(sizeof(struct node));
                cout << "Enter data\n";
                cin >> new_node->data;
                // new_node->prev = 0;
                // new_node->next = 0;
                temp = head;
                while (i < pos2 - 1)
                {
                    temp = temp->next;
                    i++;
                }
                cout << "Enter data\n";
                new_node->prev = temp;
                new_node->next = temp->next;
                temp->next = new_node;
                new_node->next->prev = new_node;

                cout << "The final data entered by you after inserting data at the specific position  is\n";
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
        }
    }
    return 0;
}