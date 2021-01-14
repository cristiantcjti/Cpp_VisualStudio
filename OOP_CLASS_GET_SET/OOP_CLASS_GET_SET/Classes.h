#pragma once
#include<string>
class Vehicle {
public:
	int vel;
	int Type;
	Vehicle(int tp);
//	string getName();
	int getVelMax();
	bool getStatus();
	void setStatus(int On);
private:
	void setVelMax(int vm);
	std::string name="";
	int velMax;
	bool On;
};

Vehicle::Vehicle(int tp) {
	if (tp == 1) {
		name = "Car";
		setVelMax(150);
	}
	else if (tp == 2) {
		name = "Airplane";
		setVelMax(900);
	}
	if (tp == 3) {
		name = "Ship";
		setVelMax(80);
	}
	setStatus(0);
}

int Vehicle::getVelMax() {
	return velMax;
}

void Vehicle::setVelMax(int vm) {
	velMax = vm;
}

bool Vehicle::getStatus() {
	return On;
}

void Vehicle::setStatus(int status) {
	if (status == 1) {
		On = true;
	}
	else if (status == 0) {
		On = false;
	}
}
