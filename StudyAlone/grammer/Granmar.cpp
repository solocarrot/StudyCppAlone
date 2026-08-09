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

//while문

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
//
// 입력받기
// 
//#include <iostream>
//
//int main() {
//	int luckyNumber = 3;
//	std::cout << "내 비밀번호를 맞춰보세요" << std::endl;
//
//	int user_input;
//
//	while (1) {
//		std::cout << "입력 : ";
//		std::cin >> user_input;
//		if (luckyNumber == user_input) {
//			std::cout << "맞추셨습니다" << std::endl;
//			break;
//		} else {
//			std::cout << "틀렸습니다" << std::endl;
//		}
//	}
//	return 0;
//}

// switch문 이용하기
//#include <iostream>
//
//using std::cout;
//using std::endl;
//using std::cin;
//
//int main() {
//	int user_input;
//	cout << "저의 정보를 표시해줍시다" << endl;
//	cout << "1. 이름" << endl;
//	cout << "2. 나이 "  << endl;
//	cout << "3. 성별" << endl;
//	cin >> user_input;
//
//	switch (user_input) {
//		case 1:
//			cout << "종윤" << endl;
//			break;
//		case 2:
//			cout << "24살" << endl;
//			break;
//		case 3:
//			cout << "남자" << endl;
//			break;
//		default:
//			cout << "궁금한게없군요" << endl;
//			break;
//
//	}
//}