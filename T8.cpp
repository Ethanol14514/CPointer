#include "head.h"
using namespace std;
void copyString(char *src, char *dst) {
    while (*src) {
        *dst++ = *src++;
    }
}
void T8() {
    char str[1000] = {0}, dst[1000] = {0};
    cout << "Enter a string: ";
    cin >> str;
    copyString(str, dst);
    cout << endl;
    cout << "The copied string is: " << dst << endl;
}