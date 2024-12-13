#include <cstdlib>
void command(bool type, int arg) {
    switch (arg) {
        case 1:
            if (type)   std::system("clear");
            else std::system("cls");
        break;
        case 2:
            std::system("pause"); break;
    }
}