#include <iostream>
#include <string>
using namespace std;
void aiCheck(string gameBoard[3][3], string playerMove)
{
	//check rows
	if (playerMove == "X")
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (gameBoard[i][j + 1] == "X" && gameBoard[i][j + 2] == "X")
				{
					gameBoard[i][j] = "O";
				}
				if (gameBoard[i][j] == "X" && gameBoard[i][j + 2] == "X")
				{
					gameBoard[i][j + 1] = "O";
				}
				if (gameBoard[i][j] == "X" && gameBoard[i][j + 1] == "X")
				{
					gameBoard[i][j + 2] = "O";
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (gameBoard[i][j + 1] == "O" && gameBoard[i][j + 2] == "O")
				{
					gameBoard[i][j] = "X";
				}
				if (gameBoard[i][j] == "O" && gameBoard[i][j + 2] == "O")
				{
					gameBoard[i][j + 1] = "X";
				}
				if (gameBoard[i][j] == "O" && gameBoard[i][j + 1] == "O")
				{
					gameBoard[i][j + 2] = "X";
				}
			}
		}
	}


	//check colums
	if (playerMove == "X")
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (gameBoard[i + 1][j] == "X" && gameBoard[i + 2][j] == "X")
				{
					gameBoard[i][j] = "O";
				}
				if (gameBoard[i][j] == "X" && gameBoard[i + 2][j] == "X")
				{
					gameBoard[i + 1][j] = "O";
				}
				if (gameBoard[i][j] == "X" && gameBoard[i + 1][j] == "X")
				{
					gameBoard[i + 2][j] = "O";
				}

			}
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (gameBoard[i + 1][j] == "O" && gameBoard[i + 2][j] == "O")
				{
					gameBoard[i][j] = "X";
				}
				if (gameBoard[i][j] == "O" && gameBoard[i + 2][j] == "O")
				{
					gameBoard[i + 1][j] = "X";
				}
				if (gameBoard[i][j] == "O" && gameBoard[i + 1][j] == "O")
				{
					gameBoard[i + 2][j] = "X";
				}
			}
		}
	}

	//check diagonals
	if (playerMove == "X")
	{
		//check from upper-left to lower-right
		if (gameBoard[1][1] == "X" && gameBoard[2][2] == "X")
		{
			gameBoard[0][0] = "O";
		}
		if (gameBoard[0][0] == "X" && gameBoard[2][2] == "X")
		{
			gameBoard[1][1] = "O";
		}
		if (gameBoard[0][0] == "X" && gameBoard[1][1] == "X")
		{
			gameBoard[2][2] = "O";
		}


		//check from upper-right to lower-left
		if (gameBoard[2][0] == "X" && gameBoard[1][1] == "X")
		{
			gameBoard[0][2] = "O";
		}
		if (gameBoard[2][0] == "X" && gameBoard[0][2] == "X")
		{
			gameBoard[1][1] = "O";
		}
		if (gameBoard[0][2] == "X" && gameBoard[1][1] == "X")
		{
			gameBoard[2][0] = "O";
		}
	}

	else
	{
		//check from upper-left to lower-right
		if (gameBoard[1][1] == "O" && gameBoard[2][2] == "O")
		{
			gameBoard[0][0] = "X";
		}
		if (gameBoard[0][0] == "O" && gameBoard[2][2] == "O")
		{
			gameBoard[1][1] = "X";
		}
		if (gameBoard[0][0] == "O" && gameBoard[1][1] == "O")
		{
			gameBoard[2][2] = "X";
		}


		//check from upper-right to lower-left
		if (gameBoard[2][0] == "O" && gameBoard[1][1] == "O")
		{
			gameBoard[0][2] = "X";
		}
		if (gameBoard[2][0] == "O" && gameBoard[0][2] == "O")
		{
			gameBoard[1][1] = "X";
		}
		if (gameBoard[0][2] == "O" && gameBoard[1][1] == "O")
		{
			gameBoard[2][0] = "X";
		}
	}
}