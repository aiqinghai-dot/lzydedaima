#pragma once
#include<ctime>
#include "framework.h"
#include "����˹����.h"
#include"������.h"
#include"T��.h"
#include"Tchild.h"
#include"��L.h"
#include"��L.h"
#include"����.h"
#include "��Z.h"
#include "��Z.h"
#include "����child.h"
#include "��Lchild.h"
#include "��Lchild.h"
#include "��Zchild.h"
#include "��Zchild.h"
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

