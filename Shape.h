#pragma once
#include<Windows.h>
class Shape
{
public:
	virtual void draw(HDC hdc) = 0;
	~Shape() {};
};

