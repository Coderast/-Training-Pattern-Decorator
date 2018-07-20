#include "Car.h"

Car::Car()
{
	speed_ = 0;
	acceleration_ = 0;
}

Car::Car(double speed, double acceleration)
{
	setSpeed(speed);
	setAcceleration(acceleration);
}
