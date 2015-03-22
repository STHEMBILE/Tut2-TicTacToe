/*
TicTac Toe Game
Main prgrame testing TicTac Class
*/

#include <iostream>
#include <stdlib.h>
#include <string>

#include "TicTacToe.h"

using namespace std;

int main()
{
	int p;

	TicTacToe Tic;
	Tic.Instructions();


start:{
	string plyr1, plyr2;

	cout << "\n ============================" << endl << endl;
	cout << "   >>>>The Tic Tac Toe GAME <<<<" << endl;
	cout << " ----------------------------" << endl;

	cout << " First player name: "; cin >> plyr1;
	cout << " Second player name: "; cin >> plyr2;
	cout << endl << " ----------------------------";

	while (Tic.Win() != true || Tic.Draw() != true)
	{
		// Player One
		cout << endl << " " << plyr1 << " your Turn (X): "; cin >> p; Tic.player1(p);
		cout << " ----------------------------" << endl;

		if (Tic.Win() == true)
		{
			cout << " " << plyr1 << " WIN!" << endl; Tic.displayGame(); cout << endl << endl;
			break;
		}
		else if (Tic.Draw() == true)
		{
			cout << " Draw!" << endl; Tic.displayGame(); cout << endl << endl;
			break;
		}

		Tic.displayGame();
		cout << endl << " ----------------------------" << endl;

		// Player Two
		cout << " " << plyr2 << " your Turn (O): "; cin >> p; Tic.player2(p);
		cout << " ----------------------------" << endl;

		if (Tic.Win() == true)
		{
			cout << " " << plyr2 << " WIN!" << endl; Tic.displayGame(); cout << endl << endl;
			break;
		}
		else if (Tic.Draw() == true)
		{
			cout << " Draw!" << endl; Tic.displayGame(); cout << endl << endl;
			break;
		}

		Tic.displayGame();
		cout << endl << " ----------------------------";
	}
}
	  int choice;
	  cout << " ============================" << endl;
	  cout << " 1. New game." << endl << " 2. Exit." << endl << " > ";

  nwGmOrExt:{

	  cin >> choice;

	  switch (choice)
	  {
	  case 1:{
		  Tic.RESET();
		  cout << " ----------------------------" << endl;
		  Tic.displayGame();
		  goto start;
		  break;
	  }
	  case 2:{
		  break;
	  }
	  default:{
		  cout << " Invalid option. Please try again." << endl;
		  goto nwGmOrExt;
	  }
	  }
  }

			cout << endl << " ============================" << endl << endl;

			return 0;
}