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
    // DELETION PROCESS BEGINS HERE
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
            int pos, i = 0;
            temp = head;
            cout << "Please enter the position after which you want to delete the node\n";
            cin >> pos;
            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
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
    return 0;
}