#include <iostream>
#include <cmath>
void polarToCartesian(double radius, double angle, double& x, double y){
    x = radius*cos(angle);
    y=radius*sin(angle);
}
//Usege example
int main(){
    double radius, angle, x, y;
    //Enter the radius and angle  values
    std::cout <<"Enter the radius:";
    std::cin >>radius;
    std::cout <<"Enter the angle (in degrees):";
    std::cin >> angle;
    //Convert polar coordinates tj Cartesian
    polarToCartesian(radius, angle, x,y);
    //Print the result
    std::cout <<"Cartesian coordinates: ("<<x<<", "<<y<<")" <<std::endl;
    return 0;
}