#include <iostream>
using namespace std;

/* Board Template
 *
 *    |---|---|---|
 *    |   |   |   |
 *    |---|---|---|
 *    |   |   |   |
 *    |---|---|---|
 *    |   |   |   |
 *    |---|---|---|
 *
 *      0   1   2
 *    |---|---|---|
 * 0  | 1 | 2 | 3 |  1
 *    |---|---|---|
 * 1  | 4 | 5 | 6 |  2
 *    |---|---|---|
 * 2  | 7 | 8 | 9 |  3
 *    |---|---|---|
 *      1   2   3
 */

/*************/

void drawGameHeader();
void drawBoard(char board[3][3]);
int getPlayerMove(char playerTurn);
void showGameOverMsg(char winner);

/***************/

// Easy If have multi return
// Or return list of 2 int=> int moves[2]
int getBoardCol(int pos);
int getBoardRow(int pos);

/*************/

/*
 * 0 |=> continue
 * 1 |=> full
 * x |=> x win
 * o |=> o win
 */
char checkGameOver(char board[3][3]);

/*************/

int main()
{

  char playerTurn = 'o';
  char board[3][3];
  char emptyBoard[3][3];
  string msg = "";
  bool reset = true;

  while (true)
  {
    if (reset)
    {
      for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++)
        {
          board[i][j] = (i * 3) + (j + 1);
        }
      }
      reset = false;
    }

    system("cls");
    drawGameHeader();
    cout << "\n\n";

    char checkResult = checkGameOver(board);
    if (checkResult == 1)
    {
      showGameOverMsg(1);
      cout << "\n";
      cout << "Play again?\n1- Yes\n0- No\nYour answer: ";
      cin >> reset;
      if (!reset)
      {
        break;
      };
    }
    else if (checkResult == 'x')
    {
      showGameOverMsg('x');
      cout << "\n";
      cout << "Play again?\n1- Yes\n0- No\nYour answer: ";
      cin >> reset;
      if (!reset)
      {
        break;
      }
    }
    else if (checkResult == 'o')
    {
      showGameOverMsg('o');
      cout << "\n";
      cout << "Play again?\n1- Yes\n0- No\nYour answer: ";
      cin >> reset;
      if (!reset)
      {
        break;
      }
    }
    else
    {
      drawBoard(board);
      cout << "\n\n";
      cout << "MSG: " << msg << "\n";
      cout << "\n";

      int move = getPlayerMove(playerTurn);

      int row = getBoardRow(move);
      int col = getBoardCol(move);
      char cellContent = board[row][col];

      if (cellContent == 'x' || cellContent == 'o')
      {
        msg = "Please choose an empty cell.";
      }
      else
      {
        board[row][col] = playerTurn;
        switch (playerTurn)
        {
        case 'x':
          playerTurn = 'o';
          break;

        default:
          playerTurn = 'x';
          break;
        }
      }
    }
  }

  system("pause");

  return 0;
}

void drawGameHeader()
{
  cout << "|---|---|---|\n";
  cout << "|TIC TAC TOE|\n";
  cout << "|---|---|---|\n";
}

void drawBoard(char board[3][3])
{
  cout << "|---|---|---|"
       << "\n";
  for (int i = 0; i < 3; i++)
  {
    // New row

    for (int j = 0; j < 3; j++)
    {
      // New Cell
      char cell = board[i][j];

      if (cell == 'x' || cell == 'o')
      {
        cout << "| "
             << cell
             << " ";
      }
      else
      {
        // cell = (i * 3) + (j + 1);

        cout << "| "
             << (int)cell
             << " ";
      }
    }

    cout << "|"
         << "\n";

    cout << "|---|---|---|\n";
  }
}

int getPlayerMove(char playerTurn)
{
  cout << "|-Pick Cell-|\n";
  cout << "Turn for " << playerTurn << ": ";

  int move;
  cin >> move;
  return move;
}

int getBoardCol(int pos)
{
  int rowPos;
  int colPos;
  int colCount = 3;
  int rowCount = 3;
  for (int i = 0; i < rowCount; i++)
  {
    for (int j = 0; j < colCount; j++)
    {
      if ((i * rowCount) + (j + 1) == pos)
      {
        rowPos = i;
        colPos = j;
      }
    }
  }

  return colPos;
}

int getBoardRow(int pos)
{
  int rowPos;
  int colPos;
  int colCount = 3;
  int rowCount = 3;
  for (int i = 0; i < rowCount; i++)
  {
    for (int j = 0; j < colCount; j++)
    {
      if ((i * rowCount) + (j + 1) == pos)
      {
        rowPos = i;
        colPos = j;
      }
    }
  }

  return rowPos;
}

char checkGameOver(char board[3][3])
{
  // check rows
  for (int i = 0; i < 3; i++)
  {
    if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
    {
      if (board[i][0] == 'o' || board[i][0] == 'x')
      {
        return board[i][0];
      }
    }
  }

  // check cols
  for (int i = 0; i < 3; i++)
  {
    if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
    {
      if (board[i][0] == 'o' || board[i][0] == 'x')
      {
        return board[i][0];
      }
    }
  }

  // check Diagonlas
  if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
  {
    if (board[1][1] == 'o' || board[1][1] == 'x')
    {
      return board[1][1];
    }
  }
  else if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
  {
    if (board[1][1] == 'o' || board[1][1] == 'x')
    {
      return board[1][1];
    }
  }

  // check full
  int fullCells = 0;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (board[i][j] == 'x' || board[i][j] == 'o')
      {
        fullCells++;
      }
    }
  }

  if (fullCells == 9)
  {
    return 1;
  }

  return 0;
}

void showGameOverMsg(char winner)
{
  switch (winner)
  {
  case 1:
    cout << "|---|---|---|\n";
    cout << "| - | - | - |\n";
    cout << "|---|---|---|\n";
    cout << "| - | - | - |\n";
    cout << "|---|---|---|\n";
    cout << "| - | - | - |\n";
    cout << "|---|---|---|\n";
    cout << "  F   U   L  \n";
    break;

  case 'x':
    cout << "|---|---|---|\n";
    cout << "| X       X |\n";
    cout << "|---X---X---|\n";
    cout << "|     X     |\n";
    cout << "|---X---X---|\n";
    cout << "| X       X |\n";
    cout << "|---|---|---|\n";
    cout << "  W   I   N  \n";
    break;

  case 'o':
    cout << "|---|---|---|\n";
    cout << "| O   O   O |\n";
    cout << "|--- --- ---|\n";
    cout << "| O       O |\n";
    cout << "|--- --- ---|\n";
    cout << "| O   O   O |\n";
    cout << "|---|---|---|\n";
    cout << "  W   I   N  \n";
    break;

  default:
    break;
  }
}