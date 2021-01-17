#include<iostream>
#include"Classes.h"

using namespace std;

int main() {
	Class1* cl1 = new Class1();
	Class2* cl2 = new Class2();
	MultInheritance* MltCl = new MultInheritance;

	cl1->printcl1();
	cl2->printcl2();
	cout << "The following comes from a multiple inheritance class:" << endl << endl;
	MltCl->printcl1();
	MltCl->printcl2();
}