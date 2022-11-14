#include "Doctor.h"
#include <iostream>

Doctor::Doctor():Appointment::Appointment(){}  // first constructor that sets everything to plain

Doctor::Doctor(string UserDate, string UserDescription, double UserCost):Appointment::Appointment(UserDate, UserDescription, UserCost){}
// second constructor that sets everything given by the user
void Doctor::PrintInfo(){ // outputs all the information and calls the Appointment class as well
    cout << "Doctor Appointment." << endl;
        Appointment::PrintInfo();
}
