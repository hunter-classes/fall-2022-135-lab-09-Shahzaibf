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