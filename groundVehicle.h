#pragma once
#include"vehicles.h"

enum class chassis {
	crawler, wheeled, rail
};

class groundVehicle :public vehicles {
	chassis type;
public:
	groundVehicle(int maxSpeed, const string& model, int cntPass, const string& color, chassis type) :vehicles(maxSpeed, model, cntPass, color) {
		this->type = type;
	}

	void setType(chassis type) {
		this->type = type;
	}

	chassis getType() const {
		return this->type;
	}

	void info()const override {
		vehicles::info();
		cout << "Type: ";
		switch (type)
		{
		case chassis::crawler:
			cout << "Crawler" << endl;
			break;
		case chassis::wheeled:
			cout << "Wheeled" << endl;
			break;
		case chassis::rail:
			cout << "Rail" << endl;
			break;
		default:
			break;
		}
	}
};
