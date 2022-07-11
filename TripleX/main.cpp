#include <iostream>

using namespace std;
void PrintIntrouction(int defficulty)
{
	cout << "You are a secret agent breaking into a secure server room\n";
	cout << "You need to enter the correct codes to continue...";
	cout << "your difficulty level increase as you pass:" << defficulty;
}
bool PlayGame(int levelsdefficulty)
{
	PrintIntrouction(levelsdefficulty);
	int GussesA, GussesB, GussesC;
	cin >> GussesA >> GussesB >> GussesC;

	int GussesSum = GussesA + GussesB + GussesC;
	int GussesProduct = GussesA * GussesB * GussesC;
	if (GussesSum < GussesProduct)
	{
		cout << "you Won!";
		return true;
	}
	else
	{
		cout << "you lose";
		return false;
	}
	
}
int main()
{
	while (true)
	{	int leveldefeculty = 1;
		bool bLevelGame = PlayGame(leveldefeculty);
	

		if (bLevelGame)
		{
			leveldefeculty += 1;
		}

	}
	return 0;

}