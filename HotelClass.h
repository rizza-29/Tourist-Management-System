class hotel :public account {
	string country;
	string city;
	int rating;
	static int count;
public:
	hotel(string n, string p, string c, string ct, string u, int r) :account(n, u, p) {
		country = c;
		city = ct;
		rating = r;
	}
	static int get_count(){
		return count;
	}
	string get_country() {
		return country;
	}
	string get_city() {
		return city;
	}
	int get_rating() {
		return rating;
	}
	void set_rating(int r) {
		rating = r;
	}
	void set_country(string c) {
		country = c;
	}
	void set_city(string ct) {
		city = ct;
	}
	void display_info() {
		cout << "COUNTRY:" << country << endl;
		cout << "CITY:" << city << endl;
		cout << "**";
		cout << "NAME:" << name << " **";
		cout << "\t **Rating=" << rating << "/10**" << endl;

	}
	void display_for_admin() {
		cout << "Name:" << name << endl;
	}
	void display_complete_for_admin() {
		cout << "PROFILE INFO:" << endl << endl;
		cout << "NAME:" << name << endl;
		cout << "USERNAME:" << username << endl;
		cout << "PASSWORD:" << password << endl;
		cout << "COUNTRY" << country << endl;
		cout << "CITY:" << city << endl;
		cout << "RATING:" << rating << endl;
	}
	void display_complete_info() {
		account::display_info();
		cout << "COUNTRY:" << country << endl;
		cout << "CITY:" << city << endl;
		cout << "RATING:" << rating << "/10" << endl;
	}
	static void inc_count() {
		count++;
	}
};
int hotel::count = 0;
