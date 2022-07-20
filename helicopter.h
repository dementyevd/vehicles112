#pragma once
#include"airVehicle.h"

class Helicopter :public AirVehicle {
public:
	Helicopter(int maxSpeed, const string& model, int cntPass, const string& color, int maxHeight) :
		AirVehicle(maxSpeed, model, cntPass, color, maxHeight) {}
};
