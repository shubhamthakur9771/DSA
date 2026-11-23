
#include <iostream>
using namespace std;

void editablesll();
void createsll();
void editablesll()
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
    cout << "Do  you want to insert data(0,1)\n";
    cin >> choice;
    while (choice)
    {
        cout << "Do  you want to insert data at begining (0,1)\n";
        cin >> choice;
        if (choice)
        {
            new_node = (struct node *)malloc(sizeof(struct node));
            cout << "Enter data\n";
            cin >> new_node->data;
            new_node->next = head;
            head = new_node;

            cout << "The final data entered by you after inserting data at begining node  is\n";
            temp = head;
            count = 1;
            while (temp != 0)
            {
                cout << "node no. = " << count << " --> ";
                cout << temp->data << "\n";
                temp = temp->next;
                count++;
            };
        }
        else if (choice == 0)
        {

            cout << "Do  you want to insert data at end of nodes (0,1)\n";
            cin >> choice;
            if (choice)
            {
                new_node = (struct node *)malloc(sizeof(struct node));
                cout << "Enter data\n";
                cin >> new_node->data;
                new_node->next = 0;
                temp = head;

                choice = 0;
                while (temp->next != 0)
                {
                    temp = temp->next;
                }
                temp->next = new_node;

                cout << "The final data entered by you after inserting data at begining node  is\n";
                temp = head;
                count = 1;
                while (temp != 0)
                {
                    cout << "node no. = " << count << " --> ";
                    cout << temp->data << "\n";
                    temp = temp->next;
                    count++;
                };
                choice = 0;
            }
        }
        cout << "If you want to enter your data at specific position then enter the position after which you want to insert the data\n";
        int pos, i = 1;
        cin >> pos;
        new_node = (struct node *)malloc(sizeof(struct node));
        if (pos > count)
        {
            cout << "Invalid position";
        }
        else
        {
            temp = head;
            while (i < pos)
            {
                temp = temp->next;
                i++;
            }
            cout << "Enter data\n";
            cin >> new_node->data;
            new_node->next = temp->next;
            temp->next = new_node;
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
        };
        choice = 0;
    }

    // deletion of data

    {
        cout << "do you  want to delete a node completely (0,1)\n";
        choice = 0;
        cin >> choice;
        // Deletion from begining
        if (choice)
        {
            cout << "do you  want to delete a node completely from begining (0,1)\n";
            choice = 0;
            cin >> choice;
            if (choice)
            {
                temp = head;
                head = head->next;
                free(temp);

                cout << "The data entered by you after deleting node from begining is\n";
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

            // Deletion from end
            cout << "Do you  want to delete a node completely from end (0,1)\n";
            choice = 0;
            cin >> choice;
            if (choice)
            {
                struct node *prev_node;
                temp = head;
                while (temp->next != 0)
                {
                    prev_node = temp;
                    temp = temp->next;
                }
                if (temp == head)
                {
                    head = 0;
                }
                else
                {
                    prev_node->next = 0;
                }
                free(temp);

                cout << "The data entered by you after deleting node from end is\n";
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
            // Deleting from specific position

            cout << "Do you  want to delete a node completely from any specific position (0,1)\n";
            choice = 0;
            cin >> choice;
            if (choice)
            {
                struct node *next_node;
                int pos2, j = 0;
                temp = head;
                cout << "Please enter the position after which you want to delete the node\n";
                cin >> pos2;
                while (j < pos2 - 1)
                {
                    temp = temp->next;
                    j++;
                }
                next_node = temp->next;
                temp->next = next_node->next;
                free(next_node);

                cout << "The data entered by you after deleting node from end is\n";
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
}
void createsll()
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
}

int main()
{
    // editablesll();
    // createsll();
    return 0;
}