#include "”“Z.h"
using namespace std;
void rZ::draw(HDC hdc)
{
	Rectangle(hdc, x1, y1, x2, y2);//0,0,20,20
	Rectangle(hdc, x1 + 20, y1, x2 + 20, y2);
	Rectangle(hdc, x1, y1 + 20, x2, y2 + 20);
	Rectangle(hdc, x1 - 20, y1 + 20, x2 - 20, y2 + 20);
}
rZ::~rZ()
{

}
