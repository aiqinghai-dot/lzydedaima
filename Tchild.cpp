#include "Tchild.h"
void Tchild1::draw(HDC hdc)//T��ת270��
{
	Rectangle(hdc, x1+20, y1-20, x2+20, y2-20);
	Rectangle(hdc, x1+20, y1, x2+20, y2);
	Rectangle(hdc, x1+40, y1, x2+40, y2);
	Rectangle(hdc, x1+20, y1+20, x2+20, y2+20);
}
void Tchild2::draw(HDC hdc)//��ת180��
{
	Rectangle(hdc, x1, y1, x2, y2);//0,20,20,40
	Rectangle(hdc, x1 + 20, y1, x2 + 20, y2);
	Rectangle(hdc, x1 + 40, y1, x2 + 40, y2);
	Rectangle(hdc, x1 + 20, y1 +20, x2 + 20, y2 +20);
}
void Tchild3::draw(HDC hdc)//��ת90��
{
	Rectangle(hdc, x1 + 20, y1 - 20, x2 + 20, y2 - 20);
	Rectangle(hdc, x1 + 20, y1, x2 + 20, y2);
	Rectangle(hdc, x1 + 20, y1+20, x2 + 20, y2+20);
	Rectangle(hdc, x1 , y1 , x2 , y2 );
}