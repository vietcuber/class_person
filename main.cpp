#include "header.h"
#include <iostream>

using namespace std;

int main() {
    person A;
    int day, month, year;
    A.enter_name_dob_hometown();
    A.show();
    const char* name = A.get_name();
    const char* hometown = A.get_hometown();
    A.get_dob(day, month, year);
    cout << "Name of the person: " << name << endl;
    cout << "D.O.B (dd/mm/yyyy) of the person: " << day << " " << month << " " << year << endl;
    cout << "Hometown of the person: " << hometown << endl;
    char new_name[] = "Nguyen Viet Em";
    char new_hometown[] = "Ha Noi";
    A.set_name(new_name);
    A.set_hometown(new_hometown);
    day = 0;
    month = 0;
    year = 0;
    A.set_dob(day, month, year);
    A.show();
    return 0;
}