#include "ponyp.h"


float Position::gibX(){
    return x;
}
float Position::gibY(){
    return y;
}
void Position::addX(float x_){
    x = x_;
}
void Position::addY(float y_){
    y = y_;
}

void PonyP::ortXY(float x, float y){
    ort.addX(x); ort.addY(y);
}
float PonyP::gibX(){
    return ort.gibX();
}
float PonyP::gibY(){
    return ort.gibY();
}

void Position::addPosition(const Position & objkt_){
    addX(objkt_.x);
    addY(objkt_.y);
}

void PonyP::setzePos(const Position & objkt_){
    ort.addPosition(objkt_);
}

std::string PonyP::gibName(){
    return name;
}


int PonyP::gibGeburtsJahr(){
    return geburtsJahr;
}

