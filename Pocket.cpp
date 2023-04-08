#include <ctime>
#include <conio.h>
#include <algorithm> // random_shuffle�Լ� ������
#include "Pocket.h"


void FPocket::Shuffle()
{	
	srand((unsigned int)time(nullptr));

	random_shuffle(Balls.begin(), Balls.end());
}

// ���� �� �տ� �ִ� ���� ���� ������ �� ���� ���Ϳ��� �����, �� ���� ������
FBall FPocket::PickUp()
{
	FBall PickUpBall = *(Balls.begin());
	Balls.erase(Balls.begin());

	return PickUpBall;
}


void FPocket::Push(FBall NewBall)
{
	// Balls ���� ���� NewBall�� �߰� ����
	Balls.push_back(NewBall);
}

