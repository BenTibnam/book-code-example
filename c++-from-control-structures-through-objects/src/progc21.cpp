// calculate the number of slices a pizza of any size can be divide into

#include<iostream>
int main(){
    const double SLICE_AREA = 14.125;
    double diameter;
    int peopleAtParty;

    std::cout << "How many people do you expect to be at the party: ";
    std::cin >> peopleAtParty;

    std::cout << "Diameter of pizzas: ";
    std::cin >> diameter;

    std::cout << "calculating\n";

     
    double radius = diameter / 2;
    double pizzaArea = 3.14159 * (radius * radius);
    int slices = pizzaArea / SLICE_AREA;

    int totalNumberSlicesEaten = peopleAtParty * 4;
    int totalPizzas = 0, totalSlicesNeeded =totalNumberSlicesEaten;

    while(totalSlicesNeeded > 0){
        totalPizzas++;
        totalSlicesNeeded -= slices;
    }

    std::cout << "You need " << totalPizzas << " pizzas\n";

    return 0;
}