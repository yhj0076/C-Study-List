#include <iostream>
#include "RSP_Master.h"

int main()
{
	int P_weapon = 0;
	RSP_Master RSP;
	std::cout << "------����������------" << std::endl;
	std::cout << "����\t1" << std::endl << "����\t2" << std::endl << "��\t3" << std::endl;
	std::cin >> P_weapon;
	RSP.RSP((int)P_weapon);

	return 0;
}