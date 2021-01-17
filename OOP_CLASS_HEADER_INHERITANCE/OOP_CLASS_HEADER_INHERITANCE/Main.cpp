#include<iostream>
#include "Classes.h"

using namespace std;

int main() {
	Bike* v1 = new Bike();
	Car* v2 = new Car();
	Lorry* v3 = new Lorry;

	v1->print();
	v2->print();
	v3->print();
}