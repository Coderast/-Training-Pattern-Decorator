#pragma once
#include "../Cars/ICar.h"

class ModificatorBase : public ICar
{
protected:
	ICar *car_;
public:
	ModificatorBase(ICar *car);

	virtual inline void setSpeed(double speed)
	{
		car_->setSpeed(speed);
	}
	virtual inline double getSpeed() const
	{
		return car_->getSpeed();
	}

	virtual inline void setAcceleration(double acceleration)
	{
		car_->setAcceleration(acceleration);
	}
	virtual inline double getAcceleration() const
	{
		return car_->getAcceleration();
	}
};

#define SPEED_BOOST_BLUE_MULTIPLIER 2
#define SPEED_BOOST_RED_MULTIPLIER 3

#define ACCELERATION_BOOST_BLUE_MULTIPLIER 2
#define ACCELERATION_BOOST_RED_MULTIPLIER 3