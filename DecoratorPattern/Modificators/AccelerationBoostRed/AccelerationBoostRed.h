#pragma once
#include "../ModificatorBase.h"

class AccelerationBoostRed : public ModificatorBase
{
public:
	AccelerationBoostRed(ICar *car);
	virtual inline double getAcceleration() const
	{
		return car_->getAcceleration() * ACCELERATION_BOOST_RED_MULTIPLIER;
	}

};

