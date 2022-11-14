#include "HairSalon.h"
#include "Appointment.h"
#include <iostream>
#include <string>


HairSalon::HairSalon():Appointment::Appointment(){} // first constructor that sets everything to plain

HairSalon::HairSalon(string UserDate, string UserDescription, double UserCost):Appointment::Appointment(UserDate, UserDescription, UserCost){}
// second constructor that sets everything given by the user

void HairSalon::PrintInfo(){ // outputs all the information and calls the Appointment class as well
    cout  << "HairSalon Appointment." << endl;
        Appointment::PrintInfo();
}
