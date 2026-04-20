
#include<iostream>
using namespace std;
//queu as array without pointer
int main(){
    int a[100], n, front = -1, rear = -1;
    cout<<"enter size of queue: ";
    cin>>n;

    for(int i = 0; i < n; i++){
        if(rear == n-1){
            cout<<"queue is full";
            break;
        }
        else{
            rear++;
            cout<<"enter element: ";
            cin>>a[rear];
            if(front == -1){
                front = 0;
            }
        }
    }


    cout<<"elements in queue are: ";
    for(int i = front; i <= rear; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}




