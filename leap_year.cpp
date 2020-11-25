#include <iostream>

using namespace std;

int main() {
  

  int y = 0;
  
  cout << "Enter this year";
  cin >> y;

  if (y < 1000 || y > 9999){

    cout << "Invalid entry";
  }

  else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0){

    cout << y << " falls on a leap year.\n";
  }

  else{
    cout << y << " is not a leap year" << endl;
  }
}