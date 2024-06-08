string input_name() {
	string name;
	cout << "Enter Name:";
	cin >> name;
	return name;
}
string input_username() {
	string u_name;
	cout << "Enter Username:";
	cin >> u_name;
	return u_name;
}
string input_pass() {
	string p1, p2;
	cout << "Enter Password:";
	cin >> p1;
	cout << "Enter Password again to confirm:";
	cin >> p2;
	do {
		if (p1 == p2) {
			cout << endl << "Password confirmed" << endl;
			break;
		}
		else {
			cout << "Password does not match.Enter again:";
			cin >> p2;
		}
	} while (1);
	return p1;
}
string input_email() {
	string email;
	cout << "Enter Email:";
	cin >> email;
	return email;
}int input_phone_num() {
	int num;
	cout << "Enter Phone Number:";
	cin >> num;
	return num;
}
void display_package_purchased() {
	cout << "Package bought successfully" << endl;
	cout << "You can check and add Car Rentals as well as Tour Guide to your Package" << endl;
	cout << "Thank you for your purchase. :)" << endl;
}