#pragma once

class ICar
{
public:
	virtual inline void setSpeed(double) = 0;
	virtual inline double getSpeed() const = 0;

	virtual inline void setAcceleration(double) = 0;
	virtual inline double getAcceleration() const = 0;
};