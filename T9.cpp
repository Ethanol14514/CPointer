#include <string.h>

#include "head.h"
using namespace std;
char* reverse(char* s) {
  char* p = s;
  char* q = s;
  while (*q)
    q++;
  q--; 
  while (q > p)
  {
    char t = *p;
    *p = *q;
    *q = t;
    p++;
    q--;
  }
  return s;
}

void T9() {
    char s[1000] = { 0 };
    char* p = s;
    cout << "Enter a string: ";
    cin >> s;
    printf("The reversed string is: %s\n",reverse(s));
}