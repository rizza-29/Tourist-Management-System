class customer :public package, public account {
	string email;
	int phone_num;
	static int count;
public:
	customer(string n, string p, string e, int ph, string u) :package(), account(n, u, p) {
		email = e;
		phone_num = ph;
	}
	int get_phone_num() {
		return phone_num;
	}
	void disp_profile(){
		account::display_info();
		cout << "EMAIL: " << email << endl;
		cout << "PHONE NUMBER: " << phone_num << endl;
	}
	void set_email(string e){
		email = e;
	}
	void set_num(int n){
    phone_num=n;
	}
	string get_email() {
		return email;
	}
	void display_for_admin() {
		cout << "Name:" << name << endl;
	}
	void display_complete_for_admin() {
		cout << "PROFILE INFO:" << endl << endl;
		cout << "NAME:" << name << endl;
		cout << "USERNAME:" << username << endl;
		cout << "PASSWORD:" << password << endl;
		cout << "EMAIL: " << email << endl;
		cout << "PHONE NUMBER: " << phone_num << endl;
	}
	static void inc_count() {
		count++;
	}
	static int get_count() {
		return count;
	}
};
int customer::count = 0;