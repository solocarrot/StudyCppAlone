//생성자

#include <iostream>


class Date {
	int year;
	int month;
	int day;

public:
	void SetDate(int year, int month, int day);
	void AddDay(int inc);
	void AddMonth(int inc);
	void AddYear(int inc);
	void ShowData();

	Date(int year, int month, int day) {
		year_ = year;
		month_ = month;
		day_ = day;
	}
};