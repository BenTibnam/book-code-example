// calculates interest

#include<iostream>
#include<cmath>
int main(){
    int timesCompounded;
    double principle, interestRate;

    std::cout << "Interest Rate: ";
    std::cin >> interestRate;
    std::cout << "Times Compounded: ";
    std::cin >> timesCompounded;
    std::cout << "Principle Investment: ";
    std::cin >> principle;

    double amt = principle * pow(1 + (interestRate / timesCompounded), timesCompounded);
    double intersetAmt = amt - principle;

    std::cout << "\n\nInterest: " << intersetAmt << '\n';
    std::cout << "Total: " << amt << '\n';

    return 0;
}