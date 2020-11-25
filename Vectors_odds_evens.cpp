#include <iostream>
#include <vector>

using namespace std;

int main(){

  vector<int> nums = {2, 4, 3, 6, 1, 9};

  double even = 0;
  double odds = 0;

  for (int i = 0; i < nums.size(); i++){

    if(nums[i] % 2 == 0){

      //even
      even += nums[i];

    }
    else{

      odds += nums[i];
    }

  }

  cout << "The sum of the even numbers is: " << even << endl;

  cout << "The sum of the odd numbers is: " << odds << endl;


}