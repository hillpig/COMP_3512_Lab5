#pragma once
#include <iostream>
#include <string>

class Operation {
public:
	char c;

	virtual char get_code() const= 0;
	virtual int perform(int, int) = 0;
	virtual int ˜Operation() = 0;
};

inline int Operation::˜Operation() {
//	delete this;
}