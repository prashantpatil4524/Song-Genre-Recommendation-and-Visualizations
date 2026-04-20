#include <iostream>
using namespace std;

// using structure to create a node
struct node {
    int data;
    node* next;
};

node* head = NULL;   

int main() {
    int choice = 1;
    node* temp;

    cout << "Insertion at Beginning of Singly Linked List\n\n";

    while (choice == 1) {
        temp = new node();           

        cout << "Enter the data: ";
        cin >> temp->data;

        temp->next = head;
        head = temp;

        cout << "Do you want to continue? (1 = Yes, 0 = No): ";
        cin >> choice;
    }

    cout << "\nLinked List is: ";

    temp = head;
    while (temp != NULL) {
        cout << temp->data << "  ";
        temp = temp->next;
    }

    return 0;
}