#pragma once
#include "Operation.hpp"

class AbstractOperation : Operation {

private:
	char operation_type;

public:
	AbstractOperation() = default;
	AbstractOperation(char c) { operation_type = c; }
	char get_code() const { return operation_type; }
	virtual ~AbstractOperation() = 0;
};

inline AbstractOperation::~AbstractOperation() {}