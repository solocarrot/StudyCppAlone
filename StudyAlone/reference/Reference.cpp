//#include <iostream>
//
//int change_val(int* p) {
//	*p = 3;
//
//	return 0;
//}
//int main() {
//	int number = 5;
//
//	std::cout << number << std::endl;
//	change_val(&number);
//	std::cout << number << std::endl;
//
//}
//
//
////래퍼런스 도입
//#include <iostream>
//
//int main() {
//	int a = 3;
//	int& another_a = a;
//
//	another_a = 5;
//	std::cout << "a = " << a << std::endl;
//	std::cout << "another_a = " << another_a << std::endl;
//}

//래퍼런스이해+
int a = 10;
int &another_a = a;

int b = 3;
another_a = b;
