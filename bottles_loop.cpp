#include <iostream>

using namespace std;

int main() {

  // Write a for loop here:

  int bottles;
  std::cout << "How many bottles of pop would you like?: \n";
  std::cin >> bottles;

  
  for (int i = bottles ; i >0; i--)
  {

    cout << i << " bottles of pop on the wall." << endl;
    cout << "Take one down and pass it around." << endl;
    cout << i -1 << " bottles of pop on the wall." << endl;

    if(i == 1){
      std::cout << i -1<< " No more bottles of pop on the wall \n";
    }




  }
  
  
  
  
  
  
  
  
  
  
  
  
}