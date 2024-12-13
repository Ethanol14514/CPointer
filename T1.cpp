#include "head.h"
using namespace std;
int* max(int *a, int *b) {
    return *a > *b ? a : b;
}
void T1() {
    int a, b;
    cout << "Enter 2 numbers" << endl;
    cin >> a >> b;
    cout << "The maxium number is: " << *(max(&a, &b)) << endl;
}