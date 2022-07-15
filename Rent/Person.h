#ifndef PERSON_H_
#define PERSON_H_
#include<iostream>
#include<string>
using namespace std;
class Person{
	private:
		string Name,Surname,Mail;
		int Age,Phone;
		  
		  
		  public:
		  Person();
          virtual ~Person();
		  void setMail(string Mail);
		  void setPhone(int Phone);
		  void setName(string Name);
		  void setSurname(string Surname);
		  void setAge(int Age);
		  string getName();
		  string getSurname();
		  string getMail();
		  int getPhone();
		  int getAge();
		  
		   void PrintPerson();
		
};
#endif