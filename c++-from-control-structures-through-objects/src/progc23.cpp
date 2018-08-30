// stock transaction program

#include<iostream>

int main(){
    
    // buying information
    const double COMMISSION_AMT = 0.02;
    const int STOCK_BOUGHT = 1000;
    double pricePerStock = 45.50;

    double cost = pricePerStock * STOCK_BOUGHT;
    double commissionToStock = cost * COMMISSION_AMT;

    std::cout << "Joe Paid: $" << cost << '\n';
    std::cout << "Broker Paid: $" << commissionToStock;

    // sold information
    pricePerStock = 56.90;
    double soldValue = pricePerStock * STOCK_BOUGHT;
    std::cout << "Joe sold the stock for: $" << soldValue << '\n';
    std::cout << "Amount paid to broker: $" << (soldValue * COMMISSION_AMT) << '\n';
    std::cout << "Joe made: $" << (soldValue - ((soldValue * COMMISSION_AMT) + (cost * COMMISSION_AMT))) << '\n';

    return 0;
}