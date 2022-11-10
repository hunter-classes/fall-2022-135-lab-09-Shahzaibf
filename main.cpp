/*
Author: Shahzaib Fareed
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 9
  All tasks checked here except Task D.
  Lab includes using pointers to represent vectors and test funcs
*/
#include <iostream>


#include "funcs.h"

int main() {
  Coord3D pointP = {10, 20, 30};
  std::cout << length(&pointP) << std::endl; // would print 37.4166

  Coord3D pointZ = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};

  std::cout << "Address of P: " << &pointZ << std::endl;
  std::cout << "Address of Q: " << &pointQ << std::endl << std::endl;

  Coord3D * ans = fartherFromOrigin(&pointZ, &pointQ);
  
  std::cout << "ans = " << ans << std::endl; // So which point is farther?
  
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;
  
  return 0;
}
