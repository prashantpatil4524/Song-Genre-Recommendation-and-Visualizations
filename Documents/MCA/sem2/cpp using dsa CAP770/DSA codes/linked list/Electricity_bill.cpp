#include <iostream>
#include <string>

using namespace std;

struct electricity {
    int employee_id;
    string name, department;
    float a_salary;
    float calculated_tax;
    electricity* next;

    void calculate_tax() {
        if (a_salary <= 250000) {
            calculated_tax = 0;
        }r
        else if (a_salary <= 500000) {
            calculated_tax = a_salary * 5 / 100;
        }
        else if (a_salary <= 1000000) {
            calculated_tax = a_salary * 20 / 100;
        }
        else {
            calculated_tax = a_salary * 30 / 100;
        }
    }
};

electricity* head = NULL;

int main() {

    head = new electricity;
    head->employee_id = 1;
    head->name = "prashant";
    head->department = "UI";
    head->a_salary = 10000;
    head->calculate_tax();
    head->next = NULL;

    electricity* temp = new electricity;
    temp->employee_id = 2;
    temp->name = "om";
    temp->department = "IT";
    temp->a_salary = 255000;
    temp->calculate_tax();
    temp->next = NULL;
    head->next = temp;

    electricity* third = new electricity;
    third->employee_id = 3;
    third->name = "aditya";
    third->department = "UX";
    third->a_salary = 500010;
    third->calculate_tax();
    third->next = NULL;
    temp->next = third;

    electricity* temp1 = head;
    while (temp1 != NULL) {
        cout << "Employee ID: " << temp1->employee_id << endl;
        cout << "Employee Name: " << temp1->name << endl;
        cout << "Department: " << temp1->department << endl;
        cout << "Salary: " << temp1->a_salary << endl;
        cout << "Calculated Tax: " << temp1->calculated_tax << endl;
        cout << "-----------------------------" << endl;
        temp1 = temp1->next;
    }

    return 0;
}