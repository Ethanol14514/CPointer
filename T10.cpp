#include "head.h"
#include <cstring>
using namespace std;
void T10() {
    int n;
    cout << "How many? " << endl;
    cin >> n;
    char (*str)[20] = new char[n][20];
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(str[i], str[j]) > 0) {
                char temp[20];
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%s ", str[i]);
    }
}