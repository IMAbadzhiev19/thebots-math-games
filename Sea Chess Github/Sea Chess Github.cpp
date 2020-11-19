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


void gameBoard(string somethingTest[3][3])
{
	cout << ' ' << gamePlace[0][0] << " | " << gamePlace[0][1] << " | " << gamePlace[0][2] << endl;
	cout << "---|---|---" << endl;
	cout << ' ' << gamePlace[1][0] << " | " << gamePlace[1][1] << " | " << gamePlace[1][2] << endl;
	cout << "---|---|---" << endl;;
	cout << ' ' << gamePlace[2][0] << " | " << gamePlace[2][1] << " | " << gamePlace[2][2] << endl;

	cout << endl;
}

void gameInput()
{
	cout << "Player 1 --> Chose X or O : ";

gameAgain:

	cin >> gamePlayer1;

	if (gamePlayer1 != "X" && gamePlayer1 != "O")
	{
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
			if (gamePlace[0][1] == secondPlayer && gamePlace[0][2] == secondPlayer)
			{
				if (gamePlace[0][0] == firstPlayer || gamePlace[0][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][0] = firstPlayer;
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
					gamePlace[0][1] = firstPlayer;
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
					gamePlace[0][2] = firstPlayer;
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
					gamePlace[1][0] = firstPlayer;
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
					gamePlace[1][1] = firstPlayer;
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
					gamePlace[1][2] = firstPlayer;
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
					gamePlace[2][0] = firstPlayer;
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
					gamePlace[2][1] = firstPlayer;
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
					gamePlace[2][2] = firstPlayer;
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
			if (gamePlace[1][0] == secondPlayer && gamePlace[2][0] == secondPlayer)
			{
				if (gamePlace[0][0] == firstPlayer || gamePlace[0][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][0] = firstPlayer;
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
					gamePlace[1][0] = firstPlayer;
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
					gamePlace[2][0] = firstPlayer;
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
					gamePlace[0][1] = firstPlayer;
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
					gamePlace[1][1] = firstPlayer;
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
					gamePlace[2][1] = firstPlayer;
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
					gamePlace[0][2] = firstPlayer;
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
					gamePlace[1][2] = firstPlayer;
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
					gamePlace[2][2] = firstPlayer;
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
			if (gamePlace[1][1] == secondPlayer && gamePlace[2][2] == secondPlayer)
			{
				if (gamePlace[0][0] == firstPlayer || gamePlace[0][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
					selectedNumber++; goto Bottom;
				}
				else
				{
					gamePlace[0][0] = firstPlayer;
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
					gamePlace[1][1] = firstPlayer;
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
					gamePlace[2][2] = firstPlayer;
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
Try_again_player:
	cout << "Player " << playerNumber << " - Choose position from 1 - 9 : ";
	cin >> playerMove;
	if (playerMove < 1 || playerMove > 9)
	{
		cout << endl;
		cout << "Invalid number!!!" << endl << endl;
		goto Try_again_player;
	}
	else {
		gameTries++;
	}
	cout << endl;

	if (playerMove == 1)
	{
		if (gamePlace[0][0] != firstPlayer && gamePlace[0][0] != secondPlayer)
		{
			gamePlace[0][0] = firstPlayer;
			gameBoard(gamePlace);
		}
		else {
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
			cout << "Already taken! Try again!" << endl;
			goto Try_again_player;
		}
	}
}

int winnerChecks(string gamePlayer, string gameWin)
{
	if ((gamePlace[0][0] == gamePlayer && gamePlace[1][0] == gamePlayer && gamePlace[2][0] == gamePlayer) || (gamePlace[0][1] == gamePlayer && gamePlace[1][1] == gamePlayer && gamePlace[2][1] == gamePlayer) || (gamePlace[0][2] == gamePlayer && gamePlace[1][2] == gamePlayer && gamePlace[2][2] == gamePlayer) || (gamePlace[0][0] == gamePlayer && gamePlace[1][1] == gamePlayer && gamePlace[2][2] == gamePlayer) || (gamePlace[0][2] == gamePlayer && gamePlace[1][1] == gamePlayer && gamePlace[2][0] == gamePlayer) || (gamePlace[0][0] == gamePlayer && gamePlace[0][1] == gamePlayer && gamePlace[0][2] == gamePlayer) || (gamePlace[1][0] == gamePlayer && gamePlace[1][1] == gamePlayer && gamePlace[1][2] == gamePlayer) || (gamePlace[2][0] == gamePlayer && gamePlace[2][1] == gamePlayer && gamePlace[2][2] == gamePlayer))
	{

		cout << setw(60) << gameWin << endl << endl;;
		cout << setw(62) << "CONGRATULATIONS !" << endl;

		gameEnd = true;

		exit(13);
		return 13;
	}

	else if (gameTries == 9)
	{
		cout << setw(59) << "TIE !" << endl << endl;
		cout << setw(65) << "THERE IS NO WINNER !" << endl;

		exit(13);
		return 13;
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
	string firstGame = "One";
	string secondGame = "Two";
	string thirdGame = "Three";

	string playerChoice;
	cout << "Choose : ";
	cout << "If you want to play vs your friend - type One" << endl << endl << "         If you want to play vs the computer - type Two" << endl << endl << "         If you want to play vs the computer impossible - type Three" << endl << endl;

tryAgain:
	cout << "Enter your choice: ";
	getline(cin, playerChoice);

	if (playerChoice == firstGame)
	{
		gamePlay2Players();
	}
	else if (playerChoice == secondGame)
	{
		gamePlayAi();
	}
	else if (playerChoice == thirdGame)
	{
		gameImpossible();
	}
	else if (playerChoice != firstGame || playerChoice != secondGame || playerChoice != thirdGame)
	{
		cout << endl;
		cout << "Invalid input! You must choose One or Two or Three !!!" << endl;
		goto tryAgain;
	}
}

int main()
{
	gamePlay();
}