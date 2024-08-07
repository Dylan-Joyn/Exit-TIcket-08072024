// Exit TIcket 08072024.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "cube_it.h"
#include "NumEater.h"

using namespace std;

int main() {
    int intVal = 3;
    double doubleVal = 2.5;

    cout << "Cube of " << intVal << " is " << cube_it(intVal) << endl;
    cout << "Cube of " << doubleVal << " is " << cube_it(doubleVal) << endl;

    NumEater<int> intEater;
    NumEater<double> doubleEater;

    int numbers[] = { 8 };
    double floatingNumbers[] = { 8.9 };

    for (int num : numbers) {
        intEater.eat(num);
    }

    for (double num : floatingNumbers) {
        doubleEater.eat(num);
    }
    cout << "Sum of intEater: " << intEater.burp() << endl;
    cout << "Sum of doubleEater: " << doubleEater.burp() << endl;

}

