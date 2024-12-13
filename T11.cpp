#include <string.h>
#include "head.h"
using namespace std;

void deleteNumber(char *str) {
    int len = strlen(str), pos = 0;
    char *temp = str;
    while (*temp) {
        if (*temp >= '0' && *temp <= '9') {
           for (int i = pos; i < len; i++) {
               str[i] = str[i + 1];
           }
           continue;
        }
        temp++;
        pos++;
    }
}

void T11() {
    char* tmp = new char[1000];
    cout << "Input a string" << endl;
    scanf("%s", tmp);
    char* str = new char[(strlen(tmp) + 1)];//Important: if didn't +1, it will throw an error.
    strcpy(str, tmp);
    delete tmp;
    deleteNumber(str);
    cout << str << endl;
    delete str;
}