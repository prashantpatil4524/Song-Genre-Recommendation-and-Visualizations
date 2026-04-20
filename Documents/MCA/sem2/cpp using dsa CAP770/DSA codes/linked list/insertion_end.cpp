//insertion at end
#include<iostream>
#include <string>
using namespace std;

struct node
{
    string name;
    int Rollno;
    int marks;
    node* next;
};

node* head=NULL;

int main(){
    int choice = 1;
    node* temp;
    cout<<"insertion at begining: ";

    while (choice == 1)     
    {
        temp = new node();

        cout<<"Enter student name; ";
        cin>>temp->name;
        cout<<"insert roll no: ";
        cin>>temp->Rollno;
        cout<<"enter student marks: ";
        cin>>temp->marks;

        head = temp;

        cout<<"continue (1 or 0): ";
        cin>>choice;

    }

    cout<<"\nstudent list is: ";
    
    temp = head;

    while (temp != NULL)
    {
        cout<<temp->name <<" ";
        temp = temp->next;
    }
    return 0;

}





