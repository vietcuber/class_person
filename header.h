#pragma once

class person {
private:
	char name[50];
	int day, month, year;
	char hometown[100];
public:
	void enter_name_dob_hometown();
	void show();
	char* get_name();
	void set_name(char* name);
	char* get_hometown();
	void set_hometown(char* hometown);
	void get_dob(int& day, int& month, int& year);
	void set_dob(int day, int month, int year);
};