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

//변수의 존재범위

#include <iostream>

int main() {
	int a = 4;
	{
	std::cout << "외부의 변수 1 :" << a << std::endl;
	int a = 3;
	std::cout << "내부의 변수:" << a << std::endl;
	}

	std::cout << "외부의 변수 2:" << a << std::endl;
	return 0;
}