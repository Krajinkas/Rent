#ifndef RENT_H_
#define RENT_H_
#include<iostream>
#include<string>
using namespace std;
class Rent{
    private :
    string Car,CarType,Circle,CircleType;
    int Day,Selector,Selector2;
    public: 
          Rent();
          virtual ~Rent();
		  void setCar(string Car);
		  void setCarType(string CarType);
		  void setCircleType(string CircleType);
		  void setCircle(string Circle);
		  void setDay(int Day);
		  void setSelector(int Selector);
		  void setSelector2(int Selector2);
		  string getCar();
		  string getCarType();
		  string getCircle();
		  string getCircleType();
		  int getDay();
		  int getSelector();
		  int getSelector2();
		  int x;
		  int y;
		  int RentPrice(int,int);
    
    
};
#endif