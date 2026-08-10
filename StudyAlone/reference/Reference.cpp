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

////래퍼런스이해+
//int a = 10;
//int &another_a = a;
//
//int b = 3;
//another_a = b;

////인자가 된 참조자
//#include <iostream>
//
//int change_val(int& p) {
//	p = 3;
//
//	return 0;
//}
//
//int main() {
//	int number = 5;
//
//	std::cout << number << std::endl;
//	change_val(number);
//	std::cout << number << std::endl;
//}

////상수에 대한참조자
//#include <iostream>
//
//int main() {
//	int& ref = 4;
//
//	std::cout << ref << std::endl;
//}
//
////배열래퍼런스
//#include <iostream>
//
//int main() {
//	int arr[] = { 1,2,3 };
//	int(&ref)[3] = arr;
//
//	ref[0] = 2;
//	ref[1] = 3;
//	ref[2] = 1;
//
//	std::cout << arr[0] << arr[1] << arr[2] << std::endl;
//	return 0;
//}

//래퍼런스를 리턴하는 함수
int fuction() {
	int a = 2;
	return a;
}

int main() {
	int b = fuction();
	return 0;
}