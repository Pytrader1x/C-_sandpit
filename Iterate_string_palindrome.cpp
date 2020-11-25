#include <iostream>

// Define is_palindrome() here:

bool is_palindrome(std::string text){

  std::string backward_text = "";

  for(int i=text.size()-1; i>=0; i--){

    backward_text += text[i];

  }

  std::cout << backward_text << std::endl;

  if(backward_text==text){
    return true;
  }
  else {
    return false;

  }

}


int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}
