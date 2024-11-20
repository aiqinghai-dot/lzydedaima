#include "×óZchild.h"
void lZchild1::draw(HDC hdc)//TÓÒ×ª270¡ã
{
	Rectangle(hdc, x1 + 20, y1, x2 + 20, y2 );
	Rectangle(hdc, x1 + 20, y1+20, x2 + 20, y2+20);
	Rectangle(hdc, x1 , y1+20, x2 , y2+20);
	Rectangle(hdc, x1 , y1 + 40, x2, y2 + 40);
}
void lZchild2::draw(HDC hdc)//ÓÒ×ª180¡ã
{
	Rectangle(hdc, x1, y1, x2, y2);//0,20,20,40
	Rectangle(hdc, x1 + 20, y1, x2 + 20, y2);
	Rectangle(hdc, x1 + 20, y1+20, x2 + 20, y2+20);
	Rectangle(hdc, x1 + 40, y1 + 20, x2 + 40, y2 + 20);
}
void lZchild3::draw(HDC hdc)//ÓÒ×ª90¡ã
{
	Rectangle(hdc, x1 , y1 , x2, y2 );
	Rectangle(hdc, x1 + 20, y1, x2 + 20, y2);
	Rectangle(hdc, x1 + 20, y1 - 20, x2 + 20, y2 - 20);
	Rectangle(hdc, x1, y1+20, x2, y2+20);
}