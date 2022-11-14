#include "Dentist.h"
#include "Appointment.h"
#include <iostream>
#include <string>

Dentist::Dentist():Appointment::Appointment(){} // first constructor that sets everything to plain

Dentist::Dentist(string UserDate, string UserDescription, double UserCost):Appointment::Appointment(UserDate, UserDescription, UserCost){}
// second constructor that sets everything given by the user

void Dentist::PrintInfo(){ // outputs all the information and calls the Appointment class as well
    cout << "Dentist Appointment." << endl;
        Appointment::PrintInfo();
}
