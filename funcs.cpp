/*
Author: Shahzaib Fareed
Course: CSCI-135
Instructor: Zamansky
Assignment: Lab 9
    Code for all tasks excluding task D
*/
#include <iostream>
#include "funcs.h"
#include <cmath>
// add functions here

double length(Coord3D *p){
    return sqrt(pow((*p).x,2) + pow((*p).y,2) + pow((*p).z,2));
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    double point1dist = length(p1);
    double point2dist = length(p2);
    return (point1dist > point2dist) ? p1 : p2;
}