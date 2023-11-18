#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int RandomNumber() {

  srand(static_cast<unsigned int>(time(0)));

  int lb = 1;
  int ub = 10;

  int random_number = rand() % (ub - lb + 1) + lb;

  return random_number;
}

int main() {

  int random_Number = RandomNumber();
  int n;
  cout << "                    NUMBER GUESSING GAME" << endl;
  cout<<"\n\n";
  cout << "  Enter a Number (1-10) : ";
  cin >> n;
  
  while (n != random_Number) {
    if (n > random_Number) {
      cout << "  Too High" << endl;
    } else if (n < random_Number) {
      cout << "  Too Low" << endl;
    }

    cout << "  Enter a Number (1-10) : ";
    cin >> n;
    random_Number = RandomNumber();
  }
   cout<<"\n";
  cout << "            You Won! Dare to play again?" << endl;

  return 0;
}
