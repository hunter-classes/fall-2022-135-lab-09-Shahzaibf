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

void move(Coord3D *ppos, Coord3D *pvel, double dt){
    (*ppos).x = (*ppos).x + (*pvel).x * dt; 
    (*ppos).y = (*ppos).y + (*pvel).y * dt; 
    (*ppos).z = (*ppos).z + (*pvel).z * dt; 
}

Coord3D* createCoord3D(double x, double y, double z){
    Coord3D *point = new Coord3D();
    (*point).x = x;
    (*point).y = y;
    (*point).z = z;
    return point;
}

void deleteCoord3D(Coord3D *p){
    delete p;
}