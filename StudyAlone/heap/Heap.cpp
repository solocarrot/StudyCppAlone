////new와 delete의 사용
//#include <iostream>
//
//int main() {
//	int* p = new int;
//	*p = 10;
//
//	std::cout << *p << std::endl;
//
//	delete p;
//	return 0;
//}

//#include <iostream>
//
//int main() {
//	int arr_size;
//	std::cout << "arr size = ";
//	std::cin >> arr_size;
//	int *list = new int[arr_size];
//
//	for (int i = 0; i < arr_size; i++) {
//		std::cin >> list[i];
//	}
//
//	for (int i = 0; i < arr_size; i++) {
//		std::cout << i << "th element of list = " << list[i] << std::endl;
//	}
//	delete list;
//	return 0;
//}
//
////변수의 존재범위
//
//#include <iostream>
//
//int main() {
//	int a = 4;
//	{
//	std::cout << "외부의 변수 1 :" << a << std::endl;
//	int a = 3;
//	std::cout << "내부의 변수:" << a << std::endl;
//	}
//
//	std::cout << "외부의 변수 2:" << a << std::endl;
//	return 0;
//}

////마이펫만들기
//
//#include <iostream>
//
//typedef struct Animal {
//	char name[30];
//	int age;
//
//	int health;
//	int food;
//	int clean;
//} Animal;
//
//void create_animal(Animal* animal) {
//	std::cout << "동물의 이름 = ";
//	std::cin >> animal->name;
//
//	std::cout << "동물의 나이 = ";
//	std::cin >> animal->age;
//
//	animal->health = 100;
//	animal->food = 100;
//	animal->clean = 100;
//}
//
//void play(Animal* animal) {
//	animal-> health += 10;
//	animal-> food -= 20;
//	animal-> clean -= 30;
//}
//
//void one_day_pass(Animal* animal) {
//	// 하루가지나면
//	animal->health -= 10;
//	animal->food -= 30;
//	animal->clean -= 20;
//}
//
//void show_stat(Animal* animal) {
//	std::cout << "동물의 상태" << std::endl;
//	std::cout << "체력: " << animal->health << std::endl;
//	std::cout << "청결: " << animal->clean << std::endl;
//	std::cout << "배부름: " << animal->food << std::endl;
//}
//int main() {
//	Animal* list[10];
//	int anmial_num = 0;
//}