#include <iostream>
using namespace std;

int main()
{
  cout << "|=======================|\n";
  cout << "|===== Rank viewer =====|\n";
  cout << "|=======================|\n";

  int points;

  cout << "Enter your points: ";
  cin >> points;

  int result;

  /*
  Elite League
  Supreme Order
  Master Division
  Ultimate Rank
  Prodigy Class
  */

  if (points >= 0 && points < 200)
    cout << "Elite League";
  else if (points < 400)
    cout << "Supreme Order";
  else if (points < 600)
    cout << "Master Division";
  else if (points < 800)
    cout << "Ultimate Rank";
  else
    cout << "Prodigy Class";
}