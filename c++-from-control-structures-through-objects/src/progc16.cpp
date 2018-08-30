//// calculates the the assessed value and property tax of a property based on perchace amount.

#include<iostream>
int main(){
	double propertyValue, assessedPercent, pricePer100, assessmentValue, propertyTax;
	
	std::cout << "Calculate the assessed value and property tax of a property based on amount property was bought for\nThis program includes $5000 exemption for seniors\nEnter property value: ";
	std::cin >> propertyValue;
	std::cout << "Enter assessed value percent(60%=0.6): ";
	std::cin >> assessedPercent;
	std::cout << "Enter price per $100: ";
	std::cin >> pricePer100;
	
	assessmentValue = propertyValue * assessedPercent - 5000;
	propertyTax = (((assessmentValue * 100) * (pricePer100 * 100)) / 10000) / 100;
	
	std::cout << "Assessment Value: " << assessmentValue << '\n';
	std::cout << "Property Tax: " << propertyTax << '\n';
	std::cout << "Quartly Payment: " << (propertyTax/4) << '\n';
	
	return 0;
}
