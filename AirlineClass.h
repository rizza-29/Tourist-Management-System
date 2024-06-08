using namespace std;
class airline :public account {
	int rating;
	static int count;
public:
	airline(string n, string u, string p, int r) :account(n, u, p) {
		rating = r;
	}
	void set_rating(int r) {
		rating = r;
	}
	static int get_count() {
		return count;
	}
	void display_info() {
		cout << "Name:" << name << endl;
		cout << "Rating:" << rating << endl;
	}
	void display_complete_info() {
		account::display_info();
		cout << "RATING:" << rating << endl;
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
	}
	static void inc_count() {
		count++;
	}
};
int airline::count = 0;
