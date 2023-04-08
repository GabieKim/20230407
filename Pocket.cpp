#include <ctime>
#include <conio.h>
#include <algorithm> // random_shuffle함수 쓰려고
#include "Pocket.h"


void FPocket::Shuffle()
{	
	srand((unsigned int)time(nullptr));

	random_shuffle(Balls.begin(), Balls.end());
}

// 벡터 맨 앞에 있는 볼을 집어 꺼내서 그 볼을 벡터에서 지우고, 그 볼을 리턴함
FBall FPocket::PickUp()
{
	FBall PickUpBall = *(Balls.begin());
	Balls.erase(Balls.begin());

	return PickUpBall;
}


void FPocket::Push(FBall NewBall)
{
	// Balls 벡터 끝에 NewBall을 추가 해줌
	Balls.push_back(NewBall);
}

