#include <iostream>
using namespace std;


int main() {
  
  double pesos, reais, soles, dollars;

  cout << "Enter number of colombian pesos: \n";
  cin >> pesos;

  cout << "Enter number of Brazilian reas: \n";
  cin >> reais;

  cout << "Enter number of Peruvian soles: \n";
  cin >> soles;

  /* pesos 0.049
     reais 0.18
     soles 0.27
  */

  dollars = 0.049 * pesos + 0.18 * reais + 0.27 * soles;

  cout << "US Dollars = $" << dollars;

}