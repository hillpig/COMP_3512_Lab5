#pragma once

class Operation {
public:
	virtual char get_code() const= 0;
	virtual int perform(int a, int b) const = 0;
	virtual inline ~Operation() {};
};
