// calculate the number of slices a pizza of any size can be divide into

#include<iostream>
int main(){
    const double SLICE_AREA = 14.125;
    double diameter;
    
    std::cout << "Calculates slices for any sized pizza\n";
    std::cout << "Enter diameter of pizza: ";
    std::cin >> diameter;

    double radius = diameter / 2;
    double pizzaArea = 3.14159 * (radius * radius);
    int slices = pizzaArea / SLICE_AREA;

    std::cout << "You can get " << slices << " slice(s) of pizza\n";

    return 0;
}