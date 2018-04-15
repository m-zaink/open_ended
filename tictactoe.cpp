#include <iostream>
#include <cstdlib>

using namespace std;

char box[10] = {'o','1','2','3','4','5','6','7','8','9'};

int checkwin();
void board();

int main()
{
	int player = 1,i,choice;

	char symbol;
	do
	{
		board();
		player=(player%2)?1:2;

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;

		symbol=(player == 1) ? 'X' : 'O';

		if (choice == 1 && box[1] == '1')

			box[1] = symbol;
		else if (choice == 2 && box[2] == '2')

			box[2] = symbol;
		else if (choice == 3 && box[3] == '3')

			box[3] = symbol;
		else if (choice == 4 && box[4] == '4')

			box[4] = symbol;
		else if (choice == 5 && box[5] == '5')

			box[5] = symbol;
		else if (choice == 6 && box[6] == '6')

			box[6] = symbol;
		else if (choice == 7 && box[7] == '7')

			box[7] = symbol;
		else if (choice == 8 && box[8] == '8')

			box[8] = symbol;
		else if (choice == 9 && box[9] == '9')

			box[9] = symbol;
		else
		{
			cout<<"Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}
		i=checkwin();

		player++;
	}while(i==-1);
	board();
	if(i==1)

		cout<<"==>\aPlayer "<<--player<<" win ";
	else
		cout<<"==>\aGame draw";

	cin.ignore();
	cin.get();
	return 0;
}

int checkwin()
{
	if (box[1] == box[2] && box[2] == box[3])

		return 1;
	else if (box[4] == box[5] && box[5] == box[6])

		return 1;
	else if (box[7] == box[8] && box[8] == box[9])

		return 1;
	else if (box[1] == box[4] && box[4] == box[7])

		return 1;
	else if (box[2] == box[5] && box[5] == box[8])

		return 1;
	else if (box[3] == box[6] && box[6] == box[9])

		return 1;
	else if (box[1] == box[5] && box[5] == box[9])

		return 1;
	else if (box[3] == box[5] && box[5] == box[7])

		return 1;
	else if (box[1] != '1' && box[2] != '2' && box[3] != '3'
                    && box[4] != '4' && box[5] != '5' && box[6] != '6'
                  && box[7] != '7' && box[8] != '8' && box[9] != '9')

		return 0;
	else
		return -1;
}




void board()
{
	system("clear");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << box[1] << "  |  " << box[2] << "  |  " << box[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << box[4] << "  |  " << box[5] << "  |  " << box[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << box[7] << "  |  " << box[8] << "  |  " << box[9] << endl;

	cout << "     |     |     " << endl << endl;
}
