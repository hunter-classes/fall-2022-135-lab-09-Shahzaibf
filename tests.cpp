#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Task A"){
    Coord3D point = {0, 0, 0};
    CHECK(length(&point) == 0);
    point = {70, 20, 10};
    CHECK(length(&point) == sqrt(4900 + 400 + 100));
    point = {5, 9, 3};
    CHECK(length(&point) == sqrt(25 + 81 + 9));
}

TEST_CASE("Task B"){
    Coord3D pointP = {21, 200, 401};
    Coord3D pointQ = {123, 422, 123};
    CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointQ);
    pointP = {6, 7, 8};
    pointQ = {6, 11, 4};
    CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointQ);
}

TEST_CASE("Task C"){
    Coord3D pos = {5, 4, 3};
    Coord3D vel = {4, 2, 1};
    move(&pos, &vel, 3.0);
    CHECK(pos.x == 17);
    CHECK(pos.y == 10);
    CHECK(pos.z == 6);
    pos = {11, 21, 1};
    vel = {-2, 3, 1};
    move(&pos, &vel, 1.1);
    CHECK(pos.x == 8.8);
    CHECK(pos.y == 24.3);
    CHECK(pos.z == 2.1);
}