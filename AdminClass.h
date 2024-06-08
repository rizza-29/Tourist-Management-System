class admin:public account {
	int ID;
	static int count;
public:
	admin(string n, string p, string u) :account(n, u, p) {
		ID = count + 1;
	}
	static void inc_count() {
		count++;
	}
	static int get_count() {
		return count;
	}
	void display_complete_for_admin() {
		cout << "PROFILE INFO:" << endl << endl;
		cout << "NAME:" << name << endl;
		cout << "USERNAME:" << username << endl;
		cout << "ID:" << ID << endl;
		cout << "PASSWORD:" << password << endl;
	}
};
int admin::count = 0;
