#pragma once
#include"airVehicle.h"

class AirBalloon :public AirVehicle {
public:
	AirBalloon(int maxSpeed, const string& model, int cntPass, const string& color, int maxHeight) :
		AirVehicle(maxSpeed, model, cntPass, color, maxHeight) {}
};
