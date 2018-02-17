#pragma once
#include "AbstractOperation.hpp"

class SubtractOperation : public AbstractOperation {



public:
	static const char OPERATION_CODE{ '-' };

	SubtractOperation() : AbstractOperation(OPERATION_CODE) {};

	virtual int perform(int a, int b) const override { return a - b; };

	virtual inline ~SubtractOperation() {};
};

