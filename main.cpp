/*
This Game Is A Small Number Guessing Game Based on Small Story,
RULES:
USER needs to find the 3 Numbers From the Given Clue 
IF he/she fails, then it will ask you to play again.
for every Level Difficulty INCREASES.

Created By Debdip Banerjee on 25th May,2019
*/

/* This Code is Entirely Made In Unreal Coding Standards from begining For Future ReUsabilty & Good Practice*/

#include <iostream>
#include <cstdlib>		//To Use Random Number Generation Rand() & Srand()
#include <string>
#include <ctime>		//To Generate Random Number Based On Time Of the Day

//Using Unreal Coding Standards
using FString = std::string;

//Function Declaration
void intro();
void PlayGame();
bool AskToPlayAgain();

//Main Function
int main()
{
	intro();
	PlayGame();
	
	return 0;
}

//Story of the Game
void intro()
{
	std::cout << "Year 1949" << std::endl;
	getchar();
	std::cout << "You are a Soldier apprehended by Enemy and Captured in a Cell" << std::endl;
	getchar();
	std::cout << "25th March, 02:39 am" << std::endl;
	std::cout << "You found a gateway to freedom" << std::endl;
	getchar();
	std::cout << "But you Must crack the Codes to open Gates and flee" << std::endl;
	std::cout << "Can you do it??" << std::endl;
 }

//Function To Play the Game
void PlayGame()
{
	srand(time(NULL));			//Generate New Sequence Of Random Number Based On time Of the Day
	std::cout << std::endl;
	int GuessA, GuessB, GuessC;
	
	//Setting The Difficulty
	int Difficulty = 2;
	const int MaxDifficulty = 12;

	//Setting The Level
	int level = 1;
	int MaxLevel = (MaxDifficulty / Difficulty);

	while (Difficulty <= MaxDifficulty)
	{
		//Random Number Generator Using Rand() function
		const int CodeA = rand() % Difficulty + Difficulty;
		const int CodeB = rand() % Difficulty + Difficulty;
		const int CodeC = rand() % Difficulty + Difficulty;

		const int CodeProduct = (CodeA*CodeB*CodeC);	//Product of Random Numbers
		const int CodeSum = (CodeA + CodeB + CodeC);	//Sum Of Random Numbers

		std::cout << std::endl;
		if (level == MaxLevel)
		{
			std::cout << "You're in FINAL LEVEL" << std::endl;
		}
		//Hints of Numbers to predict
		std::cout << "You're in LEVEL " << level << std::endl;
		std::cout << "1.Guess the 3 numbers whose product is " << CodeProduct << std::endl;
		std::cout << "2.Guess the 3 numbers whose sum is " << CodeSum << std::endl;

		//Taking User Input of 3 Numbers
		std::cout << "enter 3 Numbers" << std::endl;
		std::cin >> GuessA >> GuessB >> GuessC;
		std::cout << "Numbers are " << GuessA << GuessB << GuessC << std::endl;

		const int  GuessProduct = (GuessA*GuessB*GuessC);	//Product of User Given Numbers
		const int GuessSum = (GuessA + GuessB + GuessC);	//Sum Of User Given Numbers

		//Checking The Answer
		if (CodeProduct == GuessProduct)	//if Product of Random Numbers & Product of User Given Numbers are Same
		{
			if (CodeSum == GuessSum)		//if Sum of Random Numbers & Sum of User Given Numbers are Same
			{
				level++;			//Increasing the Level
				Difficulty = Difficulty + 2;	//Increasing the Difficulty
				if (Difficulty > MaxDifficulty)		//If Difficulty exceeds max Difficulty,Game Ends
				{
					std::cout << std::endl;
					std::cout << "Congrats,You're a Free Man" << std::endl;
					getchar();
					AskToPlayAgain();
				}
				else               //If Difficulty level is Lower than Max Difficulty,Game contineus
				{
					std::cout << "Cheers,You're going to Next level" << std::endl;
				}

			}
			else                //if Sum of Random Numbers & Sum of User Given Numbers are NOT Same
			{
				std::cout << "You Failed Miserably & Died Horribly" << std::endl;	//Game ENDS
				getchar();
				AskToPlayAgain();
			}
		}
		else                 //if Product of Random Numbers & Product of User Given Numbers are NOT Same
		{
			std::cout << "You Failed Miserably & Died Horribly" << std::endl;	//Game ENDS
			getchar();
			AskToPlayAgain();
		}

	}
}

//Function Asking To Play Again
bool AskToPlayAgain()
{
	std::cout << "Do you wanna Play again?" << std::endl;
	std::cout << "Y/N" << std::endl;	
	FString Response = "";
	getline(std::cin, Response);

	std::cout << "Your response is:" << Response << std::endl;		//If YES,Game Contineus
	if ((Response[0] == 'y') || (Response[0] == 'Y'))
	{
		PlayGame();
		AskToPlayAgain();
		return 1;
	}
	else if ((Response[0] == 'n') || (Response[0] == 'N'))		//If NO, Game ENDS
	{
		exit(0);
	}
	else
	{
		std::cout << "Please,give valid input" << std::endl;	//Anything other than  Yes or No is INVAILD
		AskToPlayAgain();
	}

	return false;
}