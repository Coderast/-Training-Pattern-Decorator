#pragma once
#include "../ModificatorBase.h"

class AccelerationBoostBlue : public ModificatorBase
{
public:
	AccelerationBoostBlue(Car *car);
	virtual inline double getAcceleration() const
	{
		return car_->getAcceleration() * ACCELERATION_BOOST_BLUE_MULTIPLIER;
	}

};
