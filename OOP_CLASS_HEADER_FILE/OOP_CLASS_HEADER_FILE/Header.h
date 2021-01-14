#pragma once

class Car {
public:
	int vel = 0;
	int velMax;
	std::string type;
	Car(int tp);
	void Print();
private:
};

Car::Car(int tp) {
	if (tp == 1) {
		velMax = 380;
		type = "Sport";
	}
	else if (tp == 2) {
		velMax = 180;
		type = "Classic";
	}
	else if (tp == 3) {
		velMax = 100;
		type = "Old";
	}
}

void Car::Print() {
	std::cout << std::endl;
	std::cout << "Model...........:" << type   << std::endl;
	std::cout << "Max velocity....:" << velMax << std::endl;
	std::cout << "Current velocity:" << vel    << std::endl;
	std::cout << std::endl;
}


