//singly linke list and calculate tax of employee fom salary slab 

#include <iostream>
#include <string>

using namespace std;

struct electricity
{
    int employee_id;
    string name, depertment;
    float a_salary;
    float calculated_tax;
    electricity *next;
    
    void calculated_tax(){
        if(a_salary <= 250000){
            calculated_tax = 0;
        }
        else if(a_salary > 250001 && a_salary <= 500000){
            calculated_tax = a_salary * 5 / 100;
        }
        else if(a_salary > 500001 && a_salary <= 1000000){
            calculated_tax = a_salary * 20 / 100;
        }
        else{
            calculated_tax = a_salary * 30 / 100;
        }   
    }
};
electricity *head = NULL;

int main(){
    

    head = new electricity;
    head -> employee_id = 1;
    head -> name = "prashant";
    head -> depertment = "UI";
    head -> a_salary = 10000;
    head -> calculated_tax();
    head -> next = NULL;

    
    electricity *temp = new electricity;
    temp -> employee_id = 2;
    temp -> name = "om";
    temp -> depertment = "it";
    temp -> a_salary = 255000;
    temp -> calculated_tax();
    temp -> next = NULL;
    head -> next = temp;
    
    electricity *third = new electricity;
    third -> employee_id  = 3;
    third -> name = "aditya";
    third -> depertment = "UX";
    third -> a_salary = 500010;
    third -> calculated_tax();
    third -> next = NULL;
    temp -> next = third;

    cout << "Employee ID: " << head -> employee_id << endl;
    cout << "Employee Name: " << head -> name << endl;
    cout << "Employee Depertment: " << head -> depertment << endl;
    cout << "Employee Salary: " << head -> a_salary << endl;
    cout << "Employee Calculated Tax: " << head -> calculated_tax << endl;
    

    electricity *current = head -> next;
    while(current != NULL){
        cout << "Employee ID: " << current -> employee_id << endl;
        cout << "Employee Name: " << current -> name << endl;
        cout << "Employee Depertment: " << current -> depertment << endl;
        cout << "Employee Salary: " << current -> a_salary << endl;
        cout << "Employee Calculated Tax: " << current -> calculated_tax << endl;
        current = current -> next;
    }

    return 0;
    
    




}
