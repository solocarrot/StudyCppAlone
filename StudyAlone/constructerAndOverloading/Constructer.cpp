////생성자
//
//#include <iostream>
//
//
//class Date {
//	int year_;
//	int month_;
//	int day_;
//
//public:
//	void SetDate(int year, int month, int day);
//	void AddDay(int inc);
//	void AddMonth(int inc);
//	void AddYear(int inc);
//	void ShowData();
//
//	Date(int year, int month, int day) {
//		year_ = year;
//		month_ = month;
//		day_ = day;
//	}
//};

////디폴트 생성자
//
//#include <iostream>
//
//class Date {
//	int year;
//	int month;
//	int day;
//
//public:
//	void ShowDate();
//
//	Date() {
//		year = 2026;
//		month = 8;
//		day = 16;
//	}
//};
//
//void Date::ShowDate() {
//	std::cout << "오늘은 " << year << "년" << month << "월 " << day << "일 입니다" << std::endl;
//}
//
//int main() {
//	Date day = Date();
//	Date day2;
//	//Date day3(); 이건 Date를 반환값으로 가지는 함수를 정의한게 됨.
//
//	day.ShowDate();
//	day2.ShowDate();
//
//	return 0;
//}