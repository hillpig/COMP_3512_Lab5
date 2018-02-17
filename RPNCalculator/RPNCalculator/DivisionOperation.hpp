#pragma once
#include "AbstractOperation.hpp"

class DivisionOperation : AbstractOperation {

	static const char OPERATION_CODE{ '/' };

	DivisionOperation() : AbstractOperation(OPERATION_CODE) {}


};