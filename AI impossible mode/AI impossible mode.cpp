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
	//check rows
	if (firstPlayer == "X")
	{
		if (gamePlace[0][1] == firstPlayer && gamePlace[0][2] == firstPlayer)
		{
			if (gamePlace[0][0] == firstPlayer || gamePlace[0][0] == secondPlayer)
			{
				aiGameNew(gamePlayer2, gamePlayer1, player2Move);
			}
			else
			{
				gamePlace[0][0] = secondPlayer;
				gameBoard(gamePlace);
			}
		}
		if (gamePlace[0][0] == firstPlayer && gamePlace[0][2] == firstPlayer)
		{
			if (gamePlace[0][1] == firstPlayer || gamePlace[0][1] == secondPlayer)
			{
				aiGameNew(gamePlayer2, gamePlayer1, player2Move);
			}
			else
			{
				gamePlace[0][1] = secondPlayer; gameBoard(gamePlace);
			}
		}
		if (gamePlace[0][0] == firstPlayer && gamePlace[0][1] == firstPlayer)
		{
			if (gamePlace[0][2] == firstPlayer || gamePlace[0][2] == secondPlayer)
			{
				aiGameNew(gamePlayer2, gamePlayer1, player2Move);
			}
			else
			{
				gamePlace[0][2] = secondPlayer; gameBoard(gamePlace);
			}
		}
	}

	else if (firstPlayer == "O")
	{
		for (int i = 0; i < 3; i++)
		{

			if (gamePlace[i][1] == secondPlayer && gamePlace[i][2] == secondPlayer)
			{
				if (gamePlace[i][0] == firstPlayer || gamePlace[i][0] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
				}
				else
				{
					gamePlace[i][0] = firstPlayer; gameBoard(gamePlace);
				}
			}
			if (gamePlace[i][0] == secondPlayer && gamePlace[i][2] == secondPlayer)
			{
				if (gamePlace[i][1] == firstPlayer || gamePlace[i][1] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
				}
				else
				{
					gamePlace[i][1] = firstPlayer; gameBoard(gamePlace);
				}
			}
			if (gamePlace[i][0] == secondPlayer && gamePlace[i][1] == secondPlayer)
			{
				if (gamePlace[i][2] == firstPlayer || gamePlace[i][2] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
				}
				else
				{
					gamePlace[i][2] = firstPlayer; gameBoard(gamePlace);
				}
			}
		}
	}


	//check colums
	if (firstPlayer == "X")
	{
		for (int i = 0; i < 3; i++)
		{

			if (gamePlace[1][i] == firstPlayer && gamePlace[2][i] == firstPlayer)
			{
				if (gamePlace[0][i] == firstPlayer || gamePlace[0][i] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
				}
				else
				{
					gamePlace[0][i] = secondPlayer; gameBoard(gamePlace);
				}
			}
			if (gamePlace[0][i] == firstPlayer && gamePlace[2][i] == firstPlayer)
			{
				if (gamePlace[1][i] == firstPlayer || gamePlace[1][i] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
				}
				else
				{
					gamePlace[1][i] = secondPlayer; gameBoard(gamePlace);
				}
			}
			if (gamePlace[0][i] == firstPlayer && gamePlace[1][i] == firstPlayer)
			{
				if (gamePlace[2][i] == firstPlayer || gamePlace[2][i] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
				}
				else
				{
					gamePlace[2][i] = secondPlayer; gameBoard(gamePlace);
				}
			}

		}
	}
	else if (firstPlayer == "O")
	{
		for (int i = 0; i < 3; i++)
		{

			if (gamePlace[1][i] == secondPlayer && gamePlace[2][i] == secondPlayer)
			{
				if (gamePlace[0][i] == firstPlayer || gamePlace[0][i] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
				}
				else
				{
					gamePlace[0][i] = firstPlayer; gameBoard(gamePlace);
				}
			}
			if (gamePlace[0][i] == secondPlayer && gamePlace[2][i] == secondPlayer)
			{
				if (gamePlace[1][i] == firstPlayer || gamePlace[1][i] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
				}
				else
				{
					gamePlace[1][i] = firstPlayer; gameBoard(gamePlace);
				}
			}
			if (gamePlace[0][i] == secondPlayer && gamePlace[1][i] == secondPlayer)
			{
				if (gamePlace[2][i] == firstPlayer || gamePlace[2][i] == secondPlayer)
				{
					aiGameNew(gamePlayer2, gamePlayer1, player2Move);
				}
				else
				{
					gamePlace[2][i] = firstPlayer; gameBoard(gamePlace);
				}
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
			}
			else
			{
				gamePlace[0][0] = secondPlayer; gameBoard(gamePlace);
			}
		}
		if (gamePlace[0][0] == firstPlayer && gamePlace[2][2] == firstPlayer)
		{
			if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
			{
				aiGameNew(gamePlayer2, gamePlayer1, player2Move);
			}
			else
			{
				gamePlace[1][1] = secondPlayer; gameBoard(gamePlace);
			}
		}
		if (gamePlace[0][0] == firstPlayer && gamePlace[1][1] == firstPlayer)
		{
			if (gamePlace[2][2] == firstPlayer || gamePlace[2][2] == secondPlayer)
			{
				aiGameNew(gamePlayer2, gamePlayer1, player2Move);
			}
			else
			{
				gamePlace[2][2] = secondPlayer; gameBoard(gamePlace);
			}
		}


		//check from upper-right to lower-left
		if (gamePlace[2][0] == firstPlayer && gamePlace[1][1] == firstPlayer)
		{
			if (gamePlace[0][2] == firstPlayer || gamePlace[0][2] == secondPlayer)
			{
				aiGameNew(gamePlayer2, gamePlayer1, player2Move);
			}
			else
			{
				gamePlace[0][2] = secondPlayer; gameBoard(gamePlace);
			}
		}
		if (gamePlace[2][0] == firstPlayer && gamePlace[0][2] == firstPlayer)
		{
			if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
			{
				aiGameNew(gamePlayer2, gamePlayer1, player2Move);
			}
			else
			{
				gamePlace[1][1] = secondPlayer; gameBoard(gamePlace);
			}
		}
		if (gamePlace[0][2] == firstPlayer && gamePlace[1][1] == firstPlayer)
		{
			if (gamePlace[2][0] == firstPlayer || gamePlace[2][0] == secondPlayer)
			{
				aiGameNew(gamePlayer2, gamePlayer1, player2Move);
			}
			else
			{
				gamePlace[2][0] = secondPlayer; gameBoard(gamePlace);
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
			}
			else
			{
				gamePlace[0][0] = firstPlayer; gameBoard(gamePlace);
			}
		}
		if (gamePlace[0][0] == secondPlayer && gamePlace[2][2] == secondPlayer)
		{
			if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
			{
				aiGameNew(gamePlayer2, gamePlayer1, player2Move);
			}
			else
			{
				gamePlace[1][1] = firstPlayer; gameBoard(gamePlace);
			}
		}
		if (gamePlace[0][0] == secondPlayer && gamePlace[1][1] == secondPlayer)
		{
			if (gamePlace[2][2] == firstPlayer || gamePlace[2][2] == secondPlayer)
			{
				aiGameNew(gamePlayer2, gamePlayer1, player2Move);
			}
			else
			{
				gamePlace[2][2] = firstPlayer; gameBoard(gamePlace);
			}
		}


		//check from upper-right to lower-left
		if (gamePlace[2][0] == secondPlayer && gamePlace[1][1] == secondPlayer)
		{
			if (gamePlace[0][2] == firstPlayer || gamePlace[0][2] == secondPlayer)
			{
				aiGameNew(gamePlayer2, gamePlayer1, player2Move);
			}
			else
			{
				gamePlace[0][2] = firstPlayer; gameBoard(gamePlace);
			}
		}
		if (gamePlace[2][0] == secondPlayer && gamePlace[0][2] == secondPlayer)
		{
			if (gamePlace[1][1] == firstPlayer || gamePlace[1][1] == secondPlayer)
			{
				aiGameNew(gamePlayer2, gamePlayer1, player2Move);
			}
			else
			{
				gamePlace[1][1] = firstPlayer; gameBoard(gamePlace);
			}
		}
		if (gamePlace[0][2] == secondPlayer && gamePlace[1][1] == secondPlayer)
		{
			if (gamePlace[2][0] == firstPlayer || gamePlace[2][0] == secondPlayer)
			{
				aiGameNew(gamePlayer2, gamePlayer1, player2Move);
			}
			else
			{
				gamePlace[2][0] = firstPlayer; gameBoard(gamePlace);
			}
		}
	}
}