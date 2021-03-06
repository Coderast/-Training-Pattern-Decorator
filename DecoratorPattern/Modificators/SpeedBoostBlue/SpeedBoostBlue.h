#pragma once
#include "../ModificatorBase.h"

class SpeedBoostBlue : public ModificatorBase
{
public:
	SpeedBoostBlue(ICar *car);
	virtual inline double getSpeed() const
	{
		return car_->getSpeed() * SPEED_BOOST_BLUE_MULTIPLIER;
	}
};

