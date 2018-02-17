#pragma once
#include "AdditionOperation.hpp"
#include "SubtractionOperation.hpp"
#include "MultiplicationOperation.hpp"
#include "DivisionOperation.hpp"
#include <iostream>
#include <stack> 




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
		int a{ ints.top };
		ints.pop;
		int b{ ints.top };
		ints.pop;
		result = op->perform(a, b);
		ints.push(result);
	}

	int process_form(std::string formular) {
	
	}
};