#include<iostream>
#include "Classes.h"

using namespace std;

void checkStatus(bool status, int Vehicle);

int main() {

	Vehicle* v1 = new Vehicle(1);
	Vehicle* v2 = new Vehicle(2);
	Vehicle* v3 = new Vehicle(3);

	cout << "Max velocity Vehicle 1: " << v1->getVelMax() << endl;
	cout << "Max velocity Vehicle 2: " << v2->getVelMax() << endl;
	cout << "Max velocity Vehicle 3: " << v3->getVelMax() << endl;
	cout << endl;

	checkStatus(v1->getStatus(), 1);
	checkStatus(v2->getStatus(), 2);
	checkStatus(v3->getStatus(), 3);

	v1->setStatus(1);
	v2->setStatus(1);
	v3->setStatus(1);
	cout << endl;
	cout <<"Let's turn on the vehicles!" << endl;
	cout << endl;
	checkStatus(v1->getStatus(), 1);
	checkStatus(v2->getStatus(), 2);
	checkStatus(v3->getStatus(), 3);

	cout << endl;
	return 0;
}

void checkStatus(bool On,int Vehicle) {
	if (On) {
		cout << "Vehicle " << Vehicle << " is On. " << endl;
	}
	else {
		cout << "Vehicle " << Vehicle << " is Off. " << endl;
	}
}