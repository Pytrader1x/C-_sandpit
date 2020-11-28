#include <iostream>

using namespace std;

int main(){

  // magic starts here

  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1, answer2, answer3, answer4;
  cout << "=====================\n";
  cout << "The Sorting Hat Quiz\n";
  cout << "=====================\n";


  // 1
  cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
 
  cout << "  1) The Good\n";
  cout << "  2) The Great\n";
  cout << "  3) The Wise\n";
  cout << "  4) The Bold\n\n";

  cin >> answer1;

  switch(answer1){

    case 1:
      gryffindor ++;
      break;
    case 2:
      slytherin ++;
      break;
    case 3:
      ravenclaw ++;
      break;
    case 4:
      gryffindor ++;
      break;
    default:
      cout << "Invalid input\n";
      break;
  }

  cout << "Q2) Dawn or Dusk?n\n";
 
  cout << "  1) Dawnn";
  cout << "  2) Dusk\n";
  cin >> answer2;

  if (answer2 == 1){
    gryffindor++;
    ravenclaw ++;
  }

  else if(answer2 == 2){
    hufflepuff ++;
    slytherin ++;
  }
  else{
    cout << "Invalid input";
  }

  cout << "Q3) Which kind of instrument most pleases your ear?\n\n";
 
  cout << "  1) The violin\n";
  cout << "  2) The trumpet\n";
  cout << "  3) The piano\n";
  cout << "  4) The drum\n\n";

  cin >> answer3;

  switch(answer3){

    case 1:
      slytherin ++;
      break;
    case 2:
      hufflepuff ++;
      break;
    case 3:
      ravenclaw ++;
      break;
    case 4:
      gryffindor ++;
      break;
    default:
      cout << "Invalid input";
      break;

  }


  cout << "Q4) Which road tempts you most?\n\n";
 
  cout << "  1) The wide, sunny grassy lane\n";
  cout << "  2) The narrow, dark, lantern-lit alley\n";
  cout << "  3) TThe twisting, leaf-strewn path through woods\n";
  cout << "  4) The cobbled street lined (ancient buildings)\n\n";

  cin >> answer4;

  if (answer4 == 1){
    hufflepuff ++;
  }

  else if(answer4 == 2){
    slytherin++;
  }
  else if(answer4 == 3){
    gryffindor ++;
  }
  else if(answer4 == 4){
    ravenclaw ++;

  }
  else {
    cout << "Invalid input";
  }

int max = 0;
string house;

if (gryffindor > max){
  max = gryffindor;
  house = "gryffindor";
}
if (hufflepuff > max) {

  max = hufflepuff;
  house = "Hufflepuff";

}

if (ravenclaw > max) {

  max = ravenclaw;
  house = "Ravenclaw";

}

if (slytherin > max) {

  max = slytherin;
  house = "Slytherin";

}
  cout << house << "!\n\n";
}