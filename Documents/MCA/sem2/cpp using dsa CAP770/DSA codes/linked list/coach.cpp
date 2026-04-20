// Stack as linked list
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *top = NULL;
Node* push(Node *top, int value)
{
    Node *temp = new Node();
    temp->data = value;
    temp->next = top;
    top = temp;
    return top;
}
Node* pop(Node *top)
{
    if (top == NULL)
    {
        cout << "Stack is empty\n";
        return top;
    }
    Node *temp = top;
    cout << "The value being deleted: " << temp->data << endl;
    top = top->next;
    delete temp;
    return top;
}
int peek(Node *top)
{
    if (top == NULL)
    {
        cout << "Stack is empty\n";
        return -1;
    }
    return top->data;
}
void display(Node *top)
{
    if (top == NULL)
    {
        cout << "Stack is empty\n";
        return;
    }
    Node *ptr = top;
    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}
int main()
{
    int choice, value;
    while (1)
    {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                top = push(top, value);
                break;

            case 2:
                top = pop(top);
                break;

            case 3:
                display(top);
                break;

            case 4:
                cout << "Top element: " << peek(top) << endl;
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid choice\n";
        }
    }
}