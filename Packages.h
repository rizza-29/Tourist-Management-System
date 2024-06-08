int display_UAE() {
	int opt;
	cout << "We have the following packages available for UAE." << endl << endl;;
	cout << "Three cities:**DUBAI** \t **ABU DHABI** \t **SHARJAH**" << endl << endl;
	cout<<"**PACKAGE 1-PREMIUM**"<<endl;
	cout<<"       HOTELS: "<<endl;
	cout<<"       **BURJ UL ARAB - DUBAI**\n"<<endl;
	cout<<"       **CONRAD EITIHAD TOWERS - ABU DHABI**"<<endl;
	cout<<"       **OCCIDENTAL SHARJAH GRAND - SHARJAH**"<<endl;
	cout<<"       STAY DURATION: "<<endl;
	cout<<"       **5 DAYS STAY IN DUBAI**"<<endl;
	cout<<"       **5 DAYS STAY IN ABU DHABI**"<<endl;
	cout<<"       **4 DAYS STAY IN SHARJAH**"<<endl;
	cout << "       PACKAGE COST: PKR 400,000" << endl << endl;
	cout<<"**PACKAGE 2-GOLD**"<<endl;
	cout<<"       HOTELS:"<<endl;
	cout<<"       **CITYMAX HOTEL - DUBAI**\n"<<endl;
	cout<<"       **SOUTHERN SUN - ABU DHABI**"<<endl;
	cout<<"       **VERONA RESORT - SHARJAH**"<<endl;
	cout<<"       STAY DURATION: "<<endl;
	cout<<"       **3 DAYS STAY IN DUBAI**"<<endl;
	cout<<"       **3 DAYS STAY IN ABU DHABI**"<<endl;
	cout<<"       **3 DAYS STAY IN SHARJAH**"<<endl;
	cout << "       PACKAGE COST: PKR 200,000" << endl << endl;
	cout << "Would you like to buy a package?" << endl;
	cout << "1-Yes" << endl;
	cout << "2-No" << endl;
	cout << "Enter Option Number to proceed:";
	cin >> opt;
	if (opt == 1) {
		int opt2;
		cout << endl <<  "Which package do you want to buy?" << endl;
		cout << "0-Go back" << endl;
		cout << "1-**PREMIUM**" << endl;
		cout << "2-**GOLD**" << endl;
		cout << "Enter Option Number to proceed:";
		cin >> opt2;
		if (opt2 == 0) {
			return 0;
		}
		if (opt2 == 1) {
			return 1;
		}
		if (opt2 == 2) {
			return 2;
		}
	}
	if (opt == 2) {
		return 0;
	}
}
int display_Turkey() {
	int opt;
	    cout << endl;
    cout << "We have the following packages available for Turkey." << endl<<endl;
    cout << "Three cities:**ISTANBUL**, **ANKARA**,**ANTALYA**" << endl<<endl;
    cout << "**PACKAGE 1-PREMIUM**" << endl;
    cout << "       HOTELS: " << endl;
    cout << "       **CVK PARK BOSPHORUS HOTEL-ISTANBUL**" << endl;
    cout << "       **THE WINGS HOTEL         - ANKARA**" << endl;
    cout << "       **MAI ANCI HOTEL          - ANTALYA**" << endl;
    cout << "       STAY DURATION: " << endl;
    cout << "       **4 DAYS STAY IN ISTANBUL**" << endl;
    cout << "       **4 DAYS STAY IN ANKARA**" << endl;
    cout << "       **4 DAYS STAY IN ANTALYA**" << endl;
    cout << "      PACKAGE COST: PKR 500,000" << endl;
    cout << "**PACKAGE 2-GOLD**" << endl;
    cout << "       HOTELS:" << endl;
    cout << "       **THE GREEN PARK - ISTANBUL**" << endl;
    cout << "       **RADDISON BLUE - ANKARA**" << endl;
    cout << "       **ELIPS ROYAL HOTEL - ANTALYA**" << endl;
    cout << "       STAY DURATION: " << endl;
    cout << "       **3 DAYS STAY IN ISTANBUL**" << endl;
    cout << "       **2 DAYS STAY IN ANKARA**" << endl;
    cout << "       **3 DAYS STAY IN ANTALYA**" << endl;
    cout << "      PACKAGE COST: PKR 300,000" << endl<<endl;
	cout << "Would you like to buy a package?" << endl;
	cout << "1-Yes" << endl;
	cout << "2-No" << endl;
	cout << "Enter Option Number to proceed:";
	cin >> opt;
	if (opt == 1) {
		int opt2;
		cout << endl <<  "Which package do you want to buy?" << endl;
		cout << "0-Go back" << endl;
		cout << "1-**PREMIUM**" << endl;
		cout << "2-**GOLD**" << endl;
		cout << "Enter Option Number to proceed:";
		cin >> opt2;
		if (opt2 == 0) {
			return 0;
		}
		if (opt2 == 1) {
			return 1;
		}
		if (opt2 == 2) {
			return 2;
		}
	}
	if (opt == 2) {
		return 0;
	}
}
int display_Thailand() {
	int opt;
  cout << "We have the following packages available for Thailand." << endl;
  cout << "Three cities:**BANGKOK**, **PHUKET**,**KO PHI PHI ISLAND**" << endl;
  cout << "**PACKAGE 1-PREMIUM**" << endl;
  cout << "       HOTELS: " << endl;
  cout << "       **MARRIOT HOTEL-BANGKOK**" << endl;
  cout << "       **VILLA ZOLITUDE- PHUKET**" << endl;
  cout << "       **SAii Phi Phi Island Village - KO PHI PHI ISLAND**" << endl;
  cout << "       STAY DURATION: " << endl;
  cout << "       **4 DAYS STAY IN BANGKOK**" << endl;
  cout << "       **4 DAYS STAY IN PHUKET**" << endl;
  cout << "       **4 DAYS STAY IN KO PHI PHI**" << endl;
  cout << "\n      PACKAGE COST: PKR 450,000" << endl;
  cout << "**PACKAGE 2-GOLD**" << endl;
  cout << "       HOTELS:" << endl;
  cout << "       **KEPLER RESIDENCE-BANGKOK**" << endl;
  cout << "       **NOVOTEL - PHUKET**" << endl;
  cout << "       **HIP Seaview Resort - KO PHI PHI ISLAND**" << endl;
  cout << "       STAY DURATION: " << endl;
  cout << "       **3 DAYS STAY IN BANGKOK**" << endl;
  cout << "       **3 DAYS STAY IN PHUKET**" << endl;
  cout << "       **3 DAYS STAY IN PHI PHI**" << endl;
  cout << "\n      PACKAGE COST: PKR 300,000" << endl;
  cout << "Would you like to buy a package?" << endl;
	cout << "1-Yes" << endl;
	cout << "2-No" << endl;
	cout << "Enter Option Number to proceed:";
	cin >> opt;
	if (opt == 1) {
		int opt2;
		cout << endl <<  "Which package do you want to buy?" << endl;
		cout << "0-Go back" << endl;
		cout << "1-**PREMIUM**" << endl;
		cout << "2-**GOLD**" << endl;
		cout << "Enter Option Number to proceed:";
		cin >> opt2;
		if (opt2 == 0) {
			return 0;
		}
		if (opt2 == 1) {
			return 1;
		}
		if (opt2 == 2) {
			return 2;
		}
	}
	if (opt == 2) {
		return 0;
	}
}

