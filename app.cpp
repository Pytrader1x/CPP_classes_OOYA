#include <iostream>
#include "profile.hpp"


int main() {

  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

  sam.add_hobby("Football");
  sam.add_hobby("Skiing");
  sam.add_hobby("Tennis");
  sam.add_hobby("c++");
  sam.add_hobby("Python");
  
  Profile george("George the_quant", 28, "Tokyo", "Japan", "he/him");

  george.add_hobby("Rugby");
  george.add_hobby("R coding language");
  george.add_hobby("C++ for trading");
  george.add_hobby("Baking cakes");

  std::cout << sam.view_profile();


  std::cout << george.view_profile();




}