class guide :public account {
	int rating;
	int phone_num;
	static int guide_count;
	float price;
public:
	guide(string n, string u, string p, int r, int ph, float pr) : account(n, u, p) {
		rating = r;
		phone_num = ph;
		price = pr;
	}
	int get_rating(){
		return rating;
	}
	float get_price() {
		return price;
	}
	void set_price(float pr) {
		price = pr;
	}
	void disp_guide(){
		cout << "NAME: " << name << endl;
		cout << "RATING: " << rating << endl;
		cout << "PRICE:" << price << " PKR" << endl;
	}
	void set_rating(int r) {
		rating = r;
	}
	void set_phone(int ph) {
		phone_num = ph;
	}
	void display_for_admin() {
		cout << "Name:" << name << endl;
	}
	void display_complete_for_admin() {
		cout << "PROFILE INFO:" << endl << endl;
		cout << "NAME:" << name << endl;
		cout << "USERNAME:" << username << endl;
		cout << "PASSWORD:" << password << endl;
		cout << "RATING:" << rating << endl;
		cout << "PHONE NUMBER:" << phone_num << endl;
		cout << "PRICE:" << price << " PKR" << endl;
	}
    static int get_gcount(){
	    return guide_count;
    }
	void display_complete_info() {
		account::display_info();
		cout << "PHONE NUMBER:" << phone_num << endl;
		cout << "RATING:" << rating << endl;
		cout << "PRICE:" << price << " PKR" << endl;
	}
	static void inc_count() {
		guide_count++;
	}
};
int guide::guide_count=0;
