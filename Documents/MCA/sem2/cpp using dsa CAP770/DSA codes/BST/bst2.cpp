
#include <iostream>
using namespace std;

struct employee{
    int salary;
    int id;
    employee * right;
    employee *left;
};

employee *root = NULL;

employee * createNode(int id, int salary){
    employee * newNode = new employee;
    newNode -> id = id;
    newNode -> salary = salary;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
}

employee * insert(employee * root, int id, int salary){
    if(root == NULL){
        return createNode(id, salary);
    }
    if(salary < root -> salary){
        root -> left = insert(root -> left, id, salary);
    }
    else if(salary > root -> salary){
        root -> right = insert(root -> right, id, salary);
    }
    return root;
}

void preOrder(employee * root){
    if(root != NULL){
        cout << "ID: " << root -> id << " Salary: " << root -> salary << endl;
        preOrder(root -> left);
        preOrder(root -> right);
    }
}

int main(){
    root = insert(root, 101, 50000);
    insert(root, 102, 60000);
    insert(root, 103, 55000);
    insert(root, 104, 70000);
    insert(root, 105, 65000);

    cout << "Employee Salary Lookup System (Pre-Order Traversal):" << endl;
    preOrder(root);

    return 0;
}
