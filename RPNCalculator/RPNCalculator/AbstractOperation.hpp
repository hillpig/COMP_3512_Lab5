#pragma once


class AbstractOperation {

private:
	char operation_type;

public:
	AbstractOperation() = default;
	AbstractOperation(char c) { operation_type = c; }
	char get_code() const { return operation_type; }
	virtual int �AbstractOperation() = 0;
};

inline int �AbstractOperation() {}