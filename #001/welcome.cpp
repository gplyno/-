#include <iostream>
#include <string>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string name;

	std::cout << "введите ваше имя" << std::endl;
	std::cin >> name;

	std::cout << "добро пожаловать на станцию «Полярис», " << name << std::endl;
	return 0;
}
