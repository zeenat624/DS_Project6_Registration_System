#include <iostream>
#include "Registrar.h"
#include "SectionManager.h"

using namespace std;

int main() {
    cout << "  Welcome to Student Course Registration System " << endl;

    Registrar registrar;


    registrar.studentMenu();

    cout << "Thank you for using the registration system!" << endl;
    return 0;
}
