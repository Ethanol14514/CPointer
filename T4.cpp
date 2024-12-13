#include "head.h"
using namespace std;
void sort(int *a) {
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

void T4() {
    int a[10];
    int* p = a;
    cout << "Enter 10 integers" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    sort(a);
    cout << "Sorted array is" << endl;
    for (int i = 0; i < 10; i++) {
        cout << *p++ << ' ';
    }
}