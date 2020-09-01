#include "RSP_Master.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

int RSP_Master::RSP(int weapon)
{
	srand((unsigned int)time(NULL));
	int MasterChoice = (rand()%3)+1;

	while (true)
	{
		switch (weapon)
		{
		case 1:
			std::cout << "플레이어 : 바위" << std::endl;
			break;

		case 2:
			std::cout << "플레이어 : 가위" << std::endl;
			break;

		case 3:
			std::cout << "플레이어 : 보" << std::endl;
			break;
		default:
			std::cout << "다른거 내면 반칙임 ㅅㄱ 너가 졌어" << std::endl;
			_exit(1);

		}		
	}

	switch (MasterChoice)
	{
	case 1:
		std::cout << "컴퓨터 : 바위" << std::endl;
		break;

	case 2:
		std::cout << "컴퓨터 : 가위" << std::endl;
		break;

	case 3:
		std::cout << "컴퓨터 : 보" << std::endl;
		break;
	default:
		std::cout << "ERROR : 컴퓨터가 알 수 없는 수를 두었습니다." << std::endl;
		_exit(1);
	}

	if ((weapon == (MasterChoice - 1)) | ((MasterChoice + 2) == weapon))	//플레이어의 승
	{
		std::cout << "플레이어의 승!! 축하합니다!!!" << std::endl;
	}
	else if ((MasterChoice == (weapon - 1)) | ((weapon + 2) == MasterChoice))			//컴퓨터의 승
	{
		std::cout << "컴퓨터의 승!! 안타깝습니다ㅠㅠ" << std::endl;
	}
	else
	{
		std::cout << "비겼습니다." << std::endl;
	}

	

	return weapon;
}


RSP_Master::~RSP_Master()
{
}
