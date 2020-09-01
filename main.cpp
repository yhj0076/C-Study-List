#include <iostream>
#include "RSP_Master.h"

int main()
{
	int P_weapon = 0;
	RSP_Master RSP;
	std::cout << "------가위바위보------" << std::endl;
	std::cout << "바위\t1" << std::endl << "가위\t2" << std::endl << "보\t3" << std::endl;
	std::cin >> P_weapon;
	RSP.RSP((int)P_weapon);

	return 0;
}