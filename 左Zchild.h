#pragma once
#pragma once
#include "×óZ.h"
class lZchild1 :public lZ
{
private:
	int x1, y1, x2, y2;
public:
	lZchild1(int x1, int y1, int x2, int y2)
		:lZ(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~lZchild1() {};
	void draw(HDC hdc);
};
class lZchild2 :public lZ
{
private:
	int x1, y1, x2, y2;
public:
	lZchild2(int x1, int y1, int x2, int y2)
		:lZ(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~lZchild2() {};
	void draw(HDC hdc);
};
class lZchild3 :public lZ
{
private:
	int x1, y1, x2, y2;
public:
	lZchild3(int x1, int y1, int x2, int y2)
		:lZ(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~lZchild3() {};
	void draw(HDC hdc);
};
