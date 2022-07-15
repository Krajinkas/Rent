#include <iostream>
#include<iostream>
#include<string>
#include "Person.h"
#include "Rent.h"
using namespace std;

int main()
{
    int chooser1,chooser2;
    int day;
    int x;
    string YesOrNO;
    int k;
    
    Person per;
    per.setName("Eray");
    per.getName();
    
    per.setSurname("Alp");
    per.getSurname();
    
    per.setAge(22);
    per.setPhone(5533202);
    per.setMail("ErayAdam@gmail.com");
    
    std::cout << "♥♥♥♥♥ Rent to Karatas ♥♥♥♥♥" << std::endl;
    
    std::cout << "Welcome to "<<per.getName()<<" "<<per.getSurname()<<std::endl;
    
    Rent r;
    
    cout<<"****** What do you rent ******"<<endl;
    
    cout<<"1.Rent a Car"<<endl;
    cout<<"2.Rent a House"<<endl;
    
    cout<<"------------------------------------------------------------------------------------------------------------"<<endl;

    
    cin>>chooser1;
    r.setSelector(chooser1);
    if(chooser1==1){
        cout<<"You picked "<<chooser1<<"."<<endl;
        cout<<"Do you want which type brand of Car?"<<endl;
        cout<<"1.Range Rover(300$/d)"<<endl;
        cout<<"2.Lamborghini(400$/d)"<<endl;
        cout<<"3.Tofask(600$/d)"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------"<<endl;

        cin>>chooser2;
        
        switch(chooser2){
        case 1: x=300;
        cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"You choosed a Range Rover."<<endl;
        cout<<"How many days will you drive?"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
        cin>>day;
        r.setDay(day);
        r.getDay();
        k=r.RentPrice(x,day);
        cout<<"Total price :"<<k<<"$"<<endl;
        cout<<"Reservation process completed successfully :):)"<<endl;
        cout<<"♥♥♥♥♥ Thank you for choosing Karatas ♥♥♥♥♥"<<endl;
        break;
        
        case 2: x=400;
        cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"You choosed a Lamborghini."<<endl;
        cout<<"How many days will you drive?"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
        cin>>day;
        r.setDay(day);
        r.getDay();
        k=r.RentPrice(x,day);
        cout<<"Total price :"<<k<<"$"<<endl;
        cout<<"Reservation process completed successfully :):)"<<endl;
        cout<<"♥♥♥♥♥ Thank you for choosing Karatas ♥♥♥♥♥"<<endl;
        break;
        
        case 3: x=600;
        cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"You choosed a Tofask."<<endl;
        cout<<"How many days will you drive?"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
        cin>>day;
        r.setDay(day);
        r.getDay();
        k=r.RentPrice(x,day);
        cout<<"Total price :"<<k<<"$"<<endl;
        cout<<"Reservation process completed successfully :):)"<<endl;
        cout<<"♥♥♥♥♥ Thank you for choosing Karatas ♥♥♥♥♥"<<endl;
        break;
        
        default: cout<<"You entered an invalid number!!!"<<endl;
        }
        
        
    }
    else if(chooser1==2){
        cout<<"You picked "<<chooser1<<"."<<endl;
        cout<<"Do you want which type of House?"<<endl;
        cout<<"1.Villa(1000$/d)"<<endl;
        cout<<"2.Mountain House(450$/d)"<<endl;
        cout<<"3.Residence(700$/d)"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------"<<endl;

        cin>>chooser2;
        
        switch(chooser2){
        case 1: x=1000; 
        cout<<"You choosed a Villa."<<endl;
        cout<<"How many days will you stay?"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
        
        cin>>day;
        r.setDay(day);
        r.getDay();
        k=r.RentPrice(x,day);
        cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Total price :"<<k<<"$"<<endl;
        cout<<"Reservation process completed successfully :):)"<<endl;
        cout<<"♥♥♥♥♥ Thank you for choosing Karatas ♥♥♥♥♥"<<endl;
        
        break;
        
        case 2: x=450;
        cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"You choosed a Mountain House."<<endl;
        cout<<"How many days will you stay?"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------"<<endl;

        cin>>day;
        r.setDay(day);
        r.getDay();
        k=r.RentPrice(x,day);
        cout<<"Total price :"<<k<<"$"<<endl;
        cout<<"Reservation process completed successfully :):)"<<endl;
        cout<<"♥♥♥♥♥ Thank you for choosing Karatas ♥♥♥♥♥"<<endl;
        break;
        
        case 3: x=700;
        cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"You choosed a Residence."<<endl;
        cout<<"How many days will you stay?"<<endl;
        cout<<"------------------------------------------------------------------------------------------------------------"<<endl;

        cin>>day;
        r.setDay(day);
        r.getDay();
        k=r.RentPrice(x,day);
        cout<<"Total price :"<<k<<"$"<<endl;
        cout<<"Reservation process completed successfully :):)"<<endl;
        cout<<"♥♥♥♥♥ Thank you for choosing Karatas ♥♥♥♥♥"<<endl;
        break;
        
        default: cout<<"You entered an invalid number!!!"<<endl;
        }
        
    }
    
    else{
        cout<<"You entered an invalid number!!!"<<endl;
        abort;
    }
    cout<<"------------------------------------------------------------------------------------------------------------"<<endl;

    return 0;
}