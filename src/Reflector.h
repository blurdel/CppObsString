#ifndef REFLECTOR_H_
#define REFLECTOR_H_

#include <iostream>
#include "IObserveString.h"
#include "SupervisedString.h"


class Reflector : public virtual IObserveString
{
public:
	Reflector();
	virtual ~Reflector();

	void update(const SupervisedString& pRef) override {
		std::cout << pRef.getString() << std::endl;
	}

};

#endif
