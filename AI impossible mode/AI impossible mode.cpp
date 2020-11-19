#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

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