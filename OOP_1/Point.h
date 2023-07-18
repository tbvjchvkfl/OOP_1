#pragma once
class Point
{
private:
	int mX;
	int mY;

public:
	void Set(int x, int y);
	double Distance() const;
	void Print() const;
};

