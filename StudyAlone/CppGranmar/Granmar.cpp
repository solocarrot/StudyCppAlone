//#include <iostream>
//
//int main() {
//	int i;
//
//	for (i = 0; i < 10; i++) {
//		std::cout << i << std::endl;
//	}
//	return 0;
//}

//#include <iostream>
//
//int main() {
//	int i, sum = 0;
//
//	for (i = 1; i < 10; i++) {
//		sum += i;
//	}
//	std::cout << sum << std::endl;
//	return 0;
//}

//#include <iostream>
//
//int main() {
//	int i = 1, sum = 0;
//
//	while (i <= 10) {
//		sum += i;
//		i++;
//	}
//
//	std::cout << "합은" << sum << std::endl;
//	return 0;
//}

#include <iostream>

int main() {
	int luckyNumber = 3;
	std::cout << "내 비밀번호를 맞춰보세요" << std::endl;

	int user_input;

	while (1) {
		std::cout << "입력 : ";
		std::cin >> user_input;
		if (luckyNumber == user_input) {
			std::cout << "맞추셨습니다" << std::endl;
			break;
		} else {
			std::cout << "틀렸습니다" << std::endl;
		}
	}
	return 0;
}