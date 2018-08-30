// math tutor program

/**
 * This program is easily broken due limited time
 * if program break press ctrl-z, ctrl-d, ctrl-c
*/

// IMPORTANT: improved version here: https://github.com/BenTibnam/random-programs/blob/master/math-tutor.cpp
#include<iostream>
#include<stdlib.h>
#include<ctime>

double getAnswer(int op, int a, int b){
	if(op == 0) return a + b;
	else if(op == 1) return a - b;
	else if(op == 2) return a * b;
	else if(op == 3) return (double) a / (double) b;
	else return -1.0;
}

char getOperator(int op){
	// this is a really stupid function, but I don't want to fix it for a stupid program
	if(op == 0) return '+';
	else if(op == 1) return '-';
	else if(op == 2) return '*';
	else if(op == 3) return '/';
}

int main(){
	int op = -1;	// 0=add, 1=sub, 2=mult, 3=div
	
	std::cout << "Your personal math tutor\n";
	while(1){		// we'll figure condition later
		std::cout << "Enter the number cooresponding to the operator\n1. +\n2. -\n3. *\n4. /\nPress q to quit\n> ";
		std::cin >> op;
		op--;
		
		// checking to make sure op is vaild
		if(op < 0 && op > 3 && op != 'q'){
			std::cout << "ERR: Invaild operator\n";
			continue;
		}else if(op == 'q') break;
		else{
			while(1){
				srand(time(0));
				static int modules = 1;
				double i1 = (double)(rand() % modules++);
				double i2 = (double)(rand() % modules++);
				double answer = getAnswer(op, i1, i2);
				
				std::cout << i1 << '\n' << getOperator(op) << i2 << "\n_________\n\n";
				
				std::cout << "> ";
				
				double userAnswer;
				
				std::cin >> userAnswer;
				
				if(userAnswer == answer) std::cout << "Correct!\n";
				else if(userAnswer == (int) 'q') goto exit;
				else{
					std::cout << "Wrong :(\n";
					std::cout << i1 << '\n' << getOperator(op) << i2 << "\n_________\n\n" << answer << "\n";
					
				}
			}
		}
	}
	
	exit:
	return 0;
}
