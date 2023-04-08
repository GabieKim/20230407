#include <iostream>
#include "Pocket.h"
#include "Ball.h"
using namespace std;

int main()
{
	// FPocket 클래스의 객체를 생성해서 포인터에 넣음
	FPocket* Pocket = new FPocket();

	for (int i = 0; i < 45; ++i)
	{
		FBall Ball;
		Ball.SetNumber(i + 1);
		Pocket->Push(Ball);
	}

	Pocket->Shuffle();

	for (int i = 0; i < 6; ++i)
	{
		FBall Ball = Pocket->PickUp();
		cout << Ball.GetNumber() << endl;
	}

	// 맨위에서 new한 것 딜리트함
	delete Pocket;

	return 0;
}