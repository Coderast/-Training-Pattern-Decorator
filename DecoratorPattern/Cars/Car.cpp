#include "Car.h"

Car::Car()
{
	maxSpeed_ = 0;
	acceleration_ = 0;
}

Car::Car(double maxSpeed, double acceleration)
{
	setMaxSpeed(maxSpeed);
	setAcceleration(acceleration);
}
