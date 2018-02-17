#pragma once
#include "AbstractOperation.hpp"

class SubtractOperation : AbstractOperation {

	static const char OPERATION_CODE{ '-' };

	SubtractOperation() : AbstractOperation(OPERATION_CODE) {}

	virtual int perform(int a, int b) override { return a - b; }
};