#ifndef IOBSERVESTRING_H_
#define IOBSERVESTRING_H_


class SupervisedString;

class IObserveString {
public:
	IObserveString() {}
	virtual ~IObserveString() {}

	virtual void update(const SupervisedString&) = 0;

};

#endif
