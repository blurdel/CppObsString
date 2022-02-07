#ifndef SUPERVISEDSTRING_H_
#define SUPERVISEDSTRING_H_

#include <set>
#include <string>
#include "IObserveString.h"


class SupervisedString {
public:
	SupervisedString();
	virtual ~SupervisedString();

	void add(IObserveString&);
	void remove(IObserveString&);
	void notifyObservers();

	const std::string& getString() const;
	void setString(std::string pString);


private:
	std::string mString;
	std::set<IObserveString*> mObservers;
};

#endif
