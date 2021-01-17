#pragma once

class Class1 {
public:
	void printcl1();
};

void Class1::printcl1() {
	std::cout << "It is a property from class 1!" << std::endl << std::endl;;
}

class Class2 {
public:
	void printcl2();
};

void Class2::printcl2() {
	std::cout << "It is a property from class 2!" << std::endl << std::endl;;
}

class MultInheritance:public Class1, public Class2 {
};