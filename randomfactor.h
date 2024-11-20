#pragma once
#include<ctime>
#include "framework.h"
#include "俄罗斯方块.h"
#include"正方形.h"
#include"T形.h"
#include"Tchild.h"
#include"右L.h"
#include"左L.h"
#include"条形.h"
#include "右Z.h"
#include "左Z.h"
#include "条形child.h"
#include "右Lchild.h"
#include "左Lchild.h"
#include "右Zchild.h"
#include "左Zchild.h"
class randomfactor
{
public:
	T* randomT(int x1,int y1,int x2,int y2);
	I* randomI(int x1, int y1, int x2, int y2);
	rL* randomrL(int x1, int y1, int x2, int y2);
	lL* randomlL(int x1, int y1, int x2, int y2);
	rZ* randomrZ(int x1, int y1, int x2, int y2);
	lZ* randomlZ(int x1, int y1, int x2, int y2);

};

