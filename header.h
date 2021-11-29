/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Maxwell Graeser
 */

#include <iostream>
using namespace std;

void f(const int a, const int b) {
    //a += b;      // does not work
}

void f2(const int a, const int b) {
    int c = a + b;
    cout << "\nc = " << c;
    int d = a * b;
    cout << "\nd = " << d;
}

// answers to Q's in header of main.cpp