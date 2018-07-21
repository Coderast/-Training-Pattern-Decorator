#include "ModificatorBase.h"
#include <stdexcept>
ModificatorBase::ModificatorBase(ICar * car)
{
	if (car != nullptr) {
		car_ = car;
		return;
	}
	throw std::invalid_argument("Null Pointer Exception! Car should be exist!");
}
