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

#include <iostream>

int main() {
	int i = 1, sum = 0;

	while (i <= 10) {
		sum += i;
		i++;
	}

	std::cout << "합은" << sum << std::endl;
	return 0;
}