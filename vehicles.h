#pragma once
#include <iostream>
#include <string>
using namespace std;

class vehicles {
	int maxSpeed;
	string model;
	int cntPass;
	string color;
public:
	vehicles(int maxSpeed, const string& model, int cntPass, const string& color) {
		this->maxSpeed = maxSpeed;
		this->model = model;
		this->cntPass = cntPass;
		this->color = color;
	}

	void setMaxSpeed(int maxSpeed) {
		this->maxSpeed = maxSpeed;
	}
	void setModel(const string& model) {
		this->model=model;
	}
	void setColor(const string& color) {
		this->color = color;
	}
	void setCntPass(int cntPass) {
		this->cntPass = cntPass;
	}

	string getColor() const {
		return this->color;
	}

	string getModel() const {
		return this->model;
	}

	int getMaxSpeed() const {
		return this->maxSpeed;
	}

	int getCntPass() const {
		return this->cntPass;
	}

	virtual void info() const {
		cout<<"Model: "<<this->model<<endl;
		cout << "Color: " << this->color << endl;
		cout << "MaxSpeed: " << this->maxSpeed << endl;
		cout << "cntPass: " << this->cntPass << endl;
	}
};

