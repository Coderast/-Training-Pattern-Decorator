#pragma once

class Car
{
protected:
	double speed_;
	double acceleration_;
public:
	Car();
	Car(double speed, double acceleration);

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