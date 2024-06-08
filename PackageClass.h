#include<string>
using namespace std;
class package {
protected:
	string country;
	string city[3];
	string hotel[3];
	int stay[3];
	string guide;
	string driver;
	string date[4];
	string time[4];
	string type;
	string plane;
	bool purchased;
	bool add_driver;
	bool add_guide;
	friend class customer;
	float price;
public:
	package() {
		purchased = false;
		add_driver = false;
		add_guide = false;
		price = 0;
	}
	void set_country(string c) {
		country = c;
	}
	void set_city1(string c1) {
		city[0] = c1;
	}
	void set_city2(string c2) {
		city[1] = c2;
	}
	void set_city3(string c3) {
		city[2] = c3;
	}
	void set_airline(string a) {
		plane = a;
	}
	void set_hotel1(string h1) {
		hotel[0] = h1;
	}
	void set_hotel2(string h2) {
		hotel[1] = h2;
	}
	void set_hotel3(string h3) {
		hotel[2] = h3;
	}
	void set_stay1(int s1) {
		stay[0] = s1;
	}
	void set_stay2(int s2) {
		stay[1] = s2;
	}
	void set_stay3(int s3) {
		stay[2] = s3;
	}
	void set_guide(string g) {
		guide = g;
	}
	void set_driver(string d) {
		driver = d;
	}
	void set_price(float pr) {
		price = pr;
	}
	float get_price() {
		return price;
	}
	void calc_total_price(float pr) {
		price = price + pr;
	}
	string get_driver() {
		return driver;
	}
	string get_guide() {
		return guide;
	}
	string get_plane() {
		return plane;
	}
	void set_flight_date1(string d1) {
		date[0] = d1;
	}
	void set_flight_date2(string d2) {
		date[1] = d2;
	}
	void set_flight_date3(string d3) {
		date[2] = d3;
	}
	void set_flight_date4(string d4) {
		date[3] = d4;
	}
	void set_flight_time1(string t1) {
		time[0] = t1;
	}
	void set_flight_time2(string t2) {
		time[1] = t2;
	}
	void set_flight_time3(string t3) {
		time[2] = t3;
	}
	void set_flight_time4(string t4) {
		time[3] = t4;
	}
	void set_type(string t) {
		type = t;
	}
	void package_purchased() {
		purchased = true;
	}
	void driver_added() {
		add_driver = true;
	}
	void guide_added() {
		add_guide = true;
	}
	string get_flight_date(int i) {
		return date[i];
	}
	string get_flight_time(int i) {
		return time[i];
	}
	int get_stay(int i) {
		return stay[i];
	}
	string get_country() {
		return country;
	}
	string get_city(int i) {
		return city[i];
	}
	string get_hotel(int i) {
		return hotel[i];
	}
	void display_package() {
		if (purchased == true) {
			cout << endl << "\t\t\t**YOUR PACKAGE**" << endl;
			cout << "\t**COUNTRY:" << country << "**" << endl;
			for (int i = 0;i < 3;i++) {
				cout << endl << "\t**CITY:" << city[i] << "**" << endl;
				cout << "\t**Airline:" << plane << "**" << endl;
				cout << "\t**Date of Departure to the City:" << date[i] << "**" << endl;
				cout << "\t**Time of Departure to the City:" << time[i] << "**" << endl;
				cout << "\t**HOTEL:" << hotel[i] << "**" << endl;
				cout << "\t**Number of days of stay:" << stay[i] << "**" << endl;
			}
			cout << endl << "Date of return to Homeland:" << date[3] << endl;
			cout << "Time of return to Homeland:" << time[3] << endl;
			if (add_guide == true) {
				cout << endl << "\t**Tour Guide:" << guide << "**" << endl;
			}
			else {
				cout << endl << "\t**Tour Guide:NOT ADDED IN PACKAGE**" << endl;
			}
			if (add_driver == true) {
				cout << "\t**Car Rental Driver:" << driver << "**" << endl;
			}
			else {
				cout << endl << "\t**Car Rental Driver:NOT ADDED IN PACKAGE**" << endl;
			}
		}
	}
};
