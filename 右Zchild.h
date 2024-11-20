#pragma once
#include "”“Z.h"
class rZchild1 :public rZ
{
private:
	int x1, y1, x2, y2;
public:
	rZchild1(int x1, int y1, int x2, int y2)
		:rZ(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~rZchild1() {};
	void draw(HDC hdc);
};
class rZchild2 :public rZ
{
private:
	int x1, y1, x2, y2;
public:
	rZchild2(int x1, int y1, int x2, int y2)
		:rZ(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~rZchild2() {};
	void draw(HDC hdc);
};
class rZchild3 :public rZ
{
private:
	int x1, y1, x2, y2;
public:
	rZchild3(int x1, int y1, int x2, int y2)
		:rZ(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~rZchild3() {};
	void draw(HDC hdc);
};
