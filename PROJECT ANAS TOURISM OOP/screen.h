using namespace std;
int main_screen() {
	int opt;
	cout << "0-End Program" << endl;
	cout << "1-Admin" << endl;
	cout << "2-Customer" << endl;
	cout << "3-Airline" << endl;
	cout << "4-Tour Guide" << endl;
	cout << "5-Hotel" << endl;
	cout << "6-Car Rental" << endl;
	cout << "Please Enter choice number to proceed:";
	cin >> opt;
	return opt;
}
int second_screen() {
	int opt2;
	cout << "0-Go Back" << endl;
	cout << "1-Sign Up" << endl;
	cout << "2-Sign In" << endl;
	cout << "Enter option number to proceed:";
	cin >> opt2;
	return opt2;
}
int admin_screen() {
	int opt3;
	cout << "0-Go Back" << endl;
	cout << "1-Customer Info" << endl;
	cout << "2-Airline Info" << endl;
	cout << "3-Tour Guide Info" << endl;
	cout << "4-Hotel Info" << endl;
	cout << "5-Car Rental Info" << endl;
	cout << "6-Update Profile" << endl;
	cout << "7-Display Info" << endl;
	cout << "Please Enter choice number to proceed:";
	cin >> opt3;
	return opt3;
}
int customer_screen() {
	int opt3;
	cout << "0-Go Back" << endl;
	cout << "1-Check Packages" << endl;
	cout << "2-Check Car Rentals" << endl;
	cout << "3-Check Tour Guides" << endl;
	cout << "4-Check Profile" << endl;
	cout << "5-Update Profile" << endl;
	cout << "6-Display Bought Packages" << endl;
	cout << "Please Enter choice number to proceed:";
	cin >> opt3;
	return opt3;
}
int customer_package_screen() {
	int opt4;
	cout << "Which Country would you like to check packages of?" << endl;
	cout << "0-Go Back" << endl;
	cout << "1-UAE" << endl;
	cout << "2-Turkey" << endl;
	cout << "3-Thailand" << endl;
	cout << "Enter option number to proceed:";
	cin >> opt4;
	return opt4;
}
int options_screen(){
	int opt6;
	cout<<"DO YOU WANT TO AVAIL ANY LISTED SERVICES: "<<endl;
	cout<<"0-GO BACK"<<endl;
	cout<<"1-ADD RENTAL "<<endl;
	cout<<"2-ADD TOUR GUIDE"<<endl;
	cout << "Enter option number to proceed:";
	cin >> opt6;
	return opt6;
}
int update_screen(){
	int opt8;
	cout << "WHICH DATA DO YOU WANT TO UPDATE: " << endl;
	cout << "0-GO BACK" << endl;
	cout << "1-NAME" << endl;
	cout << "2-EMAIL" << endl;
	cout << "3-PASSWORD" << endl;
	cout << "4-CONTACT NUMBER" << endl;
	cout << "5-USERNAME" << endl;
	cout << "Enter option number to proceed:";
	cin >> opt8;
	return opt8;
}
int airline_screen() {
	int opt3;
	cout << "0-Go Back" << endl;
	cout << "1-Check Purchased Flights" << endl;
	cout << "2-Update Profile" << endl;
	cout << "3-Display Profile Information" << endl;
	cout << "Enter option number to proceed:";
	cin >> opt3;
	return opt3;
}
int airline_update_screen() {
	int opt4;
	cout << "Which Information do you want to update?" << endl;
	cout << "0-Go Back" << endl;
	cout << "1-Name" << endl;
	cout << "2-Password" << endl;
	cout << "3-Username" << endl;
	cout << "4-Rating" << endl;
	cout << "Enter option number to proceed:";
	cin >> opt4;
	return opt4;
}
int guide_and_hotel_screen() {
	int opt3;
	cout << "0-Go Back" << endl;
	cout << "1-Check Booked Customers" << endl;
	cout << "2-Update Profile" << endl;
	cout << "3-Display Profile Information" << endl;
	cout << "Enter option number to proceed:";
	cin >> opt3;
	return opt3;
}
int guide_and_rental_update_screen() {
	int opt4;
	cout << "Which Information do you want to update?" << endl;
	cout << "0-Go Back" << endl;
	cout << "1-Name" << endl;
	cout << "2-Password" << endl;
	cout << "3-Username" << endl;
	cout << "4-Rating" << endl;
	cout << "5-Phone Number" << endl;
	cout << "6-Price" << endl;
	cout << "Enter option number to proceed:";
	cin >> opt4;
	return opt4;
}
int admin_update_screen() {
	int opt4;
	cout << "Which Information do you want to update?" << endl;
	cout << "0-Go Back" << endl;
	cout << "1-Name" << endl;
	cout << "2-Password" << endl;
	cout << "3-Username" << endl;
	cout << "Enter option number to proceed:";
	cin >> opt4;
	return opt4;
}
int change_hotel_screen(string c) {
	int opt, opt9;
	cout << "Would you like to change any of your hotels?" << endl;
	cout << "0-No" << endl;
	cout << "1-Yes" << endl;
	cout << "Enter option number to proceed:";
	cin >> opt;
	if (opt == 0) {
		return 0;
	}
	if (opt == 1) {
		if (c == "UAE") {
			cout << "Which City would you like to change the hotel of?" << endl;
			cout << "0-Changes Finished" << endl;
			cout << "1-DUBAI" << endl;
			cout << "2-ABU DHABI" << endl;
			cout << "3-SHARJAH" << endl;
			cout << "Enter option number to proceed:";
			cin >> opt9;
			return opt9;
		}
		if (c == "TURKEY") {
			cout << "Which City would you like to change the hotel of?" << endl;
			cout << "0-Changes Finished" << endl;
			cout << "1-ISTANBUL" << endl;
			cout << "2-ANTALYA" << endl;
			cout << "3-ANKARA" << endl;
			cout << "Enter option number to proceed:";
			cin >> opt9;
			return opt9;
		}
		if (c == "THAILAND") {
			cout << "Which City would you like to change the hotel of?" << endl;
			cout << "0-Changes Finished" << endl;
			cout << "1-BANGKOK" << endl;
			cout << "2-PHUKET" << endl;
			cout << "3-KO PHI PHI ISLAND" << endl;
			cout << "Enter option number to proceed:";
			cin >> opt9;
			return opt9;
		}
	}
}
int hotel_selection() {
	int opt10;
	cout << "Do you want to select this hotel?" << endl;
	cout << "0-NO (SHOW NEXT)" << endl;
	cout << "1-YES" << endl;
	cout << "Enter option number to proceed:";
	cin >> opt10;
	return opt10;
}
int hotel_update_screen() {
	int opt4;
	cout << "Which Information do you want to update?" << endl;
	cout << "0-Go Back" << endl;
	cout << "1-Name" << endl;
	cout << "2-Password" << endl;
	cout << "3-Username" << endl;
	cout << "4-Rating" << endl;
	cout << "5-Country" << endl;
	cout << "6-City" << endl;
	cout << "Enter option number to proceed:";
	cin >> opt4;
	return opt4;
}