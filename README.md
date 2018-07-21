# In short
My training project for learning pattern "Decorator" <br>
You have car and you can give her some bonuses for speed or acceleration.

# Structure
`ICar` -> [`BatyaCar`, `ModificatorBase`] 

`ModificatorBase` -> <br>
[ <br>
`AccelerationBoostBlue`, **x**2 <br>
`AccelerationBoostRed`,  **x**3 <br>
`SpeedBoostBlue`,        **x**2 <br>
`SpeedBoostRed`          **x**3 <br>
]

# Example
You have some car with 5.0 speed and 20.0 acceleration: <br>
`Car someCar(5., 20.);`

So, when this car pick up Blue Speed Bonus on her way, you can give this bonus on certain term:  <br>
`SpeedBoostBlue boostedCar(&someCar);`

So, you don't change the car, but you get boosted version. <br>
`(int) (boostedCar.getSpeed() / someCar.getSpeed()) == 2` _// true_
