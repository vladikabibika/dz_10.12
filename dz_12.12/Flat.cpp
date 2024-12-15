#include "Flat.h"
#include <iostream>

using namespace std;

Flat::Flat() {
    area = 0;
    price = 0;
}

Flat::Flat(double a, double p) {
    area = a;
    price = p;
}


bool Flat::operator==(const Flat& other) const {
    return area == other.area;
}

Flat& Flat::operator=(const Flat& other) {
    if (this != &other) {
        area = other.area;
        price = other.price;
    }
    return *this;
}

bool Flat::operator>(const Flat& other) const {
    return price > other.price;
}

void Flat::display() const {
    cout << "Area: " << area << " sq.m, Price: " << price << " USD" << endl;
}