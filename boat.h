#pragma once
#include"watervehicle.h"

class Boat :public WaterVehicle {
public:
	Boat(int maxSpeed, const string& model, int cntPass, const string& color, int draught):
		WaterVehicle(maxSpeed,model,cntPass,color, draught){}
};
