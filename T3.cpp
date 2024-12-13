#include "head.h"
using namespace std;
void reverseArray(int* arr, int size) {
    for (int i = 0; i < size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
void T3() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int* arr = new int[n];
    int* p = arr;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverseArray(arr, n);
    cout << "Array after reverse is: ";
    for (int i = 0; i < n; i++) {
        cout << *p++ << " ";
    }
    cout << endl;
}