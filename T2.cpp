#include "head.h"
using namespace std;
int position(int *arr, int n) {
    for (int i = 0; i < 15; i++) {
        if (arr[i] == n)    return ++i;
    }
    return -1;
}
void T2() {
    int arr[15];
    cout << "Enter 15 ordered numbers: ";
    for (int i = 0; i < 15; i++) {
        cin >> arr[i];
    }
    int n;
    cout << "Enter number to be searched: ";
    cin >> n;
    int pos = position(arr, n);
    if (pos == -1)
        cout << "Number not found";
    else
        cout << "Number found at position " << pos << endl;
}