#include <iostream>

using namespace std;
void PrintIntrouction(int defficulty)
{
	cout << "You are a secret agent breaking into a secure server room\n";
	cout << "You need to enter the correct codes to continue...";
	cout << "your difficulty level increase as you pass: " << defficulty<<endl;
}
bool PlayGame(int levelsdefficulty)
{
	PrintIntrouction(levelsdefficulty);
	int GussesA = rand()%1+levelsdefficulty+1, GussesB = rand()%1+levelsdefficulty+1, GussesC = rand()%1+levelsdefficulty+1;
	int CodeVal = GussesA + GussesB + GussesC;
	int ProductVal = GussesA * GussesB * GussesC;
	
	cout << "Enter any three Number in the Code";
	cout << "\n The Code are added up to :" << CodeVal;
	cout << "\n THe Code Multiply to give :" << ProductVal <<endl;
	cin >> GussesA >> GussesB >> GussesC;
	int GussesSum = GussesA + GussesB + GussesC;
	int GussesProduct = GussesA * GussesB * GussesC;
	if (CodeVal == GussesSum && ProductVal ==GussesProduct)
	{
		cout << "you won";
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
	int minlevel = 1;
	int Maxlevel = 5;
	int levelDifficluty = 1;
	while (minlevel<=Maxlevel)
	{
		bool bLevelCompleted = PlayGame(levelDifficluty);
		if (bLevelCompleted)
		{
			++levelDifficluty;
		}
		minlevel++;
		return 0;
	}
	}
	