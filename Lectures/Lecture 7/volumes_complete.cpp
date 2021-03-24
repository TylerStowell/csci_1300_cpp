#include <iostream>
using namespace std;
/*
    computes the volume of a cube, with input side length
    @param side_legnth -- the side length of the cube
    @return value -- the volume of the cube
*/
double cube_volume(double side_length)
{
    double volume = side_length * side_length * side_length;
    return volume;
}
