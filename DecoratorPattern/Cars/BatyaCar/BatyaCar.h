#pragma once
#include "../ICar.h"
class BatyaCar : public ICar
{
protected:
	double speed_;
	double acceleration_;
public:
	BatyaCar();
	BatyaCar(double speed, double acceleration);

	virtual inline void setSpeed(double speed)
	{
		speed_ = speed;
	}
	virtual inline double getSpeed() const
	{
		return speed_;
	}

	virtual inline void setAcceleration(double acceleration)
	{
		acceleration_ = acceleration;
	}
	virtual inline double getAcceleration() const
	{
		return acceleration_;
	}


};