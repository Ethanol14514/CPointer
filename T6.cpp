#include "head.h"
using namespace std;
int chnum(char *p);
void T6() {
    char s[60];
    int n;
    cin >> s;
    if (*s == '-')
        n = -chnum(s+1);
    else
        n = chnum(s);
    cout << n << endl;
}
int chnum(char *p) {
    int sum = 0;
    while (*p) {
        if (*p >= '0' && *p <= '9') {
            sum = sum * 10 + *p - '0';
        }
        p++;
    }
    return sum;
}
