#include <iostream>
#include "Modificators/SpeedBoostBlue/SpeedBoostBlue.h"
#include "Modificators/AccelerationBoostRed/AccelerationBoostRed.h"
#include "Cars/BatyaCar/BatyaCar.h"
int main()
{
	BatyaCar someCar(20., 5.);
	SpeedBoostBlue someCarBoosted(&someCar);

	std::cout << someCar.getSpeed() << std::endl;
	std::cout << someCarBoosted.getSpeed() << std::endl << std::endl;

	AccelerationBoostRed someCarVeryBoosted(&someCarBoosted);

	std::cout << someCar.getAcceleration() << std::endl;
	std::cout << someCarBoosted.getAcceleration() << std::endl;
	std::cout << someCarVeryBoosted.getAcceleration() << std::endl;


	system("pause");
	return 0;
}