#pragma once
#include "Operation.hpp"

class AbstractOperation : public Operation {

private:
	char operation_type;

public:
	AbstractOperation(char c) : operation_type{ c } {  };
	virtual char get_code() const override { return operation_type; };
	virtual inline ~AbstractOperation() {};
};
