#include<iostream>

void Log(const char* message);

void InitLog() {
	Log("Hello header file");
	std::cout << std::endl;
}

void Log(const char* message) {
	std::cout << message << std::endl;
}