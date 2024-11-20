#include "randomfactor.h"
T* randomfactor::randomT(int x1, int y1, int x2, int y2)
{
    srand((unsigned int)time(NULL));
    T* shape = nullptr;
    int index = rand() % 4 + 1;
    switch (index)
    {
    case 1:
        shape = new T(x1, y1, x2, y2);
        break;
    case 2:
        shape = new Tchild1(x1, y1, x2, y2);
        break;
    case 3:
        shape = new Tchild2(x1, y1, x2, y2);
        break;
    case 4:
        shape = new Tchild3(x1, y1, x2, y2);
        break;
    default:
        // 应该永远不会到达这里
        break;
    }
    return shape;
}
I* randomfactor::randomI(int x1, int y1, int x2, int y2)
{
    srand((unsigned int)time(NULL));
    I* shape = nullptr;
    int index = rand() % 4 + 1;
    switch (index)
    {
    case 1:
        shape = new I(x1, y1, x2, y2);
        break;
    case 2:
        shape = new Ichild1(x1, y1, x2, y2);
        break;
    case 3:
        shape = new Ichild2(x1, y1, x2, y2);
        break;
    case 4:
        shape = new Ichild3(x1, y1, x2, y2);
        break;
    default:
        // 应该永远不会到达这里
        break;
    }
    return shape;
}
rL* randomfactor::randomrL(int x1, int y1, int x2, int y2)
{
    srand((unsigned int)time(NULL));
    rL* shape = nullptr;
    int index = rand() % 4 + 1;
    switch (index)
    {
    case 1:
        shape = new rL(x1, y1, x2, y2);
        break;
    case 2:
        shape = new rLchild1(x1, y1, x2, y2);
        break;
    case 3:
        shape = new rLchild2(x1, y1, x2, y2);
        break;
    case 4:
        shape = new rLchild3(x1, y1, x2, y2);
        break;
    default:
        // 应该永远不会到达这里
        break;
    }
    return shape;
}
lL* randomfactor::randomlL(int x1, int y1, int x2, int y2)
{
    srand((unsigned int)time(NULL));
    lL* shape = nullptr;
    int index = rand() % 4 + 1;
    switch (index)
    {
    case 1:
        shape = new lL(x1, y1, x2, y2);
        break;
    case 2:
        shape = new lLchild1(x1, y1, x2, y2);
        break;
    case 3:
        shape = new lLchild2(x1, y1, x2, y2);
        break;
    case 4:
        shape = new lLchild3(x1, y1, x2, y2);
        break;
    default:
        // 应该永远不会到达这里
        break;
    }
    return shape;
}
rZ* randomfactor::randomrZ(int x1, int y1, int x2, int y2)
{
    srand((unsigned int)time(NULL));
    rZ* shape = nullptr;
    int index = rand() % 4 + 1;
    switch (index)
    {
    case 1:
        shape = new rZ(x1, y1, x2, y2);
        break;
    case 2:
        shape = new rZchild1(x1, y1, x2, y2);
        break;
    case 3:
        shape = new rZchild2(x1, y1, x2, y2);
        break;
    case 4:
        shape = new rZchild3(x1, y1, x2, y2);
        break;
    default:
        // 应该永远不会到达这里
        break;
    }
    return shape;
}
lZ* randomfactor::randomlZ(int x1, int y1, int x2, int y2)
{
    srand((unsigned int)time(NULL));
    lZ* shape = nullptr;
    int index = rand() % 4 + 1;
    switch (index)
    {
    case 1:
        shape = new lZ(x1, y1, x2, y2);
        break;
    case 2:
        shape = new lZchild1(x1, y1, x2, y2);
        break;
    case 3:
        shape = new lZchild2(x1, y1, x2, y2);
        break;
    case 4:
        shape = new lZchild3(x1, y1, x2, y2);
        break;
    default:
        // 应该永远不会到达这里
        break;
    }
    return shape;
}