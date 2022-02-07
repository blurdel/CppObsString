#include "SupervisedString.h"


SupervisedString::SupervisedString() {
}

SupervisedString::~SupervisedString() {
}

void SupervisedString::add(IObserveString& pObs) {
	mObservers.insert(&pObs);
}

void SupervisedString::remove(IObserveString& pObs) {
	mObservers.erase(&pObs);
}

void SupervisedString::notifyObservers() {
	for (const auto& obs : mObservers) {
		obs->update(*this);
	}
}

const std::string& SupervisedString::getString() const {
	return mString;
}

void SupervisedString::setString(std::string pString) {
	mString = pString;
	notifyObservers();
}
