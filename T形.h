#pragma once
#include<Windows.h>
#include"Shape.h"
#include<ctime>
class T :public Shape
{
private:
	int x1, x2, y1, y2;
public:
	T(int x1, int y1, int x2, int y2)
		:x1(x1), y1(y1), x2(x2), y2(y2) {};
	virtual ~T();
	virtual void draw(HDC hdc);
};

