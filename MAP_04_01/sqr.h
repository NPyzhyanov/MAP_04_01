#ifndef SQR_H
#define SQR_H

#include "shape.h"

class Sqr : public Shape
{
public:
    Sqr(int _x1, int _y1, int _x2, int _y2)
    {
        type = 1;
        
        dimensions = 2;
        points_amount = 4;
        
        std::vector<int> extreme_point_1 {_x1, _y1 };
        std::vector<int> extreme_point_2 {_x2, _y2 };
        
        fill_coordinates(extreme_point_1, extreme_point_2);
        
        update_parameters();
    }
    
protected:
    void update_parameters() override
    {
        int x1 = (Coordinates.at(0)).at(0);
        int x2 = (Coordinates.at(points_amount - 1)).at(0);
        int y1 = (Coordinates.at(0)).at(1);
        int y2 = (Coordinates.at(points_amount - 1)).at(1);
        
        int a = abs(x1 - x2);
        int b = abs(y1 - y2);
        
        square = a * b;
        volume = 0;
        radius = 0;
        height = 0;
    }
};

#endif // SQR_H
