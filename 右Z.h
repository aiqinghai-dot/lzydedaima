#pragma once
#include<Windows.h>
#include"Shape.h"
class rZ:public Shape
{
private:
	int x1, x2, y1, y2;
public:
	rZ(int x1, int y1, int x2, int y2)
		:x1(x1), y1(y1), x2(x2), y2(y2) {};
	virtual ~rZ();
	virtual void draw(HDC hdc);
};