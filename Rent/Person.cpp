#include"Person.h"
using namespace std;
Person::Person(){
}

Person::~Person(){
}
void Person::setName(string Name){

    this->Name = Name;
}
void Person::setSurname(string Surname){
    
    this->Surname = Surname;
}
void Person::setAge(int Age){
    if(Age<17){
        std::cout << "!!! You are not age enough to rent !!!" << std::endl;
        
    }
    else
    this->Age = Age;
}

void Person::setMail(string Mail){
    
    this->Mail = Mail;
}
void Person::setPhone(int Phone){
    
    this->Phone = Phone;
}
string Person::getName(){
    
    return Name;
}
string Person::getSurname(){
    return Surname;
}
string Person::getMail(){
    return Mail;
}
int Person::getPhone(){
    return Phone;
}
int Person::getAge(){
    return Age;
}