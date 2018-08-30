// calcuates the average rainfall for three months

#include<iostream>
#include<string>

int getCorrectMonth(int i){
	if(i < 12) return i;
	else return i - 12;
}

int main(){
	int iMonth, cMonth;
	double rainfall1, rainfall2, rainfall3;
	std::string months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	std::cout << "Enter in number with cooresponding month for starting month\n";
	for(int i = 0; i < 12; i++) std::cout << i << ". " << months[i] << "\n";
	std::cout << "> ";
	std::cin >> iMonth;
	cMonth = iMonth;
	
	if(iMonth > 11 || iMonth < 0){
		std::cout << "ERR: invalid month";
		return 1;
	}
	
	
	std::cout << "Entering the corresponding rain fall with month\n";
	std::cout << months[getCorrectMonth(cMonth)] << ": ";
	cMonth++;
	std::cin >> rainfall1;
	std::cout << months[getCorrectMonth(cMonth)] << ": ";
	cMonth++;
	std::cin >> rainfall2;
	std::cout << months[getCorrectMonth(cMonth)] << ": ";
	cMonth++;
	std::cin >> rainfall3;
	
	double avg = (rainfall1 + rainfall2 + rainfall3) / 3;
	
	std::cout << "AVG RAINFALL: " << avg << '\n';
	return 0;
}
