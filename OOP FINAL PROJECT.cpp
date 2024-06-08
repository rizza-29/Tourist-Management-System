#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<string.h>
#include <ctime>
#include<sstream>
#include"BaseAccountClass.h";
#include"PackageClass.h";
#include"screen.h";
#include"AdminClass.h";
#include"CustomerClass.h";
#include"AirlineClass.h";
#include"GuideClass.h";
#include"HotelClass.h";
#include"RentalClass.h";
#include"SignUpFunctions.h";
#include"Packages.h";
#include"DateAndTimeFunction.h";
using namespace std;
int main() {
	bool flag;
	long int num;
	float price;
	string email, pass, u_name, name, temp, country, city;
	admin* adm[10];
	customer* cust[20];
	rental* rent[10];
	guide* tour_guide[10];
	airline* plane[10];
	hotel* h_info[30];
    adm[admin::get_count()] = new admin("Murtaza Ansari", "murtaza123","murtaza");
	admin::inc_count();
	adm[admin::get_count()] = new admin("Anas Baig", "anas123","anas");
	admin::inc_count();
	adm[admin::get_count()] = new admin("Ali Raza", "ali123","ali");
	admin::inc_count();
	rent[rental::get_count()]=new rental("USMAN SHINWARI","usman", "usman123", 9,628461,20000);
	rental::inc_count();
	rent[rental::get_count()]=new rental("JAVAID MIANDAD","javaid", "javaid123", 10,724191,22000);
	rental::inc_count();
	rent[rental::get_count()] = new rental("HAMZA KHAN", "hamza", "hamza123", 8, 7612819, 17000);
	rental::inc_count();
	tour_guide[guide::get_gcount()] = new guide("ANEEQ ANJUM", "aneeq", "aneeq456", 7, 368237, 30000);
	guide::inc_count();
	tour_guide[guide::get_gcount()] = new guide("JACK THE RIPPER", "jack", "jack789", 10, 3832839, 34000);
	guide::inc_count();
	tour_guide[guide::get_gcount()] = new guide("MARK KENT", "mark", "mark159", 9, 623868, 29000);
	guide::inc_count();
	plane[airline::get_count()] = new airline("EMIRATES AIRLINE", "emirates", "emirates123", 9);
	airline::inc_count();
	plane[airline::get_count()] = new airline("QATAR AIRLINE", "qatar", "qatar123", 9);
	airline::inc_count();
	plane[airline::get_count()] = new airline("PAKISTAN INTERNATIONAL AIRLINE", "pia", "pia123", 9);
	airline::inc_count();
	h_info[hotel::get_count()] = new hotel("BURJ AL ARAB", "burj123", "UAE", "DUBAI", "burj", 10);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("CONRAD EITIHAD TOWERS", "conrad123", "UAE", "ABU DHABI", "conrad", 9);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("OCCIDENTAL SHARJAH GRAND", "occidental123", "UAE", "SHARJAH", "occidental", 10);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("CITYMAX HOTEL", "citymax123", "UAE", "DUBAI", "citymax", 10);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("SOUTHERN SUN", "southern123", "UAE", "ABU DHABI", "southern", 9);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("VERONA RESORT", "verona123", "UAE", "SHARJAH", "verona", 10);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("CVK PARK BOSPHORUS HOTEL", "cvk123", "TURKEY", "ISTANBUL", "cvk", 10);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("THE WINGS HOTEL", "wings123", "TURKEY", "ANKARA", "wings", 10);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("MAI ANCI HOTEL", "mai123", "TURKEY", "ANTALYA", "mai", 9);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("THE GREEN PARK", "green123", "TURKEY", "ISTANBUL", "green", 8);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("RADDISON BLUE", "raddison123", "TURKEY", "ANKARA", "raddison", 7);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("ELIPS ROYAL HOTEL", "elips123", "TURKEY", "ANTALYA", "elips", 7);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("MARRIOT HOTEL", "marriot123", "THAILAND", "BANGKOK", "marriot", 10);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("VILLA ZOLITUDE", "villa123", "THAILAND", "PHUKET", "villa", 9);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("SAII PHI PHI ISLAND VILLAGE", "saii123", "THAILAND", "KO PHI PHI ISLAND", "saii", 9);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("KEPLER RESIDENCE", "kepler123", "THAILAND", "BANGKOK", "kepler", 7);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("NOVOTEL", "novotel123", "THAILAND", "PHUKET", "novotel", 7);
	hotel::inc_count();
	h_info[hotel::get_count()] = new hotel("HIP SEAVIEW RESORT", "hip123", "THAILAND", "KO PHI PHI ISLAND", "hip", 8);
	hotel::inc_count();
	int opt, opt2, opt3, opt4, opt5, opt6, opt7, opt8, opt9, opt10, i, j, k, m, rating;
	cout << "\t\t\tWELCOME TO ANAS TOURISM" << endl;
	do {
		opt = main_screen();
		system("cls");
			if (opt == 1) {
				do {
					opt2 = second_screen();
					system("cls");
					if (opt2 == 1) {
						if (admin::get_count() < 10) {
							cout << "Enter Username of existing Admin to proceed:";
							cin >> u_name;
							for (i = 0;i < admin::get_count();i++) {
								flag = adm[i]->verify(u_name);
								if (flag == true) {
									break;
								}
							}
							if (flag == false) {
								cout << "Existing Admin Sign In Attempt Failed!" << endl;
							}
							if (flag == true) {
								name = input_name();
								u_name = input_username();
								for (m = 0;m < admin::get_count();m++) {
									if (adm[m]->get_username() == u_name) {
										cout << "USERNAME is already in use.Try Again." << endl;
										u_name = input_username();
										m--;
									}
								}
								pass = input_pass();
								adm[admin::get_count()] = new admin(name, pass, u_name);
								admin::inc_count();
							}
						}
						else {
							cout << "Admin Sign Up is LOCKED!Admin Limit Reached!" << endl;
						}
					}
					if (opt2 == 2) {
						u_name = input_username();
						for (i = 0;i < admin::get_count();i++) {
							flag = adm[i]->verify(u_name);
							if (flag == true) {
								break;
							}
						}
						if (flag == false) {
							cout << "Admin Sign In Attempt Failed!" << endl;
						}
						if (flag == true) {
							do {
								opt3 = admin_screen();
								system("cls");
								if (opt3 == 1) {
									do {
										cout << "TOTAL NUMBER OF CUSTOMERS:" << customer::get_count() << endl << endl;
										cout << "0-Go Back" << endl;
										for (j = 0;j < customer::get_count();j++) {
											cout << j + 1 << "-";
											cust[j]->display_for_admin();
										}
										cout << "Enter option number to display complete information:";
										cin >> opt4;
										system("cls");
										if (opt4 == 0)
											break;
										cust[opt4 - 1]->display_complete_for_admin();
											cout << endl << endl << "Enter 0 to go back:";
											cin >> opt4;
									} while (opt4 != 0);
								}
								if (opt3 == 2) {
									do {
										cout << "TOTAL NUMBER OF AIRLINES:" << airline::get_count() << endl << endl;
										cout << "0-Go Back" << endl;
										for (j = 0;j < airline::get_count();j++) {
											cout << j + 1 << "-"; 
											plane[j]->display_for_admin();
										}
										cout << "Enter option number to display complete information:";
										cin >> opt4;
										system("cls");
										if (opt4 == 0)
											break;
										plane[opt4 - 1]->display_complete_for_admin();
											cout << endl << endl << "Enter 0 to go back:";
											cin >> opt4;
									} while (opt4 != 0);
								}
								if (opt3 == 3) {
									do {
										cout << "TOTAL NUMBER OF TOURIST GUIDES:" << guide::get_gcount() << endl << endl;
										cout << "0-Go Back" << endl;
										for (j = 0;j < guide::get_gcount();j++) {
											cout << j + 1 << "-";
											tour_guide[j]->display_for_admin();
										}
										cout << "Enter option number to display complete information:";
										cin >> opt4;
										system("cls");
										if (opt4 == 0)
											break;
										tour_guide[opt4 - 1]->display_complete_for_admin();
											cout << endl << endl << "Enter 0 to go back:";
											cin >> opt4;
										} while (opt4 != 0);
								}
								if (opt3 == 4) {
									do {
										cout << "TOTAL NUMBER OF HOTELS:" << hotel::get_count() << endl << endl;
										cout << "0-Go Back" << endl;
										for (j = 0;j < hotel::get_count();j++) {
											cout << j + 1 << "-";
											h_info[j]->display_for_admin();
										}
										cout << "Enter option number to display complete information:";
										cin >> opt4;
										system("cls");
										if (opt4 == 0)
											break;
										h_info[opt4 - 1]->display_complete_for_admin();
											cout << endl << endl << "Enter 0 to go back:";
											cin >> opt4;
										} while (opt4 != 0);
								}
								if (opt3 == 5) {
									do {
										cout << "TOTAL NUMBER OF CAR RENTALS:" << rental::get_count() << endl << endl;
										cout << "0-Go Back" << endl;
										for (j = 0;j < rental::get_count();j++) {
											cout << j + 1 << "-";
											rent[j]->display_for_admin();
										}
										cout << "Enter option number to display complete information:";
										cin >> opt4;
										system("cls");
										if (opt4 == 0)
											break;
										rent[opt4 - 1]->display_complete_for_admin();
											cout << endl << endl << "Enter 0 to go back:";
											cin >> opt4;
										} while (opt4 != 0);
								}
								if (opt3 == 6) {
									do {
										opt4 = admin_update_screen();
										system("cls");
										cout << "Enter New Information" << endl << endl;
										if (opt4 == 1) {
											adm[i]->set_name(input_name());
										}
										if (opt4 == 2) {
											adm[i]->set_password(input_pass());
										}
										if (opt4 == 3) {
											adm[i]->set_username(input_username());
										}
									} while (opt4 != 0);
								}
								if (opt3 == 7) {
									adm[i]->display_complete_for_admin();
								}
							} while (opt3 != 0);
						}
					}
				}while (opt2 != 0);
			}
			if (opt == 2) {
				do {
					opt2 = second_screen();
					system("cls");
					if (opt2 == 1) {
						name = input_name();
						email = input_email();
						num = input_phone_num();
						u_name = input_username();
						for (m = 0; m < customer::get_count(); m++) {
							if (cust[m]->get_username() == u_name) {
								cout << "USERNAME is already in use.Try Again." << endl;
								u_name = input_username();
								m--;
							}
						}
						pass = input_pass();
						cust[customer::get_count()] = new customer(name, pass, email, num, u_name);
						customer::inc_count();
						cout << "Customer Signed Up Successfully" << endl;
					}
					if (opt2 == 2) {
						cout << "Customer Sign In:" << endl;
						u_name = input_username();
						for (i = 0; i < customer::get_count(); i++) {
							flag = cust[i]->verify(u_name);
							if (flag == true) {
								break;
							}
						}
						if (flag == false) {
							cout << "Customer Sign In Attempt Failed!" << endl;
						}
						if (flag == true) {
							do {
								opt3 = customer_screen();
								system("cls");
								if (opt3 == 1) {
									do {
										opt4 = customer_package_screen();
										system("cls");
										if (opt4 == 1) {
											opt5 = display_UAE();
											if (opt5 == 0) {
												opt4 = 0;
											}
											if (opt5 == 1) {
												cust[i]->set_type("Premium");
												cust[i]->set_country("UAE");
												cust[i]->set_city1("Dubai");
												cust[i]->set_city2("Abu Dhabi");
												cust[i]->set_city3("Sharjah");
												cust[i]->set_hotel1("Burj Al Arab");
												cust[i]->set_hotel2("Conrad Eitihad Towers");
												cust[i]->set_hotel3("Occidental Sharjah Grand");
												cust[i]->set_price(400000);
												cust[i]->set_stay1(5);
												cust[i]->set_stay2(5);
												cust[i]->set_stay3(4);
												cust[i]->set_flight_date1(generateDate());
												cust[i]->set_flight_date2(flightStay(cust[i]->get_flight_date(0), cust[i]->get_stay(0)));
												cust[i]->set_flight_date3(flightStay(cust[i]->get_flight_date(1), cust[i]->get_stay(1)));
												cust[i]->set_flight_date4(flightStay(cust[i]->get_flight_date(2), cust[i]->get_stay(2)));
												cust[i]->set_flight_time1(generateTime());
												cust[i]->set_flight_time2(generateTime());
												cust[i]->set_flight_time3(generateTime());
												cust[i]->set_flight_time4(generateTime());
												cust[i]->package_purchased();
											}
											if (opt5 == 2) {
												cust[i]->set_type("Gold");
												cust[i]->set_country("UAE");
												cust[i]->set_city1("Dubai");
												cust[i]->set_city2("Abu Dhabi");
												cust[i]->set_city3("Sharjah");
												cust[i]->set_hotel1("Citymax Hotel");
												cust[i]->set_hotel2("Southern Sun");
												cust[i]->set_hotel3("Verona Resort");
												cust[i]->set_price(200000);
												cust[i]->set_stay1(3);
												cust[i]->set_stay2(3);
												cust[i]->set_stay3(3);
												cust[i]->set_flight_date1(generateDate());
												cust[i]->set_flight_date2(flightStay(cust[i]->get_flight_date(0), cust[i]->get_stay(0)));
												cust[i]->set_flight_date3(flightStay(cust[i]->get_flight_date(1), cust[i]->get_stay(1)));
												cust[i]->set_flight_date4(flightStay(cust[i]->get_flight_date(2), cust[i]->get_stay(2)));
												cust[i]->set_flight_time1(generateTime());
												cust[i]->set_flight_time2(generateTime());
												cust[i]->set_flight_time3(generateTime());
												cust[i]->set_flight_time4(generateTime());
												cust[i]->package_purchased();
											}
											if (opt5 != 0) {
												do {
													opt9 = change_hotel_screen("UAE");
													system("cls");
													if (opt9 == 1) {
														temp = "DUBAI";
													}
													if (opt9 == 2) {
														temp = "ABU DHABI";
													}
													if (opt9 == 3) {
														temp = "SHARJAH";
													}
													if (opt9 != 0) {
														for (j = 0; j < hotel::get_count(); j++) {
															if (h_info[j]->get_city() == temp) {
																h_info[j]->display_info();
																opt10 = hotel_selection();
																if (opt10 == 1) {
																	if (temp == "DUBAI") {
																		cust[i]->set_hotel1(h_info[j]->get_name());
																		break;
																	}
																	if (temp == "ABU DHABI") {
																		cust[i]->set_hotel2(h_info[j]->get_name());
																		break;
																	}
																	if (temp == "SHARJAH") {
																		cust[i]->set_hotel3(h_info[j]->get_name());
																		break;
																	}
																}
																system("cls");
															}
														}
													}
												} while (opt9 != 0);
											}
										}
										if (opt4 == 2) {
											opt5 = display_Turkey();
											if (opt5 == 0) {
												opt4 = 0;
											}
											if (opt5 == 1) {
												cust[i]->set_type("Premium");
												cust[i]->set_country("TURKEY");
												cust[i]->set_city1("ISTANBUL");
												cust[i]->set_city2("ANKARA");
												cust[i]->set_city3("ANTALYA");
												cust[i]->set_hotel1("CVK PARK BOSPHORUS HOTEL");
												cust[i]->set_hotel2("THE WINGS HOTEL ");
												cust[i]->set_hotel3("MAI ANCI HOTEL");
												cust[i]->set_price(500000);
												cust[i]->set_stay1(4);
												cust[i]->set_stay2(4);
												cust[i]->set_stay3(4);
												cust[i]->set_flight_date1(generateDate());
												cust[i]->set_flight_date2(flightStay(cust[i]->get_flight_date(0), cust[i]->get_stay(0)));
												cust[i]->set_flight_date3(flightStay(cust[i]->get_flight_date(1), cust[i]->get_stay(1)));
												cust[i]->set_flight_date4(flightStay(cust[i]->get_flight_date(2), cust[i]->get_stay(2)));
												cust[i]->set_flight_time1(generateTime());
												cust[i]->set_flight_time2(generateTime());
												cust[i]->set_flight_time3(generateTime());
												cust[i]->set_flight_time4(generateTime());
												cust[i]->package_purchased();
											}
											if (opt5 == 2) {
												cust[i]->set_type("Gold");
												cust[i]->set_country("TURKEY");
												cust[i]->set_city1("ISTANBUL");
												cust[i]->set_city2("ANKARA");
												cust[i]->set_city3("ANTALYA");
												cust[i]->set_hotel1("THE GREEN PARK");
												cust[i]->set_hotel2("RADDISON BLUE");
												cust[i]->set_hotel3("ELIPS ROYAL HOTEL");
												cust[i]->set_price(300000);
												cust[i]->set_stay1(3);
												cust[i]->set_stay2(2);
												cust[i]->set_stay3(3);
												cust[i]->set_flight_date1(generateDate());
												cust[i]->set_flight_date2(flightStay(cust[i]->get_flight_date(0), cust[i]->get_stay(0)));
												cust[i]->set_flight_date3(flightStay(cust[i]->get_flight_date(1), cust[i]->get_stay(1)));
												cust[i]->set_flight_date4(flightStay(cust[i]->get_flight_date(2), cust[i]->get_stay(2)));
												cust[i]->set_flight_time1(generateTime());
												cust[i]->set_flight_time2(generateTime());
												cust[i]->set_flight_time3(generateTime());
												cust[i]->set_flight_time4(generateTime());
												cust[i]->package_purchased();
											}
											if (opt5 != 0) {
												do {
													opt9 = change_hotel_screen("TURKEY");
													system("cls");
													if (opt9 == 1) {
														temp = "ISTANBUL";
													}
													if (opt9 == 2) {
														temp = "ANKARA";
													}
													if (opt9 == 3) {
														temp = "ANTALYA";
													}
													if (opt9 != 0) {
														for (j = 0; j < hotel::get_count(); j++) {
															if (h_info[j]->get_city() == temp) {
																h_info[j]->display_info();
																opt10 = hotel_selection();
																if (opt10 == 1) {
																	if (temp == "ISTANBUL") {
																		cust[i]->set_hotel1(h_info[j]->get_name());
																	}
																	if (temp == "ANKARA") {
																		cust[i]->set_hotel2(h_info[j]->get_name());
																	}
																	if (temp == "ANTALYA") {
																		cust[i]->set_hotel3(h_info[j]->get_name());
																	}
																	break;
																}
																system("cls");
															}
														}
													}
												} while (opt9 != 0);
											}
										}
										if (opt4 == 3) {
											opt5 = display_Thailand();
											if (opt5 == 0) {
												opt4 = 0;
											}
											if (opt5 == 1) {
												cust[i]->set_type("Premium");
												cust[i]->set_country("THAILAND");
												cust[i]->set_city1("BANGKOK");
												cust[i]->set_city2("PHUKET");
												cust[i]->set_city3("KO PHI PHI ISLAND");
												cust[i]->set_hotel1("MARRIOT HOTEL");
												cust[i]->set_hotel2("VILLA ZOLITUDE ");
												cust[i]->set_hotel3("SAii Phi Phi Island Village");
												cust[i]->set_price(450000);
												cust[i]->set_stay1(4);
												cust[i]->set_stay2(4);
												cust[i]->set_stay3(4);
												cust[i]->set_flight_date1(generateDate());
												cust[i]->set_flight_date2(flightStay(cust[i]->get_flight_date(0), cust[i]->get_stay(0)));
												cust[i]->set_flight_date3(flightStay(cust[i]->get_flight_date(1), cust[i]->get_stay(1)));
												cust[i]->set_flight_date4(flightStay(cust[i]->get_flight_date(2), cust[i]->get_stay(2)));
												cust[i]->set_flight_time1(generateTime());
												cust[i]->set_flight_time2(generateTime());
												cust[i]->set_flight_time3(generateTime());
												cust[i]->set_flight_time4(generateTime());
												cust[i]->package_purchased();
											}
											if (opt5 == 2) {
												cust[i]->set_type("Gold");
												cust[i]->set_country("THAiLAND");
												cust[i]->set_city1("BANGKOK");
												cust[i]->set_city2("PHUKET");
												cust[i]->set_city3("KO PHI PHI ISLAND");
												cust[i]->set_hotel1("KEPLER RESIDENCE");
												cust[i]->set_hotel2("NOVOTEL");
												cust[i]->set_hotel3("HIP Seaview Resort ");
												cust[i]->set_price(300000);
												cust[i]->set_stay1(3);
												cust[i]->set_stay2(2);
												cust[i]->set_stay3(3);
												cust[i]->set_flight_date1(generateDate());
												cust[i]->set_flight_date2(flightStay(cust[i]->get_flight_date(0), cust[i]->get_stay(0)));
												cust[i]->set_flight_date3(flightStay(cust[i]->get_flight_date(1), cust[i]->get_stay(1)));
												cust[i]->set_flight_date4(flightStay(cust[i]->get_flight_date(2), cust[i]->get_stay(2)));
												cust[i]->set_flight_time1(generateTime());
												cust[i]->set_flight_time2(generateTime());
												cust[i]->set_flight_time3(generateTime());
												cust[i]->set_flight_time4(generateTime());
												cust[i]->package_purchased();
											}
											if (opt5 != 0) {
												do {
													opt9 = change_hotel_screen("THAILAND");
													system("cls");
													if (opt9 == 1) {
														temp = "BANGKOK";
													}
													if (opt9 == 2) {
														temp = "PHUKET";
													}
													if (opt9 == 3) {
														temp = "KO PHI PHI ISLAND";
													}
													if (opt9 != 0) {
														for (j = 0; j < hotel::get_count(); j++) {
															if (h_info[j]->get_city() == temp) {
																h_info[j]->display_info();
																opt10 = hotel_selection();
																if (opt10 == 1) {
																	if (temp == "BANGKOK") {
																		cust[i]->set_hotel1(h_info[j]->get_name());
																	}
																	if (temp == "PHUKET") {
																		cust[i]->set_hotel2(h_info[j]->get_name());
																	}
																	if (temp == "KO PHI PHI ISLAND") {
																		cust[i]->set_hotel3(h_info[j]->get_name());
																	}
																	break;
																}
																system("cls");
															}
														}
													}
												} while (opt9 != 0);
											}
										}
										if (opt5 != 0) {
											cout << "Please Select your airline!" << endl;
											for (int l = 0; l < airline::get_count(); l++) {
												cout << l + 1 << "-";
												plane[l]->display_info();
												cout << endl << endl;
											}
											cout << "Enter Option number to proceed:";
											cin >> opt5;
											cust[i]->set_airline(plane[opt5 - 1]->get_name());
											display_package_purchased();
											opt6 = options_screen();

											if (opt6 == 0) {
												opt4 = 0;
											}
											else if (opt6 == 1) {
												opt3 = 2;
												opt4 = 0;
											}
											else if (opt6 == 2) {
												opt3 = 3;
												opt4 = 0;
											}
										}
									} while (opt4 != 0);
								}
								if (opt3 == 2) {
									cout << "SELECT FROM FOLLOWING DRIVERS: " << endl;
									for (int k = 0; k < rental::get_count(); k++) {
										cout << "DRIVER " << k + 1 << " INFO:" << endl;
										rent[k]->disp_rental();
										cout << "ENTER 1 to select driver or 0 to display next driver:";
										cin >> opt7;
										if (opt7 == 1) {
											cust[i]->set_driver(rent[k]->get_name());
											cust[i]->calc_total_price(rent[k]->get_price());
											cust[i]->driver_added();
											break;
										}
									}
									if (opt7 == 0) {
										opt6 = 0;
									}
								}
								if (opt3 == 3) {
									cout << "SELECT FROM FOLLOWING GUIDES: " << endl;
									for (int k = 0; k < guide::get_gcount(); k++) {
										cout << "GUIDE " << k + 1 << " INFO:" << endl;
										tour_guide[k]->disp_guide();
										cout << "ENTER 1 to select guide or 0 to display next guide:";
										cin >> opt7;
										if (opt7 == 1) {
											cust[i]->set_guide(tour_guide[k]->get_name());
											cust[i]->calc_total_price(tour_guide[k]->get_price());
											cust[i]->guide_added();
											break;
										}
									}
									if (opt7 == 0) {
										opt6 = 0;
									}
								}
								if (opt3 == 4) {
									cust[i]->disp_profile();
								}
								if (opt3 == 5) {
									do {
										opt8 = update_screen();
										system("cls");
										cout << "ENTER NEW INFORMATION:" << endl;
										if (opt8 == 1) {
											cust[i]->set_name(input_name());
										}
										if (opt8 == 2) {
											cust[i]->set_email(input_email());
										}
										if (opt8 == 3) {
											cust[i]->set_password(input_pass());
										}
										if (opt8 == 4) {
											cust[i]->set_num(input_phone_num());
										}
										if (opt8 == 5) {
											cust[i]->set_username(input_username());
										}
									} while (opt8 != 0);
								}
								if (opt3 == 6) {
									cust[i]->display_package();
								}

							} while (opt3 != 0);
						}
					}
				} while (opt2 != 0);
				/*fstream Pack("Packages.txt", ios::app);
				Pack.write((char*)&cust[i], sizeof(cust[i]));
				Pack.close();
				Pack.open("Packages.txt");
				customer obj(name, pass, email, num, u_name);
				Pack.read((char*)&obj, sizeof(obj));
				obj.display_package();*/
			}
			if (opt == 3) {
				do {
					opt2 = second_screen();
					system("cls");
					if (opt2 == 1) {
						name = input_name();
						pass = input_pass();
						u_name = input_username();
						for (m = 0;m < airline::get_count();m++) {
							if (plane[m]->get_username() == u_name) {
								cout << "USERNAME is already in use.Try Again." << endl;
								u_name = input_username();
								m--;
							}
						}
						rating = input_rating();
						plane[airline::get_count()] = new airline(name, u_name, pass, rating);
						airline::inc_count();
					}
					if (opt2 == 2) {
						u_name = input_username();
						for (i = 0;i < airline::get_count();i++) {
							flag = plane[i]->verify(u_name);
							if (flag == true) {
								break;
							}
						}
						if (flag == false) {
							cout << "Airline Sign In Attempt Failed!" << endl;
						}
						if (flag == true) {
							do {
								opt3 = airline_screen();
								system("cls");
								if (opt3 == 1) {
									for (j = 0;i < customer::get_count();j++) {
										if (cust[j]->get_plane() == plane[i]->get_name()) {
											cout << "Customer Name:" << cust[j]->get_name() << endl;
											cout << "Customer Email:" << cust[j]->get_email() << endl;
											cout << "Customer Phone Number:" << cust[j]->get_phone_num() << endl << endl;
											cout << "COUNTRY:" << cust[j]->get_country() << endl;
											for ( k = 0;k < 3;k++) {
												cout << endl << "CITY:" << cust[j]->get_city(k) << endl;
												cout << "Date of Departure to the City:" << cust[j]->get_flight_date(k) <<  endl;
												cout << "Time of Departure to the City:" << cust[j]->get_flight_time(k) << endl;
											}
											cout << endl << "Date of return to Homeland:" << cust[j]->get_flight_date(3) << endl;
											cout << "Time of return to Homeland:" << cust[j]->get_flight_time(k) << endl;
										}
									}
								}
								if (opt3 == 2) {
									do {
										opt4 = airline_update_screen();
										system("cls");
										cout << "Enter New Information:" << endl;
										if (opt4 == 1) {
											plane[i]->set_name(input_name());
										}
										if (opt4 == 2) {
											plane[i]->set_password(input_pass());
										}
										if (opt4 == 3) {
											plane[i]->set_username(input_username());
										}
										if (opt4 == 4) {
											plane[i]->set_rating(input_rating());
										}
									} while (opt4 != 0);
								}
								if (opt3 == 3) {
									plane[i]->display_complete_info();
								}
							} while (opt3 != 0);
						}
					}
				} while (opt2 != 0);
			}
			if (opt == 4) {
				do {
					opt2 = second_screen();
					system("cls");
					if (opt2 == 1) {
						name = input_name();
						u_name = input_username();
						for (m = 0;m < guide::get_gcount();m++) {
							if (tour_guide[m]->get_username() == u_name) {
								cout << "USERNAME is already in use.Try Again." << endl;
								u_name = input_username();
								m--;
							}
						}
						pass = input_pass();
						num = input_phone_num();
						rating = input_rating();
						price = input_price();
						tour_guide[guide::get_gcount()] = new guide(name, u_name, pass, rating, num, price);
						guide::inc_count();
					}
					if (opt2 == 2) {
						u_name = input_username();
						for (i = 0;i < guide::get_gcount();i++) {
							flag = tour_guide[i]->verify(u_name);
							if (flag == true) {
								break;
							}
						}
						if (flag == false) {
							cout << "Tour Guide Sign In Attempt Failed!" << endl;
						}
						if (flag == true) {
							do {
								opt3 = guide_and_hotel_screen();
								system("cls");
								if (opt3 == 1) {
									for (j = 0;j < customer::get_count();j++) {
										if (cust[j]->get_guide() == tour_guide[i]->get_name()) {
											cout << "Customer Name:" << cust[j]->get_name() << endl;
											cout << "Customer Email:" << cust[j]->get_email() << endl;
											cout << "Customer Phone Number:" << cust[j]->get_phone_num() << endl << endl;
											cout << "COUNTRY:" << cust[j]->get_country() << endl;
											for (int k = 0;k < 3;k++) {
												cout << endl << "CITY:" << cust[j]->get_city(k) << endl;
												cout << "Date of Departure to the City:" << cust[j]->get_flight_date(k) << endl;
												cout << "Time of Departure to the City:" << cust[j]->get_flight_time(k) << endl;
											}
											cout << endl << "Date of return to Homeland:" << cust[j]->get_flight_date(3) << endl;
											cout << "Time of return to Homeland:" << cust[j]->get_flight_time(k) << endl;
										}
									}
								}
								if (opt3 == 2) {
									do {
										opt4 = guide_and_rental_update_screen();
										system("cls");
										if (opt4 == 1) {
											tour_guide[i]->set_name(input_name());
										}
										if (opt4 == 2) {
											tour_guide[i]->set_password(input_pass());
										}
										if (opt4 == 3) {
											tour_guide[i]->set_username(input_username());
										}
										if (opt4 == 4) {
											tour_guide[i]->set_rating(input_rating());
										}
										if (opt4 == 5) {
											tour_guide[i]->set_phone(input_phone_num());
										}
										if (opt4 == 6) {
											tour_guide[i]->set_price(input_price());
										}
									} while (opt4 != 0);
								}
								if (opt3 == 3) {
									tour_guide[i]->display_complete_info();
								}
								
							} while (opt3 != 0);
						}
					}
				} while (opt2 != 0);
			}
			if (opt == 5) {
				do {
					opt2 = second_screen();
					system("cls");
					if (opt2 == 1) {
						name = input_name();
						u_name = input_username();
						for (m = 0;m < hotel::get_count();m++) {
							if (h_info[m]->get_username() == u_name) {
								cout << "USERNAME is already in use.Try Again." << endl;
								u_name = input_username();
								m--;
							}
						}
						pass = input_pass();
						country = input_country();
						city = input_city();
						rating = input_rating();
						h_info[hotel::get_count()] = new hotel(name, pass, country, city, u_name, rating);
						hotel::inc_count();
					}
					if (opt2 == 2) {
						u_name = input_username();
						for (i = 0;i < hotel::get_count();i++) {
							flag = h_info[i]->verify(u_name);
							if (flag == true) {
								break;
							}
						}
						if (flag == false) {
							cout << "Hotel Sign In Attempt Failed!" << endl;
						}
						if (flag == true)
						do {
							opt3 = guide_and_hotel_screen();
							if (opt3 == 1) {
								name = h_info[i]->get_name();
								for (j = 0;j < customer::get_count();j++) {
									if (cust[j]->get_hotel(0) == name || cust[j]->get_hotel(1) == name || cust[j]->get_hotel(2) == name) {
										cout << "Customer Name:" << cust[j]->get_name() << endl;
										cout << "Customer Email:" << cust[j]->get_email() << endl;
										cout << "Customer Phone Number:" << cust[j]->get_phone_num() << endl << endl;
										cout << "COUNTRY:" << cust[j]->get_country() << endl;
										if (cust[j]->get_hotel(0) == name) {
											cout << endl << "CITY:" << cust[j]->get_city(0) << endl;
											cout << "Date of Arrival to the City:" << cust[j]->get_flight_date(0) << endl;
											cout << "Time of Arrival to the City:" << cust[j]->get_flight_time(0) << endl;
											cout << "Date of Departure:" << cust[j]->get_flight_date(1) << endl;
											cout << "Time of Departure:" << cust[j]->get_flight_time(1) << endl;
										}
										if (cust[j]->get_hotel(1) == name) {
											cout << endl << "CITY:" << cust[j]->get_city(1) << endl;
											cout << "Date of Arrival to the City:" << cust[j]->get_flight_date(1) << endl;
											cout << "Time of Arrival to the City:" << cust[j]->get_flight_time(1) << endl;
											cout << "Date of Departure:" << cust[j]->get_flight_date(2) << endl;
											cout << "Time of Departure:" << cust[j]->get_flight_time(2) << endl;
										}
										if (cust[j]->get_hotel(2) == name) {
											cout << endl << "CITY:" << cust[j]->get_city(2) << endl;
											cout << "Date of Arrival to the City:" << cust[j]->get_flight_date(2) << endl;
											cout << "Time of Arrival to the City:" << cust[j]->get_flight_time(2) << endl;
											cout << "Date of Departure:" << cust[j]->get_flight_date(3) << endl;
											cout << "Time of Departure:" << cust[j]->get_flight_time(3) << endl;
										}
									}
									cout << endl;
								}
							}
							if (opt3 == 2) {
								do {
									opt4 = hotel_update_screen();
									system("cls");
									cout << "Enter new Information" << endl;
									if (opt4 == 1) {
										h_info[i]->set_name(input_name());
									}
									if (opt4 == 2) {
										h_info[i]->set_password(input_pass());
									}
									if (opt4 == 3) {
										h_info[i]->set_username(input_username());
									}
									if (opt4 == 4) {
										h_info[i]->set_rating(input_rating());
									}
									if (opt4 == 5) {
										h_info[i]->set_country(input_country());
									}
									if (opt4 == 6) {
										h_info[i]->set_city(input_city());
									}
								} while (opt4 != 0);

							}
							if (opt3 == 3) {
								h_info[i]->display_complete_info();
							}
						} while (opt3 != 0);
					}
				} while (opt2 != 0);
			}
			if (opt == 6) {
				do {
					opt2 = second_screen();
					system("cls");
					if (opt2 == 1) {
						name = input_name();
						u_name = input_username();
						for (m = 0;m < rental::get_count();m++) {
							if (rent[m]->get_username() == u_name) {
								cout << "USERNAME is already in use.Try Again." << endl;
								u_name = input_username();
								m--;
							}
						}
						pass = input_pass();
						num = input_phone_num();
						rating = input_rating();
						price = input_price();
						rent[rental::get_count()] = new rental(name, u_name, pass, rating, num, price);
						rental::inc_count();
					}
					if (opt2 == 2) {
						u_name = input_username();
						for (i = 0;i < rental::get_count();i++) {
							flag = rent[i]->verify(u_name);
							if (flag == true) {
								break;
							}
						}
						if (flag == false) {
							cout << "CAR RENTAL Sign In Attempt Failed!" << endl;
						}
						if (flag == true) {
							do {
								opt3 = guide_and_hotel_screen();
								system("cls");
								if (opt3 == 1) {
									for (j = 0;j < customer::get_count();j++) {
										if (cust[j]->get_driver() == rent[i]->get_name()) {
											cout << "Customer Name:" << cust[j]->get_name() << endl;
											cout << "Customer Email:" << cust[j]->get_email() << endl;
											cout << "Customer Phone Number:" << cust[j]->get_phone_num() << endl << endl;
											cout << "COUNTRY:" << cust[j]->get_country() << endl;
											for (int k = 0;k < 3;k++) {
												cout << endl << "CITY:" << cust[j]->get_city(k) << endl;
												cout << "Date of Departure to the City:" << cust[j]->get_flight_date(k) << endl;
												cout << "Time of Departure to the City:" << cust[j]->get_flight_time(k) << endl;
											}
											cout << endl << "Date of return to Homeland:" << cust[j]->get_flight_date(3) << endl;
											cout << "Time of return to Homeland:" << cust[j]->get_flight_time(k) << endl;
										}
									}
								}
								if (opt3 == 2) {
									do {
										opt4 = guide_and_rental_update_screen();
										system("cls");
										if (opt4 == 1) {
											rent[i]->set_name(input_name());
										}
										if (opt4 == 2) {
											rent[i]->set_password(input_pass());
										}
										if (opt4 == 3) {
											rent[i]->set_username(input_username());
										}
										if (opt4 == 4) {
											rent[i]->set_rating(input_rating());
										}
										if (opt4 == 5) {
											rent[i]->set_phone(input_phone_num());
										}
										if (opt4 == 6) {
											rent[i]->set_price(input_price());
										}
									} while (opt4 != 0);
								}
								if (opt3 == 3) {
									rent[i]->display_complete_info();
								}

							} while (opt3 != 0);
						}
					}
				} while (opt2 != 0);
			}
	}while (opt != 0);
}
