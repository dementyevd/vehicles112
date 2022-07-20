#pragma once
#include "vehicles.h"

class AirVehicle :public vehicles {
	int maxHeight;
public:
	AirVehicle(int maxSpeed, const string& model, int cntPass, const string& color, int maxHeight) :
		vehicles(maxSpeed, model, cntPass, color) {
		this->maxHeight = maxHeight;
	}
	void setMaxHeight(int maxHeight) {
		this->maxHeight = maxHeight;
	}
	int getMaxHeight()const {
		return this->maxHeight;
	}
	void info()const override {
		vehicles::info();
		cout << "maxHeight: " << this->maxHeight << endl;
	}
};

