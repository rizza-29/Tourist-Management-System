#include <iostream>
using namespace std;
int birth_year() {
	int year;
	bool ver = true;
	cout << "Birth Year should be between or equal to 1920 and 2020" << endl;
	cout << "Enter your Birth Year:";
	while (ver == true) {
		cin >> year;
		if (year > 2020 || year < 1920) {
			cout << "INVALID!Enter Again:";
		}
		else
			ver = false;
	}
	return year;
}
int birth_month() {
	int month;
	bool ver = true;
	cout << "Birth Month should be between or equal to 1 and 12" << endl;
	cout << "Enter your Birth Month:";
	while (ver == true) {
		cin >> month;
		if (month > 12 || month < 1) {
			cout << "INVALID!Enter Again:";
		}
		else
			ver = false;
	}
	return month;
}
int birth_day(int by, int bm) {
	int date;
	bool ver = true;
	if (bm == 2) {
		if (by % 4 == 0) {
			cout << "Birth date should be between or equal to 1 and 29" << endl;
			cout << "Enter your Birth Date:";
			while (ver == true) {
				cin >> date;
				if (date > 29 || date < 1) {
					cout << "INVALID!Enter Again:";
				}
				else
					ver = false;
			}
		}
		else {
			cout << "Birth date should be between or equal to 1 and 28" << endl;
			cout << "Enter your Birth Date:";
			while (ver == true) {
				cin >> date;
				if (date > 28 || date < 1) {
					cout << "INVALID!Enter Again:";
				}
				else
					ver = false;
			}
		}
	}
	else if (bm >= 1 && bm <= 7) {
		if (bm % 2 == 0) {
			cout << "Birth date should be between or equal to 1 and 30" << endl;
			cout << "Enter your Birth Date:";
			while (ver == true) {
				cin >> date;
				if (date > 30 || date < 1) {
					cout << "INVALID!Enter Again:";
				}
				else
					ver = false;
			}
		}
		else {
			cout << "Birth date should be between or equal to 1 and 31" << endl;
			cout << "Enter your Birth Date:";
			while (ver == true) {
				cin >> date;
				if (date > 31 || date < 1) {
					cout << "INVALID!Enter Again:";
				}
				else
					ver = false;
			}
		}
	}
	else if (bm >= 8 && bm <= 12) {
		if (bm % 2 == 0) {
			cout << "Birth date should be between or equal to 1 and 31" << endl;
			cout << "Enter your Birth Date:";
			while (ver == true) {
				cin >> date;
				if (date > 31 || date < 1) {
					cout << "INVALID!Enter Again:";
				}
				else
					ver = false;
			}
		}
		else {
			cout << "Birth date should be between or equal to 1 and 30" << endl;
			cout << "Enter your Birth Date:";
			while (ver == true) {
				cin >> date;
				if (date > 30 || date < 1) {
					cout << "INVALID!Enter Again:";
				}
				else
					ver = false;
			}
		}
	}
	return date;
}
