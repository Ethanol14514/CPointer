#include "head.h"
using namespace std;
int countOfChar(char *s, char c){
    int count = 0;
    while (*s) {
        if (*s == c)
            count++;
        s++;
    }
    return count;
}
void T7() {
    char str[1000], c;
    cout << "Enter a string" << endl;
    cin >> str;
    cout << "Specify a character:" << endl;
    cin >> c;
    cout << "There are " << countOfChar(str, c) << endl;
}