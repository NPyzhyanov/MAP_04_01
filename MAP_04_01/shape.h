#pragma once

class Shape
{
public:
    
	int getType() { return type; }
    
    void shift(int sh_x, int sh_y)
    {
        for (int p = 0; p < points_amount; p++)
        {
            (Coordinates.at(p)).at(0) += sh_x;
            (Coordinates.at(p)).at(1) += sh_y;
        }
        
        update_parameters();
    }
    
    void shift(int sh_x, int sh_y, int sh_z)
    {
        for (int p = 0; p < points_amount; p++)
        {
            (Coordinates.at(p)).at(0) += sh_x;
            (Coordinates.at(p)).at(1) += sh_y;
            (Coordinates.at(p)).at(2) += sh_z;
        }
        
        update_parameters();
    }
    
    void scaleX(int factor)
    {
        for (int p = 0; p < points_amount; p++)
        {
            (Coordinates.at(p)).at(0) *= factor;
        }
        
        update_parameters();
    }
    
    void scaleY(int factor)
    {
        for (int p = 0; p < points_amount; p++)
        {
            (Coordinates.at(p)).at(1) *= factor;
        }
        
        update_parameters();
    }
    
    void scaleZ(int factor)
    {
        for (int p = 0; p < points_amount; p++)
        {
            (Coordinates.at(p)).at(2) *= factor;
        }
        
        update_parameters();
    }
    
    void scale(int divisor)
    {
        for (int p = 0; p < points_amount; p++)
        {
            for (int dim = 0; dim < dimensions; dim++)
            {
                (Coordinates.at(p)).at(dim) /= divisor;
            }
        }
        
        update_parameters();
    }
    
    void print_coordinates(std::string message)
    {
        std::cout << "\n" << message << ":\n";
        for (int p = 0; p < points_amount; p++)
        {
            for (int dim = 0; dim < dimensions; dim++)
            {
                std::cout << (Coordinates.at(p)).at(dim) << "\t";
            }
            std::cout << std::endl;
        }
    }

	int type;
    
	double volume;
	double square;
	double height;
	double radius;
    
protected:
    virtual void update_parameters() {}
    
    int dimensions;
    int points_amount;
    
    std::vector<std::vector<int>> Coordinates;
    
    void fill_coordinates(std::vector<int> extreme_point_1, std::vector<int> extreme_point_2)
    {
        for (int p = 0; p < points_amount; p++)
        {
            int identifying_divisor = 1;
            std::vector<int> current_point;
            for (int dim = 0; dim < dimensions; dim++)
            {
                int current_coordinate = ( ((p / identifying_divisor) % 2) ? extreme_point_2.at(dim) : extreme_point_1.at(dim));
                current_point.push_back(current_coordinate);
                identifying_divisor *= 2;
            }
            current_point.shrink_to_fit();
            Coordinates.push_back(current_point);
        }
        Coordinates.shrink_to_fit();
    }

    const double pi = 3.14159265358979;
    
};
