#pragma once
#include "×óL.h"
class lLchild1 :public lL 
{
private:
	int x1, y1, x2, y2;
public:
	lLchild1(int x1, int y1, int x2, int y2)
		:lL(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~lLchild1() {};
	void draw(HDC hdc);
};
class lLchild2 :public lL
{
private:
	int x1, y1, x2, y2;
public:
	lLchild2(int x1, int y1, int x2, int y2)
		:lL(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~lLchild2() {};
	void draw(HDC hdc);
};
class lLchild3 :public lL
{
private:
	int x1, y1, x2, y2;
public:
	lLchild3(int x1, int y1, int x2, int y2)
		:lL(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~lLchild3() {};
	void draw(HDC hdc);
};
