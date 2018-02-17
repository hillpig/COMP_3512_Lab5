#pragma once
#include "AbstractOperation.hpp"

class MultiplicationOperation : public AbstractOperation {

public:
	static const char OPERATION_CODE{ '*' };

	MultiplicationOperation() : AbstractOperation(OPERATION_CODE) {}

	virtual int perform(int a, int b) const override { return a * b; }

	virtual inline ~MultiplicationOperation() {};
};

