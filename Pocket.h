#include <vector>
#include "Ball.h"
using namespace std;


class FPocket
{
public:
	FPocket() { }

	void Shuffle();
	FBall PickUp();
	void Push(FBall NewBall);

private:
	vector <FBall> Balls ;
};

