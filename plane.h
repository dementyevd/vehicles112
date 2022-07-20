#pragma once
#include"airVehicle.h"

class Plane :public AirVehicle {
public:
	Plane(int maxSpeed, const string& model, int cntPass, const string& color, int maxHeight) :
		AirVehicle(maxSpeed, model, cntPass, color, maxHeight) {}
};
