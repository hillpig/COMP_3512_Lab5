#pragma once
#include "AdditionOperation.hpp"
#include "SubtractionOperation.hpp"
#include "MultiplicationOperation.hpp"
#include "DivisionOperation.hpp"
#include <iostream>
#include <stack> 
#include <sstream>


using namespace std;

class RPNCalculator {

private:
	int result;
	std::stack<int> ints;

	Operation * operation_type(char op) {
	
		switch (op)
		{
		case AdditionOperation::OPERATION_CODE:
			return new AdditionOperation();

		case SubtractOperation::OPERATION_CODE:
			return new SubtractOperation();

		case MultiplicationOperation::OPERATION_CODE:
			return new MultiplicationOperation();

		case DivisionOperation::OPERATION_CODE:
			return new DivisionOperation();
		default:
			break;
		}
	}


	void perform(Operation* op) {
		int a = ints.top();
		ints.pop();
		int b = ints.top();
		ints.pop();
		result = op->perform(a, b);
		ints.push(result);
	}

public:
	int process_form(std::string formular) {
		std::istringstream iss(formular);
		std::istringstream iss2;
		char c;
		int num;
		string second;
		while (iss.get(c)) {
			if ((isdigit(c)) || isblank(c)) {
				second += c;
			}
			else {
			
//				second += c;
				iss2.str(second);
				while (iss2 >> num) {
				
					ints.push(num);
				}
				perform(operation_type(c));
				iss2.clear();
				second.clear();
			}
		}

		return result;
	}
};