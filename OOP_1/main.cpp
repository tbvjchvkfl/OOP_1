#include<iostream>


class AirConditioner
{
	int mTemperature;

public:
	// �Լ��� const�� ������ ��� ������ ������ �� ����.
	int GetTemperature() const
	{
		return mTemperature;
	}
};


//// ��� ����
//const int LENGTH{10};
//
////
//// �Ű������� ���� �ٲ� �� ����.
//// ��� �Ű�����
//void Print(const int* x)
//{
//
//}
//
//// ��� ��ȯ ��
//const int* DoSomethinh()
//{
//	
//}
//
//// ��� ��� �Լ�
//// �ش� Ŭ������ ��� �������� ������ �� ����.
//class MyClass
//{
//	int GetCount() const;
//};



class Grid
{
	int x;
	int y;

public:
	// ��ǥ ���� �Լ�
	void PrintCoordinate();

	// �������� ������ ��ǥ������ �Ÿ��� ���ϴ� �Լ�
	double Distance() const;
	
};

int main()
{
	Grid Stage;
	Stage.PrintCoordinate();
	Stage.Distance();
}

void Grid::PrintCoordinate()
{
	std::cin >> x >> y;
	std::cout << "���õ� ��ǥ" << std::endl;
	std::cout << "(" << x << ", " << y << ")" << std::endl;
}

double Grid::Distance() const
{
	std::cout << "�������� ������ ��ǥ������ �Ÿ�" << std::endl;
	std::cout << sqrt(x * x + y * y) << std::endl;
	return sqrt(x * x + y * y);
}
