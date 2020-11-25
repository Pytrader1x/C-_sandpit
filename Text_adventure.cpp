#include <iostream>

using namespace std;

int main(){

  // Begining

  int answer1 = 0;
  string character = "";

  int answer2 = 0;
  string weapon = "";
  int answer3 = 0;
  string target = "";
  int answer4 = 0;
  string reaction = "";
  
  while (answer1 == 0 || answer1 > 4){
     cout << "Q1) Choose your character:" << endl;
     cout << "1) Knight" << endl;
     cout << "2) Wizard" << endl;
     cout << "3) Monster" << endl;
     cout << "4) Orc" << endl;
     
     cin >> answer1;

     switch(answer1){
         case 1:
            character = "Knight";
            break;
        case 2:
            character = "Wizard";
            break;
        case 3:
            character = "Monster";
            break;
        case 4:
            character = "Orc";
            break;
        default:
            character = "Unknown";
            break;
            }
     cout << "you chose: " << answer1 << " : "<< character << endl;
  }
 
    while (answer2 == 0 || answer2 > 4){
     cout << "Q1) Choose your weapon:" << endl;
     cout << "1) Magic spell" << endl;
     cout << "2) Cannon" << endl;
     cout << "3) Bow & arrow" << endl;
     cout << "4) Sword" << endl;
     
     cin >> answer2;

     switch(answer2){
         case 1:
            weapon = "Magic spell";
            break;
        case 2:
            weapon = "Cannon";
            break;
        case 3:
            weapon = "Bow & arrow";
            break;
        case 4:
            weapon = "Sword";
            break;
        default:
            weapon = "Unknown";
            break;
            }
     cout << "you chose: " << answer2 << " : "<< weapon << endl;
  }

     while (answer3 == 0 || answer3 > 4){
     cout << "Q1) Choose your Target:" << endl;
     cout << "1) Samurai" << endl;
     cout << "2) Peasant" << endl;
     cout << "3) Monster" << endl;
     cout << "4) Orc" << endl;
     
     cin >> answer3;

     switch(answer3){
         case 1:
            target = "Samurai";
            break;
        case 2:
            target = "Peasant";
            break;
        case 3:
            target = "Monster";
            break;
        case 4:
            target = "Orc";
            break;
        default:
            target = "Unknown";
            break;
            }
     cout << "you chose: " << answer3 << " : "<< target << endl;
  }

  int health = 10;
  int target_health = 10;
  int action = 0;

  while (health > 0 && target_health > 0){

      /* initialize random seed: */
    srand (time(NULL));
    /* generate secret number between 1 and 10: */
    int your_damage = rand() % 3 + 1;
      /* initialize random seed: */
    srand (time(NULL));
    int target_damage = rand() % 5 + 1;
  
    cout << "1) Attack" << endl;
    cout << "2) Shield" << endl;
    cin >> action;

    if (action==1){

        cout << "You Attack with " << weapon << " causing "<< target_damage << " damage " <<endl;

        target_health = target_health - target_damage;
        health = health - your_damage;
        cout << "Your health is: " << health <<endl;
        cout << "The "<< target << " health is: " << target_health <<endl;
    
    }
    else if(action==2){
        cout << "You Shield " << endl;
        srand (time(NULL));

        /* generate secret number between 1 and 2: */
        int your_damage = rand() % 1 + 1;
        health = health - your_damage;
        cout << "Your health is: " << health <<endl;
        cout << "The "<< target << " health is: " << target_health << endl;
    }

      }

    if(health > target_health){

        cout << "You killed the " << target << " with your " << weapon << endl;
    }
    else if(target_health > health){
        cout << "The enemy " << target << " killed you " << endl;
    }
    else{
        cout << "Draw";
    }
      

  }

  

  


