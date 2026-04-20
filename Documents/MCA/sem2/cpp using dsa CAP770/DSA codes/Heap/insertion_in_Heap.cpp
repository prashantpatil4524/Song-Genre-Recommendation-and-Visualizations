#include <iostream>
using namespace std;

int n = 0; // Global n to track heap size

void Heap(int ITEM, int a[]) {
    n = n + 1;       // Increase heap size
    a[n] = ITEM;     // Place item at end
    int ptr = n;

    while (ptr > 1) {
        int PAR = ptr / 2;

        if (ITEM <= a[PAR]) {
            // Item is in correct position
            return;
        }
        // Swap child with parent
        a[ptr] = a[PAR];
        a[PAR] = ITEM;
        ptr = PAR;   // Move up
    }
}

void display(int a[]) {
    cout << "Tree: ";
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void deletion(int a[]) {
    if (n == 0) {
        cout << "Heap is empty!" << endl;
        return;
    }
    a[1] = a[n]; // Move last element to root
    n = n - 1;   // Decrease heap size
    int ptr = 1;

    while (true) {
        int left = 2 * ptr;
        int right = 2 * ptr + 1;
        int largest = ptr;

        if (left <= n && a[left] > a[largest]) {
            largest = left;
        }
        if (right <= n && a[right] > a[largest]) {
            largest = right;
        }
        if (largest == ptr) {
            break; // Heap property is satisfied
        }
        // Swap parent with largest child
        swap(a[ptr], a[largest]);
        ptr = largest; // Move down
    }
}

int main() {
    int arr[7];
    int in;
    cout << "Enter number of elements: ";
    cin >> in;

    int val;
    for (int i = 0; i < in; i++) {
        cin >> val;
        Heap(val, arr);
    }

    display(arr);
    return 0;
}