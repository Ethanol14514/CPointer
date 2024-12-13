#include "head.h"
using namespace std;
int* stringToInt(char *str) {
    int count = 0;
    int len = 0;
    int* num = new int[count+1];
    int result = 0;
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
            result = result * 10 + *str - '0';
            if (!(*(str + 1) >= '0' && *(str + 1) <= '9')) {
                int* temp = new int[count+1];
                for (int i = 0; (i < count)&&(count > 0); i++) {
                    temp[i] = num[i];
                }
                temp[count] = result;
                result = 0;
                delete num;
                count++;
                int* num = new int[count+1];
                for (int i = 0; i < count; i++) {
                    num[i] = temp[i];
                }
                delete[] temp;
            }
        }
        str++;
    }
    num[count] = 0;
    return num;
}
void T13() {
    char str[1000] = {0};
    int num = 1;
    cout << "Input string:" << endl;
    scanf("%s", str);
    int* result = stringToInt(str);
    while (*result) {
        cout << *result << endl;
        result++;
    }
}