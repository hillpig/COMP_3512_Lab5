#pragma once
#include "AbstractOperation.hpp"

class DivisionOperation : AbstractOperation {

	static const char OPERATION_CODE{ '/' };

	DivisionOperation() : AbstractOperation(OPERATION_CODE) {}

	virtual int perform(int a, int b) override { return a / b; }
};