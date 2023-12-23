#include <iostream>
#include <vector>

#include "shape.h"
#include "transform.h"

int main()
{
    Shape test_line(0, 5, 3, 99, 8, 7, 99);
    Shape test_sqr(1, -10, -10, 99, 30, 15, 99);
    Shape test_cube(2, 8, 7, 6, 10, 10, 10);
    Shape test_circle(3, -4, 2, 2.52313, 99);
    Shape test_cilinder(4, 7, 16, 1.78412, 4.5);
    
    Shape* Figures[] = {&test_line, &test_sqr, &test_cube, &test_circle, &test_cilinder};
    
    std::cout << "Figure\tvolume\tsquare\n";
    for (unsigned int fig = 0; fig < sizeof(Figures) / sizeof(Figures[0]); fig++)
    {
        std::cout << Figures[fig]->getType() << "\t" << Figures[fig]->volume << "\t" << Figures[fig]->square << std::endl;
    }
    
    return 0;
}
