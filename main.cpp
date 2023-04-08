#include <iostream>
#include "Pocket.h"
#include "Ball.h"
using namespace std;

int main()
{
	// FPocket Ŭ������ ��ü�� �����ؼ� �����Ϳ� ����
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

	// �������� new�� �� ����Ʈ��
	delete Pocket;

	return 0;
}