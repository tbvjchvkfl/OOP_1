#include<iostream>
#include "Point.h"

class AirConditioner
{
	int mTemperature;

public:
	// 함수에 const가 붙으면 멤버 변수를 변경할 수 없음.
	int GetTemperature() const
	{
		return mTemperature;
	}
};


//// 상수 변수
//const int LENGTH{10};
//
////
//// 매개변수의 값을 바꿀 수 없음.
//// 상수 매개변수
//void Print(const int* x)
//{
//
//}
//
//// 상수 반환 값
//const int* DoSomethinh()
//{
//	
//}
//
//// 상수 멤버 함수
//// 해당 클래스의 멤버 변수들을 변경할 수 없다.
//class MyClass
//{
//	int GetCount() const;
//};


int main()
{
	Point p1;
	p1.Set(2, 3);
	p1.Print();
	std::cout << p1.Distance();
}


class Grid
{
	int x;
	int y;

public:
	// 좌표 선택 함수
	void PrintCoordinate();

	// 원점에서 선택한 좌표까지의 거리를 구하는 함수
	double Distance() const;
	
	void Setter(int a, int b);
};

//int main()
//{
//	Grid Stage;
//	double ax{};
//	double by{};
//	std::cin >> ax >> by;
//	Stage.Setter(ax, by);
//	Stage.PrintCoordinate();
//	Stage.Distance();
//}

void Grid::Setter(int a, int b)

{	
	x = a;
	y = b;
}

void Grid::PrintCoordinate()
{
	//std::cin >> x >> y;
	std::cout << "선택된 좌표" << std::endl;
	std::cout << "(" << x << ", " << y << ")" << std::endl;
}

double Grid::Distance() const
{
	std::cout << "원점에서 선택한 좌표까지의 거리" << std::endl;
	std::cout << sqrt(x * x + y * y) << std::endl;
	return sqrt(x * x + y * y);
}
