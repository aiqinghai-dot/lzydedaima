#pragma once
#include "Ãı–Œ.h"
class Ichild1 :public I
{
private:
	int x1, y1, x2, y2;
public:
	Ichild1(int x1, int y1, int x2, int y2)
		:I(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~Ichild1() {};
	void draw(HDC hdc);
};
class Ichild2 :public I
{
private:
	int x1, y1, x2, y2;
public:
	Ichild2(int x1, int y1, int x2, int y2)
		:I(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~Ichild2() {};
	void draw(HDC hdc);
};
class Ichild3 :public I
{
private:
	int x1, y1, x2, y2;
public:
	Ichild3(int x1, int y1, int x2, int y2)
		:I(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~Ichild3() {};
	void draw(HDC hdc);
};
