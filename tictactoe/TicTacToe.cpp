/*
The TicTacToe Game Class

*/

#include "TicTacToe.h"

// Constructor
TicTacToe::TicTacToe()   // assigning letter to the boxes
{

	game[0][0] = 'A'; game[0][1] = 'B'; game[0][2] = 'C';
	game[1][0] = 'D'; game[1][1] = 'E'; game[1][2] = 'F';
	game[2][0] = 'G'; game[2][1] = 'H'; game[2][2] = 'I';

}
void TicTacToe::Instructions()
{

	cout << endl << " The gameboard TicTacToe" << endl;
	displayGame();

}
// Display the board
void TicTacToe::displayGame()  // game board
{
	cout << endl;
	cout << "+-----+-----+-----+" << endl;
	cout << "|     |     |     |" << endl;
	cout << "|  " << game[0][0] << "  |  " << game[0][1] << "  |  " << game[0][2] << "  |  " << endl;
	cout << "+-----+-----+-----+" << endl;
	cout << "|     |     |     |" << endl;
	cout << "|  " << game[1][0] << "  |  " << game[1][1] << "  |  " << game[1][2] << "  |  " << endl;
	cout << "+-----+-----+-----+" << endl;
	cout << "|     |     |     |" << endl;
	cout << "|  " << game[2][0] << "  |  " << game[2][1] << "  |  " << game[2][2] << "  |  " << endl;
	cout << "+-----+-----+-----+" << endl;
}

// Check Wins
bool TicTacToe::Win()
{

	if (game[0][0] == game[0][1] && game[0][0] == game[0][2])   // match row1
	{
		return true;
	}
	else if (game[1][0] == game[1][1] && game[1][0] == game[1][2])  // match row2
	{
		return true;
	}
	else if (game[2][0] == game[2][1] && game[2][0] == game[2][2])  // match row3 
	{
		return true;
	}
	else if (game[0][0] == game[1][0] && game[0][0] == game[2][0]) // match column1
	{
		return true;
	}
	else if (game[0][1] == game[1][1] && game[0][1] == game[2][1])  // match column2 
	{
		return true;
	}
	else if (game[0][2] == game[1][2] && game[0][2] == game[2][2]) // match column3
	{
		return true;
	}
	else if (game[0][0] == game[1][1] && game[0][0] == game[2][2])  // match right left diagonal 
	{
		return true;
	}
	else if (game[0][2] == game[1][1] && game[0][2] == game[2][0]) // match left right diagonal
	{
		return true;
	}
	else
	{
		return false;
	}

}

// Check if Draw
bool TicTacToe::Draw()
{
	int drw = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (game[i][j] == 'X' || game[i][j] == 'O')
			{
				drw += 1;
			}
		}
	}

	if (drw == 9) // if spaces are completed on the board
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Resetting the board
void TicTacToe::RESET()
{

	game[0][0] = 'A'; game[0][1] = 'B'; game[0][2] = 'C';
	game[1][0] = 'D'; game[1][1] = 'E'; game[1][2] = 'F';
	game[2][0] = 'G'; game[2][1] = 'H'; game[2][2] = 'I';

}

// Player one's play
void TicTacToe::player1(int position)
{
	if (Win() != true)
	{
		switch (position)  // selecting spaces in the board
		{
		case 1:{
			if (shift(0, 0) == true)
			{
				game[0][0] = 'X';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;
			}
			break;
		}
		case 2:{
			if (shift(0, 1) == true)
			{
				game[0][1] = 'X';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;;
			}
			break;
		}
		case 3:{
			if (shift(0, 2) == true)
			{
				game[0][2] = 'X';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;;
			}
			break;
		}
		case 4:{
			if (shift(1, 0) == true)
			{
				game[1][0] = 'X';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;;
			}
			break;
		}
		case 5:{
			if (shift(1, 1) == true)
			{
				game[1][1] = 'X';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;;
			}
			break;
		}
		case 6:{
			if (shift(1, 2) == true)
			{
				game[1][2] = 'X';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;;
			}
			break;
		}
		case 7:{
			if (shift(2, 0) == true)
			{
				game[2][0] = 'X';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;;
			}
			break;
		}
		case 8:{
			if (shift(2, 1) == true)
			{
				game[2][1] = 'X';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;;
			}
			break;
		}
		case 9:{
			if (shift(2, 2) == true)
			{
				game[2][2] = 'X';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;;
			}
			break;
		}
		default:{
			cout << endl << " Invalid Move!!!" << endl;  //out of box 
		}
		}
	}
}

// Player Two's play
void TicTacToe::player2(int position)
{
	if (Win() != true)
	{
		switch (position)
		{
		case 1:{
			if (shift(0, 0) == true)
			{
				game[0][0] = 'O';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;
			}
			break;
		}
		case 2:{
			if (shift(0, 1) == true)
			{
				game[0][1] = 'O';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;;
			}
			break;
		}
		case 3:{
			if (shift(0, 2) == true)
			{
				game[0][2] = 'O';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;;
			}
			break;
		}
		case 4:{
			if (shift(1, 0) == true)
			{
				game[1][0] = 'O';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;;
			}
			break;
		}
		case 5:{
			if (shift(1, 1) == true)
			{
				game[1][1] = 'O';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;;
			}
			break;
		}
		case 6:{
			if (shift(1, 2) == true)
			{
				game[1][2] = 'O';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;;
			}
			break;
		}
		case 7:{
			if (shift(2, 0) == true)
			{
				game[2][0] = 'O';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;;
			}
			break;
		}
		case 8:{
			if (shift(2, 1) == true)
			{
				game[2][1] = 'O';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;;
			}
			break;
		}
		case 9:{
			if (shift(2, 2) == true)
			{
				game[2][2] = 'O';
			}
			else
			{
				cout << endl << " Invalid Play!!" << endl;;
			}
			break;
		}
		default:{
			cout << endl << " Invalid Move!!!" << endl;
		}
		}
	}
}

// Moving to Valid Position
bool TicTacToe::shift(int row, int column)
{
	if (game[row][column] == 'X' || game[row][column] == 'O') //if player selected the same position as the previous player
	{
		return false;
	}
	else
	{
		return true;
	}
}