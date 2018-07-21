#include "BatyaCar.h"

BatyaCar::BatyaCar()
{
	speed_ = 0;
	acceleration_ = 0;
}

BatyaCar::BatyaCar(double speed, double acceleration)
{
	setSpeed(speed);
	setAcceleration(acceleration);
}
