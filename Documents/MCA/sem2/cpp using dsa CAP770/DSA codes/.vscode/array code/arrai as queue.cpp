#include <iostream>
using namespace std;
int main(){
    int array[10], n; 
    int front, rare;
    
    
    front = -1;
    rare = -1;

    for(int i = 0; i<10; i++){
        if(rare  == -1 && front == -1) {
            cout<<"queue is empty";
        }
        front = front+1;
        cout<<"enter element: ";
        cin>>array[i];

        cout<<"Display array elements: ";
        for(int i = front; i<=rare; i++){
            cout<<array[i]<<" ";
        }
        
    }
    return 0;
}
