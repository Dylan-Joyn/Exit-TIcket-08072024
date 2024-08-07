#pragma once
#ifndef NUM_EATER_H
#define NUM_EATER_H

#include <iostream>

using namespace std;

template <typename T>
class NumEater {
public:
    NumEater() : sum(0) {}

    void eat(T num) {
        cout << "nom-nom" << endl;
        sum += num;
    }

    T burp() const {
        return sum;
    }

private:
    T sum;
};

#endif



