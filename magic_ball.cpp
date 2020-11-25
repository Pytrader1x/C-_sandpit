#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  // main func


  cout << "MAGIC 8-BALL" << endl << endl;
  srand(time(NULL));
  int answer = rand() % 10;
  cout << answer;

  if (answer == 0) {

    cout << "It is certain";
  }

  else if(answer == 1){
    cout << "It is decidedly so.";
  }
  else if(answer == 2){
    cout << "Without a doubt";
  }
  else if(answer == 3){
    cout << "Outlook good";
  }
  else if(answer == 4){
    cout << "Ask again later.";
  }
  else {
    cout << "Very doubtful";
  }

}