#pragma once
#include "AbstractOperation.hpp"

class AdditionOperation : public AbstractOperation {



public:
	static const char OPERATION_CODE{ '+' };

	AdditionOperation() : AbstractOperation(OPERATION_CODE) {};

	virtual int perform(int a, int b) const override { return a + b; };

	virtual inline ~AdditionOperation() {};
};

