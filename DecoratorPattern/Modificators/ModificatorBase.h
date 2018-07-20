#pragma once
#include "../Cars/Car.h"

class ModificatorBase : public Car
{
protected:
	Car *car_;
public:
	ModificatorBase(Car *car);
	
};