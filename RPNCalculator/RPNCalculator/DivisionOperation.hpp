#pragma once
#include "AbstractOperation.hpp"

class DivisionOperation : public AbstractOperation {



public:
	static const char OPERATION_CODE{ '/' };

	DivisionOperation() : AbstractOperation(OPERATION_CODE) {}

	virtual int perform(int a, int b) const override { return a / b; }

	virtual inline ~DivisionOperation() {};
};

