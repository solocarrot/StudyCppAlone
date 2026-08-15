//#include <iostream>
//
//class Animal {
//private:
//	int food;
//	int weight;
//
//public:
//	void set_animal(int  _food, int _weight) {
//		food = _food;
//		weight = _weight;
//	}
//	void increase_food(int inc) {
//		food += inc;
//		weight += (inc / 3);
//	}
//	void view_stat() {
//		std::cout << "이 동물의 food: " << food << std::endl;
//		std::cout << "이 동물의 weight: " << weight << std::endl;
//	}
//};
//
//int main() {
//	Animal animal;
//	animal.set_animal(100, 50);
//	animal.increase_food(30);
//
//	animal.view_stat();
//	return 0;
//}

//Date 클래스만들어보기

#include <iostream>

class Date {
	int year;
	int month;
	int day;


public:
	void SetDate(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}
	void AddDay(int inc) {
		day += inc;
	}
	void AddMonth(int inc) {
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
			if (day > 31) {
				month++;
				day = 1;
			}
		}
		else if (month == 2) {
			if (day > 28) {
				month++;
				day = 1;
			}
		}
		else {
			if (day > 30) {
				month++;
				day = 1;
			}
		}

	}
	void AddYear(int inc) {
		if (month > 12) {
			year++;
			month = 1;
		}
	}

	void showDate() {
		std::cout << year << "년" << month << "월" << day << "일" << std::endl;

	}
};