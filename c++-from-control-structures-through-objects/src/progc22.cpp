#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<iomanip>

int main(){
    double degreeInRadians;
    std::cout << "enter degrees in radians: ";
    std::cin >> degreeInRadians;

    double tangent = tan(degreeInRadians), sine = sin(degreeInRadians), cosine = cos(degreeInRadians);
    std::cout << std::setprecision(4);

    std::cout << "Tangent: " << tangent << '\n';
    std::cout << "Sine: " << sine << '\n';
    std::cout << "Cosine: " << cosine << '\n';

    return 0;
}