#include "Shape.h"

class GraphicEditor{
    Shape* pStart;
    Shape* pLast;
protected:
    void call();
    void setStart(Shape* p);
    void setLast(Shape* p);
};