#include <iostream>
using namespace std;

int main() {
    int a[105], n, pos, val;
    
    cin >> n;
    for(int i = 0; i < n; i++) 
        cin >> a[i];
    
    cin >> pos >> val;   
    
    for(int i = n; i >= pos; i--) 
        a[i] = a[i-1];
    
    a[pos-1] = val;
    n++;
    
    for(int i = 0; i < n; i++) 
        cout << a[i] << " ";
    
    cout << endl;
    return 0;
}