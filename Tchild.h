#pragma once
#include "TÐÎ.h"
class Tchild1 :public T
{
private:
	int x1,y1,x2,y2;
public:
	Tchild1(int x1, int y1, int x2, int y2) 
		:T(x1, y1, x2, y2),x1(x1),y1(y1),x2(x2),y2(y2) {};
	~Tchild1() {};
	void draw(HDC hdc);
};
class Tchild2 :public T
{
private:
	int x1, y1, x2, y2;
public:
	Tchild2(int x1, int y1, int x2, int y2)
		:T(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~Tchild2() {};
	void draw(HDC hdc);
};
class Tchild3 :public T
{
private:
	int x1, y1, x2, y2;
public:
	Tchild3(int x1, int y1, int x2, int y2)
		:T(x1, y1, x2, y2), x1(x1), y1(y1), x2(x2), y2(y2) {};
	~Tchild3() {};
	void draw(HDC hdc);
};

