#include"Rent.h"
using namespace std;
Rent::Rent(){
}

Rent::~Rent(){
}
void Rent::setCar(string Car){

    this->Car = Car;
}
void Rent::setCarType(string CarType){

    this->CarType = CarType;
}
void Rent::setCircle(string Circle){

    this->Circle = Circle;
}
void Rent::setCircleType(string CircleType){

    this->CircleType = CircleType;
}
void Rent::setDay(int Day){

    this->Day = Day;
}
void Rent::setSelector(int Selector){

    this->Selector = Selector;
}
void Rent::setSelector2(int Selector2){

    this->Selector2 = Selector2;
}
string Rent::getCar(){
    return Car;
}
string Rent::getCarType(){
    return CarType;
}
string Rent::getCircle(){
    return Circle;
}
string Rent::getCircleType(){
    return CircleType;
}
int Rent::getDay(){
    return Day;
}
int Rent::getSelector(){
    return Selector;
}
int Rent::getSelector2(){
    return Selector2;
}
int Rent::RentPrice(int x , int y){
    return x*y; 
}
