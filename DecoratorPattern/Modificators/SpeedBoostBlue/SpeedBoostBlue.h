#pragma once
#include "../ModificatorBase.h"

class SpeedBoostBlue : public ModificatorBase
{
public:
	SpeedBoostBlue(Car *car);
	virtual inline double getSpeed() const
	{
		return car_->getSpeed() * 2;
	}
};

