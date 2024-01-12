#ifndef LINE_H
#define LINE_H

#include "shape.h"

class Line : public Shape
{
public:
    Line(int _x1, int _y1, int _x2, int _y2)
    {
        type = 0;
        
        x1 = _x1; y1 = _y1;
		x2 = _x2; y2 = _y2;
        
        square = 0;
        volume = 0;
        radius = 0;
        height = 0;
    }
    
private:
    int x1, y1,
        x2, y2;
    
};

#endif // LINE_H
