#include <iostream>

using namespace std;

int main() {
  
  double weight, gravity;
  int planet;
  
  cout << "What is your Earth weight in KG? \n";
  cin >> weight;

  cout << "What planet number do you choose? \n";
  cin >> planet;

  switch(planet){

    case 1:
      gravity = 0.38;
      break;
    case 2:
      gravity = 0.91;
      break;
    case 3:
      gravity = 0.38;
      break;
     case 4:
      gravity = 2.34;
      break;
     case 5:
      gravity = 1.06;
      break;
     case 6:
      gravity = 0.92;
      break;
     case 7:
      gravity = 1.19;
      break;
    default:
      gravity = 1;
    // Earth
  }

  weight = weight * gravity;

  cout << "Your weight on planet " << planet << " is " << weight << "KG\n";


  
  
  
  
  
  
  
  
  
}