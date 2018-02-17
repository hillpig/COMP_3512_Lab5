#pragma once
#include "AbstractOperation.hpp"

class AdditionOperation : AbstractOperation {

	static const char OPERATION_CODE{ '+' };

	AdditionOperation() : AbstractOperation(OPERATION_CODE) {}

	virtual int perform(int a, int b) override { return a + b; }
};