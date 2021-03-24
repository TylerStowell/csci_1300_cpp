#include <iostream>
using namespace std;
/*
    Computes the volume of a cube, rectangular prism, or square based pyramid,
    with input side length and height.
    @param side_legnth -- the side length of the cube
    @param base_legnth -- side length of the base of the square pyramid
    @param height      -- height of the pyramid or rectangular prism
    @param length      -- length of the base of the prism (along one dimension)
    @param width       -- width of the base of the prism (along the dimension that isnt length)
    @return value -- the volume of the cube, prism or pyramid (double)
*/

// function prototypes
double cube_volume(double)
double pyramid_volume(double, double)
double prism_volume(double, double, double)

double cube_volume(double side_length)
{
    // shortcut: can do the calculation and return at the same time!
    return side_length * side_length * side_length;
}

double pyramid_volume(double height, double base_length)
{
    double base_area = base_length * base_length;
    double volume = height * base_area / 3;
    return volume;
}

double prism_volume(double length, double width, double height)
{
    return length * width * height;
}
