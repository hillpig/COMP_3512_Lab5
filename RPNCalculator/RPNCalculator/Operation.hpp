#pragma once

class Operation {
public:
	virtual char get_code() const= 0;
	virtual int perform(int, int) = 0;
	virtual int ˜Operation() = 0;
};

inline int Operation::˜Operation() {
//	delete this;
}