#pragma once

class Car
{
protected:
	double maxSpeed_;
	double acceleration_;
public:
	Car();
	Car(double maxSpeed, double acceleration);

	inline void setMaxSpeed(double maxSpeed)
	{
		maxSpeed_ = maxSpeed;
	}
	inline double getMaxSpeed() const
	{
		return maxSpeed_;
	}

	inline void setAcceleration(double acceleration)
	{
		acceleration_ = acceleration;
	}
	inline double getAcceleration() const
	{
		return acceleration_;
	}


};