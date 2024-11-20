#pragma once
#include "”“L.h"
class rLchild1 :public rL
{
private:
	int x1, y1, x2, y2;
public:
	rLchild1(int x1, int y1, int x2, int y2)
		:rL(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~rLchild1() {};
	void draw(HDC hdc);
};
class rLchild2 :public rL
{
private:
	int x1, y1, x2, y2;
public:
	rLchild2(int x1, int y1, int x2, int y2)
		:rL(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~rLchild2() {};
	void draw(HDC hdc);
};
class rLchild3 :public rL
{
private:
	int x1, y1, x2, y2;
public:
	rLchild3(int x1, int y1, int x2, int y2)
		:rL(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~rLchild3() {};
	void draw(HDC hdc);
};
