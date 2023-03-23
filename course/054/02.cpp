#include <iostream>
using namespace std;

int main()
{
  cout << "|===============|\n";
  cout << "|== Guess Num ==|\n";
  cout << "|===============|\n";
  cout << "|=== 0 : 100 ===|\n";
  cout << "|===============|\n";

  int rNum = 70;
  int guessCount = 0;
  int maxGuess = 5;
  int input;

  while (true)
  {
    if (guessCount == maxGuess)
    {
      cout << "Game over you lose."
           << "\n";
      break;
    }

    cout << "Input your guess: ";
    cin >> input;

    if (rNum == input)
    {
      cout << "Congratz u win!"
           << "\n";
      break;
    }

    if (input > rNum)
    {
      cout << "The num is smaller"
           << "\n";
    }
    else
    {
      cout << "The num is bigger"
           << "\n";
    }

    guessCount++;
  }
}