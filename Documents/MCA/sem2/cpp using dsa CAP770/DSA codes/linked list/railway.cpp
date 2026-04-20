#include<iostream>
using namespace std;

struct Node
{
    int coach_no;
    Node *next;
};
Node *top = NULL;
Node* push(Node *top, int value)
{
    Node *temp = new Node();
    temp->coach_no = value;
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
    cout << "The coach number being deleted: " << temp->coach_no << endl;
    top = top->next;
    delete temp;
    return top;
}








