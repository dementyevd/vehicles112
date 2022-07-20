#pragma once
#include"groundVehicle.h"

enum class engine {
	petrol, diesel, electro
};

enum class body {
	sedan, coupe, wegon
};

class wheel {
	int diam;
public:
	wheel(int diam = 14) {
		this->diam = diam;
	}
	void setDiam(int diam) {
		this->diam = diam;
	}
	int getDiam() const {
		return this->diam;
	}
};

class car :public groundVehicle {
	wheel s[4];
	body bd;
	engine eng;
public:
	car(int maxSpeed, const string& model, int cntPass, const string& color, chassis type, body bd, engine eng, int diam = 14)
		:groundVehicle(maxSpeed, model, cntPass, color, type) {
		this->bd = bd;
		this->eng = eng;
		for (size_t i = 0; i < 4; i++)
		{
			this->s[i].setDiam(diam);
		}
	}
	void setWheel(int diam) {
		for (size_t i = 0; i < 4; i++)
		{
			this->s[i].setDiam(diam);
		}
	}
	void setBody(body bd) {
		this->bd = bd;
	}
	void setEngine(engine eng) {
		this->eng = eng;
	}
	int getWhell()const {
		return this->s->getDiam();
	}
	body getBody() const {
		return this->bd;
	}
	engine getEngine() const {
		return this->eng;
	}
	void info() const override {
		groundVehicle::info();
		cout << "Wheel diam: " << this->getWhell() << endl;
		cout << "Body: ";
		switch (bd)
		{
		case body::sedan:
			cout << "Sedan" << endl;
			break;
		case body::coupe:
			cout << "Coupe" << endl;
			break;
		case body::wegon:
			cout << "Wegon" << endl;
			break;
		default:
			break;
		}
		cout << "Engine: ";
		switch (eng)
		{
		case engine::petrol:
			cout << "Petrol" << endl;
			break;
		case engine::diesel:
			cout << "Diesel" << endl;
			break;
		case engine::electro:
			cout << "Electro" << endl;
			break;
		default:
			break;
		}
	}
};
