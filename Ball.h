#pragma once
class FBall
{
public:
	int GetNumber(){return Number;}
	void SetNumber(int Value)
	{
		if (Value > 0)
		{
			Number = Value;
		}
	}

private:
	int Number;
};

