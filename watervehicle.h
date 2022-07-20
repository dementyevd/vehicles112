#pragma once
#include "vehicles.h"

class WaterVehicle :public vehicles {
	int draught;
public:
	WaterVehicle(int maxSpeed, const string& model, int cntPass, const string& color, int draught) :
		vehicles(maxSpeed, model, cntPass, color) {
		this->draught = draught;
	}
	void setDraught(int draught) {
		this->draught = draught;
	}
	int getDraught()const {
		return this->draught;
	}
	void info()const override{
		vehicles::info();
		cout << "Draught: " << this->draught << endl;
	}
};
