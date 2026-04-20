#include<iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 5, 8, 9, 5, 11, 5};
    int sr;
    int count = 0;
    cout<<"Enter the element to be searched: ";
    cin>>sr;
    int patil = 0;
    for(int i = 0; i<5; i++){
        if(arr[i] == sr){
            patil = 1;
            count++;
            cout<<"Element found at index "<<i<<endl;
            
        }
    }
    if(patil == 0){
        cout<<"Element not found"<<endl;
    }
     cout<<"Total count: "<<count<<endl;
    return 0;
   
}