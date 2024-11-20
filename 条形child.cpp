#include "条形child.h"
void Ichild1::draw(HDC hdc)//T右转270°
{
	Rectangle(hdc, x1-20 , y1 + 40, x2-20, y2 + 40);
	Rectangle(hdc, x1, y1+40, x2 , y2+40);
	Rectangle(hdc, x1 + 20, y1+40, x2 + 20, y2+40);
	Rectangle(hdc, x1 + 40, y1 + 40, x2 + 40, y2 + 40);
}
void Ichild2::draw(HDC hdc)//右转180°
{
	Rectangle(hdc, x1+20, y1, x2+20, y2);//0,20,20,40
	Rectangle(hdc, x1 + 20, y1+20, x2 + 20, y2+20);
	Rectangle(hdc, x1 + 20, y1+40, x2 + 20, y2+40);
	Rectangle(hdc, x1 + 20, y1 + 60, x2 + 20, y2 + 60);
}
void Ichild3::draw(HDC hdc)//右转90°
{
	Rectangle(hdc, x1-20 , y1+20 , x2-20 , y2+20 );
	Rectangle(hdc, x1 , y1+20, x2 , y2+20);
	Rectangle(hdc, x1 + 20, y1+20 , x2 + 20, y2+20 );
	Rectangle(hdc, x1+40, y1+20, x2+ 40, y2+20);
}