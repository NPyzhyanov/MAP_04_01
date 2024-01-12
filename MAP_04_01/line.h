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
        
        update_parameters();
    }
    
    void shift(int sh_x, int sh_y) override
    {
        x1 += sh_x; y1 += sh_y;
        x2 += sh_x; y2 += sh_y;
        
        update_parameters();
    }
    
    void scaleX(int factor) override
    {
        x1 *= factor;
        x2 *= factor;
        
        update_parameters();
    }
    
    void scaleY(int factor) override
    {
        y1 *= factor;
        y2 *= factor;
        
        update_parameters();
    }
    
    void scale(int divisor) override
    {
        x1 /= divisor; y1 /= divisor;
        x2 /= divisor; y2 /= divisor;
        
        update_parameters();
    }
    
protected:
    void update_parameters() override
    {
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
