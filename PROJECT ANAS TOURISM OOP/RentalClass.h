class rental :public account {
	int rating;
	int phone_num;
	static int count;
	float price;
public:
	rental(string n, string u, string p, int r, int ph, float pr) : account(n, u, p) {
		phone_num = ph;
		rating = r;
		price = pr;
	}
	int get_rating(){
		return rating;
	}
	void disp_rental(){
		cout << "NAME: " << name << endl;
		cout << "RATING: " << rating << endl;
		cout << "PRICE:" << price << " PKR" << endl;
	}
	void set_rating(int r) {
		rating = r;
	}
	void set_price(float pr) {
		price = pr;
	}
	float get_price() {
		return price;
	}
	void set_phone(int ph) {
		phone_num = ph;
	}
	void display_complete_info() {
		account::display_info();
		cout << "Phone Number:" << phone_num << endl;
		cout << "Rating:" << rating << endl;
		cout << "Price:" << price << " PKR" << endl;
	}
	void display_for_admin() {
		cout << "Name:" << name << endl;
	}
	void display_complete_for_admin() {
		cout << "PROFILE INFO:" << endl << endl;
		cout << "NAME:" << name << endl;
		cout << "USERNAME:" << username << endl;
		cout << "PASSWORD:" << password << endl;
		cout << "PHONE NUMBER:" << phone_num << endl;
		cout << "RATING:" << rating << endl;
		cout << "PRICE:" << price << " PKR" << endl;
	}
	static void inc_count() {
		count++;
	}
	static int get_count() {
		return count;
	}
};
int rental::count = 0;