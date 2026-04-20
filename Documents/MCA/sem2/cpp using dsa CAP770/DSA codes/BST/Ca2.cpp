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
    if(salary <root -> salary){
        root -> left = insert(root -> left, id, salary);
    }
    else if(salary >root ->salary){
        root -> right = insert(root -> right, id, salary); 
    }
    return root;   
}

void preOrder(employee * root){
    if(root != NULL){
        cout<<"Id:"<< root -> id<<"Salary: "<< root -> salary<<endl;
        preOrder(root -> left);
        preOrder(root -> right);
    }
    
}