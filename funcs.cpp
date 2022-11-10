/*
Author: Shahzaib Fareed
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 8
    Code for all tasks excluding task D
*/
#include <iostream>
#include "funcs.h"
#include <cmath>
// add functions here

double length(Coord3D *p){
    return sqrt(pow((*p).x,2) + pow((*p).y,2) + pow((*p).z,2));
}