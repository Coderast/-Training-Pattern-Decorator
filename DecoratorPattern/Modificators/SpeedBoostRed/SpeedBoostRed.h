#pragma once
#include "../ModificatorBase.h"

class SpeedBoostRed : public ModificatorBase
{
public:
	SpeedBoostRed(ICar *car);
	virtual inline double getSpeed() const
	{
		return car_->getSpeed() * SPEED_BOOST_RED_MULTIPLIER;
	}

};


