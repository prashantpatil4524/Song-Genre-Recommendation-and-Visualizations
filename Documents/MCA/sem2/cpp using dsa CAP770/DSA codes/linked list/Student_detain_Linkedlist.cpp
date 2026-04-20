//develope a programm to store student detain using linked list each noed in the linked list should contain following information
#include <iostream>
#include <string>   
using namespace std;

struct Student {
    string name;
    int mark;
    string rollNumber;
    Student* next;
};

Student* head = NULL;
void insertStudent() {
    Student* newStudent = new Student();
    cout << "Enter student name: ";
    cin >> newStudent->name;
    cout << "Enter student mark: ";
    cin >> newStudent->mark;
    cout << "Enter student roll number: ";
    cin >> newStudent->rollNumber;
    newStudent->next = head;
    head = newStudent;
}
void displayStudents() {
    Student* temp = head;
    cout << "\nStudent Details:\n";
    while (temp != NULL) {
        cout << "Name: " << temp->name << ", Age: " << temp->mark << ", Roll Number: " << temp->rollNumber << endl;
        temp = temp->next;
    }
}
int main() {
    int choice = 1;
    while (choice == 1) {
        insertStudent();
        cout << "Do you want to add another student? (1 = Yes, 0 = No): ";
        cin >> choice;
    }
    displayStudents();
    return 0;
}

//with class

// #include <iostream>
// using namespace std;

// class NODE{
//   public:
//   string name;
//   int roll;
//   int mark;
//   NODE* next;
  
//   NODE(string name,int roll, int mark ){
//     this->name=name;
//     this->roll=roll;
//     this->mark=mark;
//     next=NULL;
//   }
// };

// class LinkList{
//   private:
//   NODE* head;
  
//   public:
//   LinkList(){
//     head=NULL;
//   }
  
//   void insertfront(string name,int roll, int mark ){
//     NODE* newnode=new NODE(name,roll,mark);
//     newnode->next=head;
//     head=newnode;
//   }
  
//   void insertatend(string name,int roll, int mark ){
//     NODE* newnode=new NODE(name,roll,mark);
//     if(head==NULL){
//       head=newnode;
//       return;
//     }
//     NODE* temp= head;
//     while(temp->next!=NULL){
//       temp=temp->next;
//     }
//     temp->next=newnode;
//   }
  
//   void display(){
//     NODE* temp=head;
//     while(temp!=NULL){
//         cout<<"name : "<<temp->name<<" , "<<"roll : "<<temp->roll<<" , "<<"mark : "<<temp->mark<<" -> "<<endl;
//         temp=temp->next;
//     }
//     cout<<"->NULL";
//   }
// };

// int main() 
// {
//     LinkList ll;
//     ll.insertfront("sachin",12,30);
//     ll.insertfront("makal",45,30);
//     ll.insertfront("kamal",34,23);
//     ll.insertatend("jangir",24,32);
//     ll.display();
//     return 0;
// }