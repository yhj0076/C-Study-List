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
			std::cout << "�÷��̾� : ����" << std::endl;
			break;

		case 2:
			std::cout << "�÷��̾� : ����" << std::endl;
			break;

		case 3:
			std::cout << "�÷��̾� : ��" << std::endl;
			break;
		default:
			std::cout << "�ٸ��� ���� ��Ģ�� ���� �ʰ� ����" << std::endl;
			_exit(1);

		}		
	}

	switch (MasterChoice)
	{
	case 1:
		std::cout << "��ǻ�� : ����" << std::endl;
		break;

	case 2:
		std::cout << "��ǻ�� : ����" << std::endl;
		break;

	case 3:
		std::cout << "��ǻ�� : ��" << std::endl;
		break;
	default:
		std::cout << "ERROR : ��ǻ�Ͱ� �� �� ���� ���� �ξ����ϴ�." << std::endl;
		_exit(1);
	}

	if ((weapon == (MasterChoice - 1)) | ((MasterChoice + 2) == weapon))	//�÷��̾��� ��
	{
		std::cout << "�÷��̾��� ��!! �����մϴ�!!!" << std::endl;
	}
	else if ((MasterChoice == (weapon - 1)) | ((weapon + 2) == MasterChoice))			//��ǻ���� ��
	{
		std::cout << "��ǻ���� ��!! ��Ÿ�����ϴ٤Ф�" << std::endl;
	}
	else
	{
		std::cout << "�����ϴ�." << std::endl;
	}

	

	return weapon;
}


RSP_Master::~RSP_Master()
{
}
