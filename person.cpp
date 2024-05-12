#include "header.h"
#include <iostream>
#include <cstring>

using namespace std;

//Funtion definitions

void person::enter_name_dob_hometown() {
	cout << "Enter the name of the person: ";
	cin.getline(name, 50);
	cout << "Enter D.O.B (dd/mm/yyyy) of the person:" << endl;
	cin >> day >> month >> year;
	cout << "Enter the hometown of the person: ";
	cin.ignore();
	cin.getline(hometown, 100);
};
void person::show() {
	cout << "Name: " << name << endl;
	cout << "D.O.B (dd/mm/yyyy): " << day << "/" << month << "/" << year << endl;
	cout << "Hometown: " << hometown << endl;
}
char* person::get_name() {
	return name;
}
void person::set_name(char* new_name) {
	strcpy_s(name, new_name);
}
char* person::get_hometown() {
	return hometown;
}
void person::set_hometown(char* new_hometown) {
	strcpy_s(hometown, new_hometown);
}
void person::get_dob(int& get_day, int& get_month, int& get_year) {
	get_day = day;
	get_month = month;
	get_year = year;
}
void person::set_dob(int set_day, int set_month, int set_year) {
	day = set_day;
	month = set_month;
	year = set_year;
}

