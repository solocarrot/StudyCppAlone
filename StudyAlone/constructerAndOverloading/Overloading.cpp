////함수의 오버로딩
//
//#include <iostream>
//
//void print(int x) { std::cout << "int : " << x << std::endl; }
//void print(double x) { std::cout << "double : " << x << std::endl; }
//
//int main() {
//	int a = 1;
//	char b = 'c';
//	double c = 3.2f;
//
//	print(a);
//	print(b);
//	print(c);
//}

//class Point {
//	int x, y;
//public:
//	Point(int pos_x, int pos_y);
//};
//
//
//class Geometry {
//	// 점100 개를보관하는배열.
//	Point* point_array[100];
//public:
//	Geometry(Point** point_list);
//	Geometry();
//	void AddPoint(const Point& point);
//	// 모든점들간의거리를출력하는함수입니다.
//	void PrintDistance();
//	// 모든점들을잇는직선들간의교점의수를출력해주는함수입니다.
//	// 참고적으로임의의두점을잇는직선의방정식을f(x,y) = ax+by+c = 0
//	// 이라고할때임의의다른두점(x1, y1) 과(x2, y2) 가f(x,y)=0 을기준으로
//	// 서로다른부분에있을조건은f(x1, y1) * f(x2, y2) <= 0 이면됩니다.
//	void PrintNumMeets();
//};