#ifndef _NOKTA_
#define _NOKTA_
#include "Nokta.h"

Nokta::Nokta() {
    std::cout << "parametresiz kurucu" << endl;
    x = 0;
    y = 0;
}

Nokta::Nokta(int x, int y) :x(x),y(y) {}

int Nokta::getX()const{
    return x;
}

int Nokta::getY()const{
    return y;
}

void Nokta::setX(int x) {
    this->x = x;
}

void Nokta::setY(int y) {
    this->y=y;
}
std:.ostream& operator<<(ostream& out,Nokta& n){
	out<<n.x<<","<<n.y;
	return out;
}
