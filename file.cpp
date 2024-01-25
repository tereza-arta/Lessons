#include <iostream>

int main(){

	char op;
	float num1, num2;
 
	std::cout << "Please input operator(+, -, *, /)\t";
	std::cin >> op;
	std::cout << "Enter two numbers(num1 num2)\t";
	std::cin >> num1 >> num2;
 
	switch (op) {
		case '+':
			std::cout << num1 + num2;
        		break;
		case '-':
			std::cout << num1 - num2;
        		break;
    		case '*':
			std::cout << num1 * num2;
        		break;
    		case '/':
			std::cout << num1 / num2;
        		break;
    		default:
			std::cout << "Error! operator is not correct";
    		}
    		std::cout << std::endl;    

    		return 0;
}
