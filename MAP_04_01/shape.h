#pragma once

class Shape
{
public:
	static const int line = 0;
	static const int sqr = 1;
	static const int cube = 2;
	static const int circle = 3;
	static const int cylinder = 4;
    
	int getType() { return type; }
    
    virtual void shift(int, int) {}
    virtual void shift(int, int, int) {}
    
    virtual void scaleX(int) {}
    virtual void scaleY(int) {}
    virtual void scaleZ(int) {}
    virtual void scale(int) {}

	int type;
    
	double volume;
	double square;
	double height;
	double radius;
    
protected:
    virtual void update_parameters() {}
    
};
