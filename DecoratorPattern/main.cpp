#include <iostream>
#include "Modificators/SpeedBoostBlue/SpeedBoostBlue.h"
int main()
{
	Car someCar(20., 5.);
	SpeedBoostBlue someCarBoosted(&someCar);
	std::cout << someCar.getSpeed() << std::endl;
	std::cout << someCarBoosted.getSpeed() << std::endl;

	system("pause");
	return 0;
}