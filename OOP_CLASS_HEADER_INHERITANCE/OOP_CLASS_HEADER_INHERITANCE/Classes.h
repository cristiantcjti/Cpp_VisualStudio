#pragma once

class Vehicle{
	public:
		int vel;
		std::string shield;
		int wheels;
		void setType(int tp);
		void setvelMax(int vm);
		void setnewVehicle(bool nw);
		void print();
	private:
		std::string type; // 1=Bike 2=Car 3=Lorry
		int velMax;
		std::string newVehicle;
};

void Vehicle::setType(int tp) {
	if (tp == 1) {
		type = "Bike";
	}
	else if (tp == 2) {
		type = "Car";
	}
	else if (tp == 3) {
		type = "Lorry";
	}
}

void Vehicle::setvelMax(int vm) {
	velMax = vm;
}

void Vehicle::setnewVehicle(bool nw) {
	if (nw) {
		newVehicle = "True";
	}
	else {
		newVehicle = "False";
	}
}

void Vehicle::print() {
	std::cout << "Type of Vehicle.: " << type   << std::endl;
	std::cout << "Max Velocity....: " << velMax << std::endl;
	std::cout << "Number of Wheels: " << wheels << std::endl;
	std::cout << "New Vehicle.....: " << newVehicle << std::endl;
	std::cout << "There is shield.: " << shield << std::endl;
	std::cout << std::endl;
}

class Bike :public Vehicle {
public:
	Bike();
};

class Car :public Vehicle {
public:
	Car();
};

class Lorry :public Vehicle {
public:
	Lorry();
};

Bike::Bike() {
	vel = 0;
	shield = "False";
	wheels = 2;
	setType(1);
	setvelMax(230);
	setnewVehicle(true);
}

Car::Car() {
	vel = 0;
	shield = "True";
	wheels = 4;
	setType(2);
	setvelMax(280);
	setnewVehicle(true);
}

Lorry::Lorry() {
	vel = 0;
	shield = "True";
	wheels = 10;
	setType(3);
	setvelMax(140);
	setnewVehicle(true);
}

