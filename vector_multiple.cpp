#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num){

  std::vector<int> multiples;

  for(int i =num; i < 10000; i++){

    std::cout << i << std::endl;

    if(i % num == 0){
      multiples.push_back(i);
    }

    if(multiples.size() == 3){
      std::cout << "The size of the vector is " << multiples.size() << std::endl; 
      return multiples;

    }
  }

  std::cout << "The size of the vector is " << multiples.size() << std::endl;  

  return multiples;

}

int main() {
  
  for (int element : first_three_multiples(890)) {
    std::cout << element << "\n";
  }
  
}