#include "head.h"
using namespace std;
int* globalArray = NULL;
int* stringToInt(char *str) {
    int count = 0;
    int* num = new int[count + 1];
    int result = 0;
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
          result = result * 10 + *str - '0';
          if (!(*(str + 1) >= '0' && *(str + 1) <= '9')) {
            count++;
            num = (int*)realloc(num, count * sizeof(int) + sizeof(num));
            num[count - 1] = result;
            result = 0;
          }
        }
          str++;
        }
    globalArray = new int[count];
    for (int i = 0; i < count; i++) {
        globalArray[i] = num[i];
    }
    globalArray[count] = 0;
    delete[] num;
    return globalArray;
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