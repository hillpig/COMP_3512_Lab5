#pragma once
#include "AbstractOperation.hpp"

class MultiplicationOperation : AbstractOperation {

	static const char OPERATION_CODE{ '*' };

	MultiplicationOperation() : AbstractOperation(OPERATION_CODE) {}

	virtual int perform(int a, int b) override { return a * b; }
};