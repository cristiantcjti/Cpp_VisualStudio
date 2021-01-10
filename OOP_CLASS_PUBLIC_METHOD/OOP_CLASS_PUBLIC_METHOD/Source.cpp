#include <iostream>

using namespace std;

class Car {
	public:
		int velMax;
		string type;
		void ModelType(int tp);
	private:
};

void Car::ModelType(int tp) {
	if (tp == 1) {
		this->velMax = 380;
		this->type = "Sport";
	}
	else if (tp == 2) {
		this->velMax = 180;
		this->type = "Classic";
	}
	else if (tp == 3) {
		this->velMax = 100;
		this->type = "Old";
	}
	cout << endl;
	cout << "Model.......:" << this->type << endl;
	cout << "Max velocity:" << this->velMax << endl;
	cout << endl;
}

int main() {
	Car* CarType1 = new Car();
	Car* CarType2 = new Car();
	Car* CarType3 = new Car();

	CarType1->ModelType(1);
	CarType2->ModelType(2);
	CarType3->ModelType(3);

	return 0;
}