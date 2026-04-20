#include<iostream>
using namespace std;

// Records of roll numbers kept organized and searchable by BST
// Inorder traversal displays roll numbers in ascending order
struct node{
    int data;
    node *left;
    node *right;
};

node *root = NULL;

void tree(int n){
    node *newnode = new node{n, NULL, NULL};
    if(root == NULL){
        root = newnode;
        return;
    }
    node *current = root, *present = NULL;

    while(current != NULL){
        present = current;
        current = (n < current->data) ? current->left : current->right;
    }

    if(n < present->data)
        present->left = newnode;
    else
        present->right = newnode;
}

// Inorder Traversal: Left -> Root -> Right
void inorder(node *current){
    if(current == NULL)
        return;
    
    inorder(current->left);       // 1. Visit left subtree
    cout << current->data << " "; // 2. Print current node
    inorder(current->right);      // 3. Visit right subtree
}

int main(){
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int value;
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        tree(value);
    }

    // Inorder traversal to display all roll numbers in ascending order
    cout << "\nRoll numbers in ascending order: " << endl;
    inorder(root);
    cout << endl;

    return 0;
}