#include <iostream>
#include "profile.hpp"


int main() {

  Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

  sam.add_hobby("Football");
  sam.add_hobby("Skiing");
  sam.add_hobby("Tennis");
  sam.add_hobby("c++");
  sam.add_hobby("Python");


  std::cout << sam.view_profile();




}