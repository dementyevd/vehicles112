#pragma once
#include "watervehicle.h"

class Submarine :public WaterVehicle {
public:
	Submarine(int maxSpeed, const string& model, int cntPass, int draught) :
		WaterVehicle(maxSpeed, model, cntPass, "yellow", draught) {}
};
