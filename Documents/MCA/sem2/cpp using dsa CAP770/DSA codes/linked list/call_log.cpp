#include <iostream>
#include <string>

using namespace std;
//most resent call is arranged in head of linked list user inputed name,phone number and time of call and store in linked list
struct call_log
{
    string name;
    int phoneno;
    string time;
    call_log *temp;
}*head=NULL;

void insert(string name,int phoneno,string time)
{
    call_log *newnode=new call_log;
    newnode->name=name;
    newnode->phoneno=phoneno;
    newnode->time=time;
    newnode->temp=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        newnode->temp=head;
        head=newnode;
    }
}

void display()
{
    call_log *temp=head;
    while(temp!=NULL)
    {
        cout<<"Name: "<<temp->name<<endl;
        cout<<"Phone Number: "<<temp->phoneno<<endl;
        cout<<"Time of Call: "<<temp->time<<endl;
        cout<<"-----------------------------"<<endl;
        temp=temp->temp;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of calls: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string name,time;
        int phoneno;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter phone number: ";
        cin>>phoneno;
        cout<<"Enter time of call: ";
        cin>>time;
        insert(name,phoneno,time);
    }
    cout<<"Call Log:"<<endl;
    display();
    return 0;
}





