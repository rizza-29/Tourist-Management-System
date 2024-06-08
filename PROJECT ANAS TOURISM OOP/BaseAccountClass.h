#include<iostream>
#include<string>
using namespace std;
class account {
protected:
	string name;
	string username;
	string password;
	virtual void display_complete_for_admin() = 0;
public:
	account(string n, string u, string p) {
		name = n;
		username = u;
		password = p;
	}
	string get_name() {
		return name;
	}
	string get_username() {
		return username;
	}
	void set_name(string n) {
		name = n;
	}
	void set_password(string p) {
		password = p;
	}
	void set_username(string u) {
		username = u;
	}
	bool verify(string u_name) {
		string pass;
		if (username == u_name) {
			cout << "WELCOME " << name << endl;
			cout << "Please Enter your password:";
			cin >> pass;
			if (pass == password) {
				return true;
			}
			else {
				int j = 3;
				while (password != pass || j > 0) {
					cout << "Incorrect Password!Enter Again(" << j << " tries left):" << endl;
					cin >> pass;
					if (pass == password) {
						return true;
					}
					else {
						j--;
					}
				}
				return false;
			}
		}
		else {
			return false;
		}
	}
	virtual void display_info() {
		cout << "PROFILE INFO:" << endl << endl;
		cout << "NAME:" << name << endl;
		cout << "USERNAME:" << username << endl;
	}
};