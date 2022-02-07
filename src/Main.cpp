#include <iostream>
using namespace std;

#include "SupervisedString.h"
#include "Reflector.h"
#include "Counter.h"


int main()
{
	SupervisedString str;
	Reflector refl;
	Counter cntr;

	str.add(refl);
	str.setString("Hello World!");
	str.remove(refl);

	str.add(cntr);
	str.setString("Hello World!");
	str.remove(cntr);

	return 0;
}
