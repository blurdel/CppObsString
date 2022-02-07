#ifndef COUNTER_H_
#define COUNTER_H_

#include <iostream>
#include "IObserveString.h"
#include "SupervisedString.h"


class Counter : public virtual IObserveString
{
public:
	Counter();
	virtual ~Counter();

	void update(const SupervisedString& pRef) override {
		std::cout << pRef.getString().length() << std::endl;
	}

};

#endif
