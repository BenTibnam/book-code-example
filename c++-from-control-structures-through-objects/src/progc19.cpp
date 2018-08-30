#include<iostream>
#include<cmath>

int main(){
    double loanAmount, monthlyInterest, payments;
    std::cout << "Calculate monthly payments on a loan\n";
    std::cout << "Loan Amount: ";
    std::cin >> loanAmount;
    std::cout << "Monthly Interest Rate: ";
    std::cin >> monthlyInterest;
    std::cout << "Payments: ";
    std::cin >> payments;
    
    // calculating
    monthlyInterest /= 100.0;                       // corrects it so we can calculate percent
    double monthlyPayment, totalPaid, interestPaid;
    monthlyPayment = (monthlyInterest * pow((1 + monthlyInterest), payments)) / (pow((1+monthlyInterest), payments) - 1) * loanAmount;

    std::cout << "Monthly Payment: " << monthlyPayment << '\n';
    std::cout << "Total Paid: " << (monthlyPayment * payments) << '\n';
    std::cout << "Interest Paid: " << ((monthlyPayment * payments) - loanAmount) << '\n';

    return 0;
}