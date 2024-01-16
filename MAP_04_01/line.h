#ifndef LINE_H
#define LINE_H

#include "shape.h"

class Line : public Shape
{
public:
    Line(int _x1, int _y1, int _x2, int _y2)
    {
        type = 0;
        
        dimensions = 2;
        points_amount = 2;
        
        std::vector<int> point_1 {_x1, _y1 };
        Coordinates.push_back(point_1);
        std::vector<int> point_2 {_x2, _y2 };
        Coordinates.push_back(point_2);
        
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
};

#endif // LINE_H
