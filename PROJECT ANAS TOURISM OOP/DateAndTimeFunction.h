#include <iostream>
#include <ctime>
#include<string>
#include<sstream>
using namespace std;
int setDay(int day,int stay)
{
	day += stay;
	if (day > 6)
	{
		day %= 7;
	}
	return day;
}
void setDate(int *date,int *month,int *year, int *day,int stay)
{
	*date += stay;
	*day = setDay(*day, stay);
	if (*month == 1)
	{
		if (*year % 4 == 0)
		{
			if (*date > 29)
			{
				*month = *month + 1;
				*date %= 29;
			}
		}
		else
		{
			if (*date > 28)
			{
				*month = *month + 1;
				*date %= 28;
			}
		}
	}
	else if (*month >= 0 && *month <= 6)
	{
		if (*month % 2 == 1)
		{
			if (*date > 30)
			{
				*month = *month + 1;
				*date %= 30;
			}
		}
		else
		{
			if (*date > 31)
			{
				*month = *month + 1;
				*date %= 31;
			}
		}
	}
	else if (*month >= 7 && *month <= 11)
	{
		if (*month % 2 == 1)
		{
			if (*date > 30)
			{
				*month = *month + 1;
				*date %= 30;
			}
		}
		else
		{
			if (*date > 31)
			{
				*month = *month + 1;
				*date %= 31;
			}
		}
	}
	if (*month > 11)
	{
		*year = *year + 1;
		*month %= 12;
	}
}
string generateDate()
{
	int a = 0;
	time_t tt;
	struct tm ti;
	string finaldate;
	string months[12] = { "Jauary","Feburary","March","April","May","June","July","Augest","September","October","November","December" };
	string days[7] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
	time(&tt);
	localtime_s(&ti, &tt);
	int min,hour,month,day,date,year;
	min = ti.tm_min;
	hour = ti.tm_hour;
	month = ti.tm_mon;
	day = ti.tm_wday;
	date = ti.tm_mday;
	year = 2023;
	while (a == 0)
		a = rand() % 5;
	setDate(&date, &month, &year, &day, a);
	string mday = to_string(date);
	string years = to_string(year);
	finaldate = mday + "/" + months[month] + "/" + years + " " + days[day];
	return finaldate;
}
string generateTime()
{
	string time,hour_str,min_str;
	int min, hour;
	min = rand() % 60;
	min -= min % 5;
	hour = rand() % 24;
	hour_str = to_string(hour);
	min_str = to_string(min);
	time = " " + hour_str + ":" + min_str + " ";
	return time;
}
string flightStay(string flight, int stay)
{
	istringstream iss(flight);
	string day_str, month_str, year_str,weekday_str,date;
	string months[12] = { "Jauary","Feburary","March","April","May","June","July","Augest","September","October","November","December" };
	string days[7] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
	getline(iss, day_str, '/');
	getline(iss, month_str, '/');
	getline(iss, year_str,' ');
	getline(iss, weekday_str);
	int month;
	if (month_str == "January")
		month = 0;
	else if (month_str == "Feburary")
		month = 1;
	else if (month_str == "March")
		month = 2;
	else if (month_str == "April")
		month = 3;
	else if (month_str == "May")
		month = 4;
	else if (month_str == "June")
		month = 5;
	else if (month_str == "July")
		month = 6;
	else if (month_str == "Augest")
		month = 7;
	else if (month_str == "September")
		month = 8;
	else if (month_str == "October")
		month = 9;
	else if (month_str == "November")
		month = 10;
	else if (month_str == "December")
		month = 11;
	int weekday;
	if (weekday_str == "Sunday")
		weekday = 0;
	if (weekday_str == "Monday")
		weekday = 1;
	if (weekday_str == "Tuesday")
		weekday = 2;
	if (weekday_str == "Wednesday")
		weekday = 3;
	if (weekday_str == "Thursday")
		weekday = 4;
	if (weekday_str == "Friday")
		weekday = 5;
	if (weekday_str == "Saturday")
		weekday = 6;
	int day = stoi(day_str);
	int year = stoi(year_str);
	setDate(&day, &month, &year, &weekday, stay);
	day_str = to_string(day);
	month_str = months[month];
	year_str = to_string(year);
	weekday_str = days[weekday];
	date = day_str + "/" + month_str + "/" + year_str + " " + weekday_str;
	return date;
}