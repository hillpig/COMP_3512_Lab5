#pragma once
#include "AbstractOperation.hpp"

class AdditionOperation : AbstractOperation {

	static const char OPERATION_CODE{ '+' };

	AdditionOperation() : AbstractOperation(OPERATION_CODE) {}

};