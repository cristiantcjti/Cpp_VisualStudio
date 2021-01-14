#include <iostream>
#include "Header.h" // ADDING THE CAR CLASS

using namespace std;

int main() {
	Car* CarType1 = new Car(3);
	Car* CarType2 = new Car(1);
	Car* CarType3 = new Car(2);

	CarType1->vel = 200;
	CarType2->vel = 150;
	CarType3->vel = 80;

	CarType1->Print();
	CarType2->Print();
	CarType3->Print();

	return 0;
}