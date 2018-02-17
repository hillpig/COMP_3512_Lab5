#pragma once
#include "AbstractOperation.hpp"

class MultiplicationOperation : AbstractOperation {

	static const char OPERATION_CODE{ '*' };

	MultiplicationOperation() : AbstractOperation(OPERATION_CODE) {}
};