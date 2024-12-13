#include "head.h"
using namespace std;
extern void T1();
extern void T2();
extern void T3();
extern void T4();
extern void T5();
extern void T6();
extern void T7();
extern void T8();
extern void T9();
extern void T10();
extern void T11();
extern void T12();
extern void T13();

bool ostype = false;
int main() {
    if (system("uname -a") == 0)    ostype = true;
start:
    command(ostype,1);
    int choice;
    cout << "Enter choice:" << endl;
    cout << "1. Max number" << endl;
    cout << "2. Number's position" << endl;
    cout << "3. Reverse array" << endl;
    cout << "4. Sort array" << endl;
    cout << "5. Round change" << endl;
    cout << "6. Change" << endl;
    cout << "7. Count" << endl;
    cout << "8. Copy" << endl;
    cout << "9. Reverse a string" << endl;
    cout << "10. City name" << endl;
    cout << "11. Delete number" << endl;
    cout << "12. Connect" << endl;
    cout << "0 for exit." << endl;
    cout << "Enter choice:" << endl;
    cin >> choice;
    switch (choice) {
        case 0:
            goto end;
        case 1:
            T1(); break;
        case 2:
            T2(); break;
        case 3:
            T3(); break;
        case 4:
            T4(); break;
        case 5:
            T5(); break;
        case 6:
            T6(); break;
        case 7:
            T7(); break;
        case 8:
            T8(); break;
        case 9:
            T9(); break;
        case 10:
            T10(); break;
        case 11:
            T11(); break;
        case 12:
            T12(); break;
        case 13:
            T13(); break;
    }
    command(ostype,2);
    goto start;
end:
    cout << "Bye!" << endl;
    return 0;
}