#include<iostream>
#include<iomanip> // setw
#include<string>
#include <windows.h> // colors
#include <ctime>  // NULL
#include <cstdlib> //srand

using namespace std;

string gamePlace[3][3] = { "1" ,  "2" , "3", "4" , "5" , "6" , "7" , "8" , "9" };

string gamePlayer1, gamePlayer2;

bool gameEnd = false;

int player1Move, player2Move, player1Number = 1, player2Number = 2, gameTries = 0;

string gameWinner1 = "Player1 won !";
string gameWinner2 = "Player2 won !";

int exitGame()
{
	exit(13);
	return 13;
}

void gameBoard(string somethingTest[3][3])
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 7 | BACKGROUND_BLUE);
	cout << ' ' << gamePlace[0][0] << " | " << gamePlace[0][1] << " | " << gamePlace[0][2] << endl;
	cout << "---|---|---" << endl;
	cout << ' ' << gamePlace[1][0] << " | " << gamePlace[1][1] << " | " << gamePlace[1][2] << endl;
	cout << "---|---|---" << endl;;
	cout << ' ' << gamePlace[2][0] << " | " << gamePlace[2][1] << " | " << gamePlace[2][2] << endl;

	cout << endl;
}

void gameInput()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 10 | BACKGROUND_BLUE);
	cout << "Player 1 --> Chose X or O : ";

gameAgain:

	cin >> gamePlayer1;

	if (gamePlayer1 != "X" && gamePlayer1 != "O")
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 4 | BACKGROUND_BLUE);
		cout << endl;
		cout << "Chose X or O ! : ";
		goto gameAgain;
	}

	else {
		if (gamePlayer1 == "O")
		{
			gamePlayer2 = "X";
		}
		else if (gamePlayer1 == "X")
		{
			gamePlayer2 = "O";
		}

	}

	cout << endl;
}

void aiGame(string firstPlayer, string secondPlayer, int playerMove)
{

	gameTries++;
Try_again_player2:

	srand(time(NULL));

	playerMove = rand() % 9 + 1;

	if (playerMove == 1)
	{
		if (gamePlace[0][0] != firstPlayer && gamePlace[0][0] != secondPlayer)
		{
			gamePlace[0][0] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
			goto Try_again_player2;
		}
	}

	else if (playerMove == 2)
	{
		if (gamePlace[0][1] != firstPlayer && gamePlace[0][1] != secondPlayer)
		{
			gamePlace[0][1] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
			goto Try_again_player2;
		}
	}

	else if (playerMove == 3)
	{
		if (gamePlace[0][2] != firstPlayer && gamePlace[0][2] != secondPlayer)
		{
			gamePlace[0][2] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
			goto Try_again_player2;
		}
	}

	else if (playerMove == 4)
	{
		if (gamePlace[1][0] != firstPlayer && gamePlace[1][0] != secondPlayer)
		{
			gamePlace[1][0] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
			goto Try_again_player2;
		}
	}

	else if (playerMove == 5)
	{
		if (gamePlace[1][1] != firstPlayer && gamePlace[1][1] != secondPlayer)
		{
			gamePlace[1][1] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
			goto Try_again_player2;
		}
	}

	else if (playerMove == 6)
	{
		if (gamePlace[1][2] != firstPlayer && gamePlace[1][2] != secondPlayer)
		{
			gamePlace[1][2] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
			goto Try_again_player2;
		}
	}

	else if (playerMove == 7)
	{
		if (gamePlace[2][0] != firstPlayer && gamePlace[2][0] != secondPlayer)
		{
			gamePlace[2][0] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
			goto Try_again_player2;
		}
	}

	else if (playerMove == 8)
	{
		if (gamePlace[2][1] != firstPlayer && gamePlace[2][1] != secondPlayer)
		{
			gamePlace[2][1] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
			goto Try_again_player2;
		}
	}

	else if (playerMove == 9)
	{
		if (gamePlace[2][2] != firstPlayer && gamePlace[2][2] != secondPlayer)
		{
			gamePlace[2][2] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {

			goto Try_again_player2;
		}
	}
}

void aiGameNew(string firstPlayer, string secondPlayer, int playerMove)
{

Try_again_player2:

	srand(time(NULL));

	playerMove = rand() % 9 + 1;

	if (playerMove == 1)
	{
		if (gamePlace[0][0] != firstPlayer && gamePlace[0][0] != secondPlayer)
		{
			gamePlace[0][0] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
			goto Try_again_player2;
		}
	}

	else if (playerMove == 2)
	{
		if (gamePlace[0][1] != firstPlayer && gamePlace[0][1] != secondPlayer)
		{
			gamePlace[0][1] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
			goto Try_again_player2;
		}
	}

	else if (playerMove == 3)
	{
		if (gamePlace[0][2] != firstPlayer && gamePlace[0][2] != secondPlayer)
		{
			gamePlace[0][2] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
			goto Try_again_player2;
		}
	}

	else if (playerMove == 4)
	{
		if (gamePlace[1][0] != firstPlayer && gamePlace[1][0] != secondPlayer)
		{
			gamePlace[1][0] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
			goto Try_again_player2;
		}
	}

	else if (playerMove == 5)
	{
		if (gamePlace[1][1] != firstPlayer && gamePlace[1][1] != secondPlayer)
		{
			gamePlace[1][1] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
			goto Try_again_player2;
		}
	}

	else if (playerMove == 6)
	{
		if (gamePlace[1][2] != firstPlayer && gamePlace[1][2] != secondPlayer)
		{
			gamePlace[1][2] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
			goto Try_again_player2;
		}
	}

	else if (playerMove == 7)
	{
		if (gamePlace[2][0] != firstPlayer && gamePlace[2][0] != secondPlayer)
		{
			gamePlace[2][0] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
			goto Try_again_player2;
		}
	}

	else if (playerMove == 8)
	{
		if (gamePlace[2][1] != firstPlayer && gamePlace[2][1] != secondPlayer)
		{
			gamePlace[2][1] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
			goto Try_again_player2;
		}
	}

	else if (playerMove == 9)
	{
		if (gamePlace[2][2] != firstPlayer && gamePlace[2][2] != secondPlayer)
		{
			gamePlace[2][2] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {

			goto Try_again_player2;
		}
	}
}

void aiCheckImpossible(string firstPlayer, string secondPlayer, int playerMove)
{
	gameTries++;
	int selectedNumber = 0;
	if (gameTries > 2)
	{
		//check for replace
		//check rows
		if (firstPlayer == "X")
		{
			//check first row
			if (gamePlace[0][1] == firstPlayer && gamePlace[0][2] == firstPlayer)
			{
				if (gamePlace[0][0] == firstPlayer || gamePlace[0][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
					goto Bottom;
				}
			}
			else if (gamePlace[0][0] == firstPlayer && gamePlace[0][2] == firstPlayer)
			{
				if (gamePlace[0][1] == firstPlayer || gamePlace[0][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
					goto Bottom;
				}
			}
			else if (gamePlace[0][0] == firstPlayer && gamePlace[0][1] == firstPlayer)
			{
				if (gamePlace[0][2] == firstPlayer || gamePlace[0][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
					goto Bottom;
				}
			}




			//check second row
			else if (gamePlace[1][1] == firstPlayer && gamePlace[1][2] == firstPlayer)
			{
				if (gamePlace[1][0] == firstPlayer || gamePlace[1][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[1][0] == firstPlayer && gamePlace[1][2] == firstPlayer)
			{
				if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[1][0] == firstPlayer && gamePlace[1][1] == firstPlayer)
			{
				if (gamePlace[1][2] == firstPlayer || gamePlace[1][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}



			//check third row
			else if (gamePlace[2][1] == firstPlayer && gamePlace[2][2] == firstPlayer)
			{
				if (gamePlace[2][0] == firstPlayer || gamePlace[2][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++;
				}
				else
				{
					gamePlace[2][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[2][0] == firstPlayer && gamePlace[2][2] == firstPlayer)
			{
				if (gamePlace[2][1] == firstPlayer || gamePlace[2][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[2][0] == firstPlayer && gamePlace[2][1] == firstPlayer)
			{
				if (gamePlace[2][2] == firstPlayer || gamePlace[2][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
		}

		else if (firstPlayer == "O")
		{
			//chech first row
			if (gamePlace[0][1] == firstPlayer && gamePlace[0][2] == firstPlayer)
			{
				if (gamePlace[0][0] == firstPlayer || gamePlace[0][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == firstPlayer && gamePlace[0][2] == firstPlayer)
			{
				if (gamePlace[0][1] == firstPlayer || gamePlace[0][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == firstPlayer && gamePlace[0][1] == firstPlayer)
			{
				if (gamePlace[0][2] == firstPlayer || gamePlace[0][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}

			//check second row
			else if (gamePlace[1][1] == firstPlayer && gamePlace[1][2] == firstPlayer)
			{
				if (gamePlace[1][0] == firstPlayer || gamePlace[1][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[1][0] == firstPlayer && gamePlace[1][2] == firstPlayer)
			{
				if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[1][0] == firstPlayer && gamePlace[1][1] == firstPlayer)
			{
				if (gamePlace[1][2] == firstPlayer || gamePlace[1][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}


			//check third row
			else if (gamePlace[2][1] == firstPlayer && gamePlace[2][2] == firstPlayer)
			{
				if (gamePlace[2][0] == firstPlayer || gamePlace[2][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[2][0] == firstPlayer && gamePlace[2][2] == firstPlayer)
			{
				if (gamePlace[2][1] == firstPlayer || gamePlace[2][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[2][0] == firstPlayer && gamePlace[2][1] == firstPlayer)
			{
				if (gamePlace[2][2] == firstPlayer || gamePlace[2][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
		}


		//check columns
		if (firstPlayer == "X")
		{

			//check first column
			if (gamePlace[1][0] == firstPlayer && gamePlace[2][0] == firstPlayer)
			{
				if (gamePlace[0][0] == firstPlayer || gamePlace[0][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == firstPlayer && gamePlace[2][0] == firstPlayer)
			{
				if (gamePlace[1][0] == firstPlayer || gamePlace[1][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == firstPlayer && gamePlace[1][0] == firstPlayer)
			{
				if (gamePlace[2][0] == firstPlayer || gamePlace[2][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}




			//check second column
			else if (gamePlace[1][1] == firstPlayer && gamePlace[2][1] == firstPlayer)
			{
				if (gamePlace[0][1] == firstPlayer || gamePlace[0][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][1] == firstPlayer && gamePlace[2][1] == firstPlayer)
			{
				if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][1] == firstPlayer && gamePlace[1][1] == firstPlayer)
			{
				if (gamePlace[2][1] == firstPlayer || gamePlace[2][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}




			//check third column
			else if (gamePlace[1][2] == firstPlayer && gamePlace[2][2] == firstPlayer)
			{
				if (gamePlace[0][2] == firstPlayer || gamePlace[0][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][2] == firstPlayer && gamePlace[2][2] == firstPlayer)
			{
				if (gamePlace[1][2] == firstPlayer || gamePlace[1][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][2] == firstPlayer && gamePlace[1][2] == firstPlayer)
			{
				if (gamePlace[2][2] == firstPlayer || gamePlace[2][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
		}
		else if (firstPlayer == "O")
		{
			//check first column
			if (gamePlace[1][0] == firstPlayer && gamePlace[2][0] == firstPlayer)
			{
				if (gamePlace[0][0] == firstPlayer || gamePlace[0][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == firstPlayer && gamePlace[2][0] == firstPlayer)
			{
				if (gamePlace[1][0] == firstPlayer || gamePlace[1][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == firstPlayer && gamePlace[1][0] == firstPlayer)
			{
				if (gamePlace[2][0] == firstPlayer || gamePlace[2][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}


			//check second column
			else if (gamePlace[1][1] == firstPlayer && gamePlace[2][1] == firstPlayer)
			{
				if (gamePlace[0][1] == firstPlayer || gamePlace[0][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][1] == firstPlayer && gamePlace[2][1] == firstPlayer)
			{
				if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][1] == firstPlayer && gamePlace[1][1] == firstPlayer)
			{
				if (gamePlace[2][1] == firstPlayer || gamePlace[2][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}




			//check third column
			else if (gamePlace[1][2] == firstPlayer && gamePlace[2][2] == firstPlayer)
			{
				if (gamePlace[0][2] == firstPlayer || gamePlace[0][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][2] == firstPlayer && gamePlace[2][2] == firstPlayer)
			{
				if (gamePlace[1][2] == firstPlayer || gamePlace[1][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][2] == firstPlayer && gamePlace[1][2] == firstPlayer)
			{
				if (gamePlace[2][2] == firstPlayer || gamePlace[2][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
		}

		//check diagonals
		if (firstPlayer == "X")
		{
			//check from upper-left to lower-right
			if (gamePlace[1][1] == firstPlayer && gamePlace[2][2] == firstPlayer)
			{
				if (gamePlace[0][0] == firstPlayer || gamePlace[0][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == firstPlayer && gamePlace[2][2] == firstPlayer)
			{
				if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == firstPlayer && gamePlace[1][1] == firstPlayer)
			{
				if (gamePlace[2][2] == firstPlayer || gamePlace[2][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}


			//check from upper-right to lower-left
			else if (gamePlace[2][0] == firstPlayer && gamePlace[1][1] == firstPlayer)
			{
				if (gamePlace[0][2] == firstPlayer || gamePlace[0][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++;
				}
				else
				{
					gamePlace[0][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
				}
			}
			else if (gamePlace[2][0] == firstPlayer && gamePlace[0][2] == firstPlayer)
			{
				if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++;
				}
				else
				{
					gamePlace[1][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
				}
			}
			else if (gamePlace[0][2] == firstPlayer && gamePlace[1][1] == firstPlayer)
			{
				if (gamePlace[2][0] == firstPlayer || gamePlace[2][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++;
				}
				else
				{
					gamePlace[2][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
				}
			}
		}

		else if (firstPlayer == "O")
		{
			//check from upper-left to lower-right
			if (gamePlace[1][1] == firstPlayer && gamePlace[2][2] == firstPlayer)
			{
				if (gamePlace[0][0] == firstPlayer || gamePlace[0][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == firstPlayer && gamePlace[2][2] == firstPlayer)
			{
				if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == firstPlayer && gamePlace[1][1] == firstPlayer)
			{
				if (gamePlace[2][2] == firstPlayer || gamePlace[2][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}


			//check from upper-right to lower-left
			else if (gamePlace[2][0] == firstPlayer && gamePlace[1][1] == firstPlayer)
			{
				if (gamePlace[0][2] == firstPlayer || gamePlace[0][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++;
				}
				else
				{
					gamePlace[0][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
				}
			}
			else if (gamePlace[2][0] == firstPlayer && gamePlace[0][2] == firstPlayer)
			{
				if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++;
				}
				else
				{
					gamePlace[1][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
				}
			}
			else if (gamePlace[0][2] == firstPlayer && gamePlace[1][1] == firstPlayer)
			{
				if (gamePlace[2][0] == firstPlayer || gamePlace[2][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++;
				}
				else
				{
					gamePlace[2][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
				}
			}
		}





		//check for win
		//check rows
		if (secondPlayer == "X")
		{
			//check first row
			if (gamePlace[0][1] == secondPlayer && gamePlace[0][2] == secondPlayer)
			{
				if (gamePlace[0][0] == firstPlayer || gamePlace[0][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
					goto Bottom;
				}
			}
			else if (gamePlace[0][0] == secondPlayer && gamePlace[0][2] == secondPlayer)
			{
				if (gamePlace[0][1] == firstPlayer || gamePlace[0][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
					goto Bottom;
				}
			}
			else if (gamePlace[0][0] == secondPlayer && gamePlace[0][1] == secondPlayer)
			{
				if (gamePlace[0][2] == firstPlayer || gamePlace[0][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
					goto Bottom;
				}
			}




			//check second row
			else if (gamePlace[1][1] == secondPlayer && gamePlace[1][2] == secondPlayer)
			{
				if (gamePlace[1][0] == firstPlayer || gamePlace[1][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[1][0] == secondPlayer && gamePlace[1][2] == secondPlayer)
			{
				if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[1][0] == secondPlayer && gamePlace[1][1] == secondPlayer)
			{
				if (gamePlace[1][2] == firstPlayer || gamePlace[1][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}



			//check third row
			else if (gamePlace[2][1] == secondPlayer && gamePlace[2][2] == secondPlayer)
			{
				if (gamePlace[2][0] == firstPlayer || gamePlace[2][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++;
				}
				else
				{
					gamePlace[2][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[2][0] == secondPlayer && gamePlace[2][2] == secondPlayer)
			{
				if (gamePlace[2][1] == firstPlayer || gamePlace[2][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[2][0] == secondPlayer && gamePlace[2][1] == secondPlayer)
			{
				if (gamePlace[2][2] == firstPlayer || gamePlace[2][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
		}

		else if (secondPlayer == "O")
		{
			//chech first row
			if (gamePlace[0][1] == secondPlayer && gamePlace[0][2] == secondPlayer)
			{
				if (gamePlace[0][0] == firstPlayer || gamePlace[0][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == secondPlayer && gamePlace[0][2] == secondPlayer)
			{
				if (gamePlace[0][1] == firstPlayer || gamePlace[0][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == secondPlayer && gamePlace[0][1] == secondPlayer)
			{
				if (gamePlace[0][2] == firstPlayer || gamePlace[0][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}

			//check second row
			else if (gamePlace[1][1] == secondPlayer && gamePlace[1][2] == secondPlayer)
			{
				if (gamePlace[1][0] == firstPlayer || gamePlace[1][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[1][0] == secondPlayer && gamePlace[1][2] == secondPlayer)
			{
				if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[1][0] == secondPlayer && gamePlace[1][1] == secondPlayer)
			{
				if (gamePlace[1][2] == firstPlayer || gamePlace[1][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}


			//check third row
			else if (gamePlace[2][1] == secondPlayer && gamePlace[2][2] == secondPlayer)
			{
				if (gamePlace[2][0] == firstPlayer || gamePlace[2][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[2][0] == secondPlayer && gamePlace[2][2] == secondPlayer)
			{
				if (gamePlace[2][1] == firstPlayer || gamePlace[2][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[2][0] == secondPlayer && gamePlace[2][1] == secondPlayer)
			{
				if (gamePlace[2][2] == firstPlayer || gamePlace[2][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
		}


		//check columns
		if (secondPlayer == "X")
		{

			//check first column
			if (gamePlace[1][0] == secondPlayer && gamePlace[2][0] == secondPlayer)
			{
				if (gamePlace[0][0] == firstPlayer || gamePlace[0][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == secondPlayer && gamePlace[2][0] == secondPlayer)
			{
				if (gamePlace[1][0] == firstPlayer || gamePlace[1][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == secondPlayer && gamePlace[1][0] == secondPlayer)
			{
				if (gamePlace[2][0] == firstPlayer || gamePlace[2][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}




			//check second column
			else if (gamePlace[1][1] == secondPlayer && gamePlace[2][1] == secondPlayer)
			{
				if (gamePlace[0][1] == firstPlayer || gamePlace[0][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][1] == secondPlayer && gamePlace[2][1] == secondPlayer)
			{
				if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][1] == secondPlayer && gamePlace[1][1] == secondPlayer)
			{
				if (gamePlace[2][1] == firstPlayer || gamePlace[2][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}




			//check third column
			else if (gamePlace[1][2] == secondPlayer && gamePlace[2][2] == secondPlayer)
			{
				if (gamePlace[0][2] == firstPlayer || gamePlace[0][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][2] == secondPlayer && gamePlace[2][2] == secondPlayer)
			{
				if (gamePlace[1][2] == firstPlayer || gamePlace[1][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][2] == secondPlayer && gamePlace[1][2] == secondPlayer)
			{
				if (gamePlace[2][2] == firstPlayer || gamePlace[2][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
		}
		else if (secondPlayer == "O")
		{
			//check first column
			if (gamePlace[1][0] == secondPlayer && gamePlace[2][0] == secondPlayer)
			{
				if (gamePlace[0][0] == firstPlayer || gamePlace[0][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == secondPlayer && gamePlace[2][0] == secondPlayer)
			{
				if (gamePlace[1][0] == firstPlayer || gamePlace[1][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == secondPlayer && gamePlace[1][0] == secondPlayer)
			{
				if (gamePlace[2][0] == firstPlayer || gamePlace[2][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}


			//check second column
			else if (gamePlace[1][1] == secondPlayer && gamePlace[2][1] == secondPlayer)
			{
				if (gamePlace[0][1] == firstPlayer || gamePlace[0][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][1] == secondPlayer && gamePlace[2][1] == secondPlayer)
			{
				if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][1] == secondPlayer && gamePlace[1][1] == secondPlayer)
			{
				if (gamePlace[2][1] == firstPlayer || gamePlace[2][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}




			//check third column
			else if (gamePlace[1][2] == secondPlayer && gamePlace[2][2] == secondPlayer)
			{
				if (gamePlace[0][2] == firstPlayer || gamePlace[0][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][2] == secondPlayer && gamePlace[2][2] == secondPlayer)
			{
				if (gamePlace[1][2] == firstPlayer || gamePlace[1][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][2] == secondPlayer && gamePlace[1][2] == secondPlayer)
			{
				if (gamePlace[2][2] == firstPlayer || gamePlace[2][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
		}

		//check diagonals
		if (secondPlayer == "X")
		{
			//check from upper-left to lower-right
			if (gamePlace[1][1] == secondPlayer && gamePlace[2][2] == secondPlayer)
			{
				if (gamePlace[0][0] == firstPlayer || gamePlace[0][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == secondPlayer && gamePlace[2][2] == secondPlayer)
			{
				if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == secondPlayer && gamePlace[1][1] == secondPlayer)
			{
				if (gamePlace[2][2] == firstPlayer || gamePlace[2][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}


			//check from upper-right to lower-left
			else if (gamePlace[2][0] == secondPlayer && gamePlace[1][1] == secondPlayer)
			{
				if (gamePlace[0][2] == firstPlayer || gamePlace[0][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++;
				}
				else
				{
					gamePlace[0][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
				}
			}
			else if (gamePlace[2][0] == secondPlayer && gamePlace[0][2] == secondPlayer)
			{
				if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++;
				}
				else
				{
					gamePlace[1][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
				}
			}
			else if (gamePlace[0][2] == secondPlayer && gamePlace[1][1] == secondPlayer)
			{
				if (gamePlace[2][0] == firstPlayer || gamePlace[2][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++;
				}
				else
				{
					gamePlace[2][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
				}
			}
		}

		else if (secondPlayer == "O")
		{
			//check from upper-left to lower-right
			if (gamePlace[1][1] == secondPlayer && gamePlace[2][2] == secondPlayer)
			{
				if (gamePlace[0][0] == firstPlayer || gamePlace[0][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == secondPlayer && gamePlace[2][2] == secondPlayer)
			{
				if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[1][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}
			else if (gamePlace[0][0] == secondPlayer && gamePlace[1][1] == secondPlayer)
			{
				if (gamePlace[2][2] == firstPlayer || gamePlace[2][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[2][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++; goto Bottom;
				}
			}


			//check from upper-right to lower-left
			else if (gamePlace[2][0] == secondPlayer && gamePlace[1][1] == secondPlayer)
			{
				if (gamePlace[0][2] == firstPlayer || gamePlace[0][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++;
				}
				else
				{
					gamePlace[0][2] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
				}
			}
			else if (gamePlace[2][0] == secondPlayer && gamePlace[0][2] == secondPlayer)
			{
				if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++;
				}
				else
				{
					gamePlace[1][1] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
				}
			}
			else if (gamePlace[0][2] == secondPlayer && gamePlace[1][1] == secondPlayer)
			{
				if (gamePlace[2][0] == firstPlayer || gamePlace[2][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++;
				}
				else
				{
					gamePlace[2][0] = secondPlayer;
					gameBoard(gamePlace);
					selectedNumber++;
				}
			}
		}
		if (selectedNumber == 0)
		{
			aiGameNew(gamePlayer2, gamePlayer1, player2Move);
			goto Bottom;
		}
	}
	else
	{
		aiGameNew(gamePlayer2, gamePlayer1, player2Move);
		goto Bottom;
	}
Bottom:
	selectedNumber = 0;
}

void ingameChecks(string firstPlayer, string secondPlayer, int playerMove, int playerNumber)
{
	gameTries++;
Try_again_player:
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 10 | BACKGROUND_BLUE);
	cout << "Player " << playerNumber << " - Choose position from 1 - 9 : ";
	cin >> playerMove;
	if (playerMove != 1 && playerMove != 2 && playerMove != 3 && playerMove != 4 && playerMove != 5 && playerMove != 6 && playerMove != 7 && playerMove != 8 && playerMove != 9)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 4 | BACKGROUND_BLUE);
		cout << endl;
		cout << "We told you, you automatically lost! Goodbye!" << endl;
		exitGame();
	}
	else {
		if (playerMove == 1)
		{
			if (gamePlace[0][0] != firstPlayer && gamePlace[0][0] != secondPlayer)
			{
				gamePlace[0][0] = firstPlayer;
				gameBoard(gamePlace);
			}
			else {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 4 | BACKGROUND_BLUE);
				cout << "Already taken! Try again!" << endl;
				goto Try_again_player;
			}
		}

		else if (playerMove == 2)
		{
			if (gamePlace[0][1] != firstPlayer && gamePlace[0][1] != secondPlayer)
			{
				gamePlace[0][1] = firstPlayer;
				gameBoard(gamePlace);
			}
			else {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 4 | BACKGROUND_BLUE);
				cout << "Already taken! Try again!" << endl;
				goto Try_again_player;
			}
		}

		else if (playerMove == 3)
		{
			if (gamePlace[0][2] != firstPlayer && gamePlace[0][2] != secondPlayer)
			{
				gamePlace[0][2] = firstPlayer;
				gameBoard(gamePlace);
			}
			else {
				cout << "Already taken! Try again!" << endl;
				goto Try_again_player;
			}
		}

		else if (playerMove == 4)
		{
			if (gamePlace[1][0] != firstPlayer && gamePlace[1][0] != secondPlayer)
			{
				gamePlace[1][0] = firstPlayer;
				gameBoard(gamePlace);
			}
			else {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 4 | BACKGROUND_BLUE);
				cout << "Already taken! Try again!" << endl;
				goto Try_again_player;
			}
		}

		else if (playerMove == 5)
		{
			if (gamePlace[1][1] != firstPlayer && gamePlace[1][1] != secondPlayer)
			{
				gamePlace[1][1] = firstPlayer;
				gameBoard(gamePlace);
			}
			else {
				cout << "Already taken! Try again!" << endl;
				goto Try_again_player;
			}
		}

		else if (playerMove == 6)
		{
			if (gamePlace[1][2] != firstPlayer && gamePlace[1][2] != secondPlayer)
			{
				gamePlace[1][2] = firstPlayer;
				gameBoard(gamePlace);
			}
			else {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 4 | BACKGROUND_BLUE);
				cout << "Already taken! Try again!" << endl;
				goto Try_again_player;
			}
		}

		else if (playerMove == 7)
		{
			if (gamePlace[2][0] != firstPlayer && gamePlace[2][0] != secondPlayer)
			{
				gamePlace[2][0] = firstPlayer;
				gameBoard(gamePlace);
			}
			else {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 4 | BACKGROUND_BLUE);
				cout << "Already taken! Try again!" << endl;
				goto Try_again_player;
			}
		}

		else if (playerMove == 8)
		{
			if (gamePlace[2][1] != firstPlayer && gamePlace[2][1] != secondPlayer)
			{
				gamePlace[2][1] = firstPlayer;
				gameBoard(gamePlace);
			}
			else {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 4 | BACKGROUND_BLUE);
				cout << "Already taken! Try again!" << endl;
				goto Try_again_player;
			}
		}

		else if (playerMove == 9)
		{
			if (gamePlace[2][2] != firstPlayer && gamePlace[2][2] != secondPlayer)
			{
				gamePlace[2][2] = firstPlayer;
				gameBoard(gamePlace);
			}
			else {
				HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
				SetConsoleTextAttribute(h, 4 | BACKGROUND_BLUE);
				cout << "Already taken! Try again!" << endl;
				goto Try_again_player;
			}
		}
	}
}

void winnerChecks(string gamePlayer, string gameWin)
{
	if ((gamePlace[0][0] == gamePlayer && gamePlace[1][0] == gamePlayer && gamePlace[2][0] == gamePlayer) || (gamePlace[0][1] == gamePlayer && gamePlace[1][1] == gamePlayer && gamePlace[2][1] == gamePlayer) || (gamePlace[0][2] == gamePlayer && gamePlace[1][2] == gamePlayer && gamePlace[2][2] == gamePlayer) || (gamePlace[0][0] == gamePlayer && gamePlace[1][1] == gamePlayer && gamePlace[2][2] == gamePlayer) || (gamePlace[0][2] == gamePlayer && gamePlace[1][1] == gamePlayer && gamePlace[2][0] == gamePlayer) || (gamePlace[0][0] == gamePlayer && gamePlace[0][1] == gamePlayer && gamePlace[0][2] == gamePlayer) || (gamePlace[1][0] == gamePlayer && gamePlace[1][1] == gamePlayer && gamePlace[1][2] == gamePlayer) || (gamePlace[2][0] == gamePlayer && gamePlace[2][1] == gamePlayer && gamePlace[2][2] == gamePlayer))
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 10 | BACKGROUND_BLUE);
		cout << setw(60) << gameWin << endl << endl;;
		cout << setw(62) << "CONGRATULATIONS !" << endl;

		gameEnd = true;

		exitGame();
	}

	else if (gameTries == 9)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 4 | BACKGROUND_BLUE);
		cout << setw(59) << "TIE !" << endl << endl;
		cout << setw(65) << "THERE IS NO WINNER !" << endl;

		exitGame();
	}
}

void gameImpossible()
{

	gameInput();

	gameBoard(gamePlace);

	do
	{
		ingameChecks(gamePlayer1, gamePlayer2, player1Move, player1Number);

		winnerChecks(gamePlayer1, gameWinner1);

		aiCheckImpossible(gamePlayer1, gamePlayer2, player2Move);

		winnerChecks(gamePlayer2, gameWinner2);

	} while (gameEnd == false);
}

void gamePlay2Players()
{

	gameInput();

	gameBoard(gamePlace);

	do
	{
		ingameChecks(gamePlayer1, gamePlayer2, player1Move, player1Number);

		winnerChecks(gamePlayer1, gameWinner1);

		ingameChecks(gamePlayer2, gamePlayer1, player2Move, player2Number);

		winnerChecks(gamePlayer2, gameWinner2);

	} while (gameEnd == false);
}

void gamePlayAi()
{

	gameInput();

	gameBoard(gamePlace);

	do
	{
		ingameChecks(gamePlayer1, gamePlayer2, player1Move, player1Number);

		winnerChecks(gamePlayer1, gameWinner1);

		aiGame(gamePlayer2, gamePlayer1, player2Move);

		winnerChecks(gamePlayer2, gameWinner2);

	} while (gameEnd == false);
}

void gamePlay()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 7 | BACKGROUND_BLUE);
	cout << " __________     __      _______       __________      __          _______        __________    _________   _________" << endl;
	cout << "|__________|   |  |    | ______|     |__________|    //\\\\        | ______|      |__________|  |  _____  | | ________|" << endl;
	cout << "    |  |       |  |    | |               |  |       //  \\\\       | |                |  |      | |     | | | |" << endl;
	cout << "    |  |       |  |    | |               |  |      //____\\\\      | |                |  |      | |     | | | |_______" << endl;
	cout << "    |  |       |  |    | |               |  |     //______\\\\     | |                |  |      | |     | | |  _______|" << endl;
	cout << "    |  |       |  |    | |               |  |    //        \\\\    | |                |  |      | |     | | | |" << endl;
	cout << "    |  |       |  |    | |_____          |  |   //          \\\\   | |_____           |  |      | |_____| | | |________" << endl;
	cout << "    |__|       |__|    |_______|         |__|  //            \\\\  |_______|          |__|      |_________| |_________|" << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	string modeChoice;
	string firstGame = "1";
	string secondGame = "2";
	string thirdGame = "3";
	string fourthGame = "4";

	string playerChoice;

gameMenu:
	HANDLE a = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(a, 8 | BACKGROUND_BLUE);
	cout << endl;
	cout << "Start (1)" << endl;
	cout << "Rules (2)" << endl;
	cout << "Exit (3)" << endl;
	cout << endl;

	cout << "Enter your choice: ";
	getline(cin, playerChoice);
	if (playerChoice == firstGame)
	{
	tryAgain:
		HANDLE b = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(b, 8 | BACKGROUND_BLUE);
		cout << endl;
		cout << endl;
		cout << "Vs Friend (1)" << endl;
		cout << "Easy mode vs computer (2)" << endl;
		cout << "Hard mode vs computer (3)" << endl;
		cout << "Back to the menu (4)" << endl;

		cout << endl;

		cout << "Choose a mode: ";
		getline(cin, modeChoice);

		cout << endl;

		if (modeChoice == firstGame)
		{
			gamePlay2Players();
		}
		else if (modeChoice == secondGame)
		{
			gamePlayAi();
		}
		else if (modeChoice == thirdGame)
		{
			gameImpossible();
		}
		else if (modeChoice == fourthGame)
		{
			goto gameMenu;
		}
		else if (modeChoice != firstGame && modeChoice != secondGame && modeChoice != thirdGame && modeChoice != fourthGame)
		{
			HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h, 4 | BACKGROUND_BLUE);
			cout << endl;
			cout << "Invalid input!" << endl;
			goto tryAgain;
		}
	}
	else if (playerChoice == secondGame)
	{
		cout << "(1) The game is played on a grid that's 3 squares by 3 squares." << endl;
		cout << "(2) You are X, your friend (or the computer in this case) is O. ..." << endl;
		cout << "(3) The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner." << endl;
		cout << "(4) When all 9 squares are full, the game is over." << endl;
		cout << "(4) When you have to choose a gamePlace, If you enter a different symbol, the game automatically ends!" << endl;

		goto gameMenu;
	}
	else if (playerChoice == thirdGame)
	{
		exitGame();
	}
}

int main()
{
	system("Color 10");
	gamePlay();
}