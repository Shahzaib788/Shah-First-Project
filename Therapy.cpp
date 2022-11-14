#include "Therapy.h"
#include "Appointment.h"
#include <iostream>
#include <string>


Therapy::Therapy():Appointment::Appointment(){} // first constructor that sets everything to plain

Therapy::Therapy(string UserDate, string UserDescription, double UserCost):Appointment::Appointment(UserDate, UserDescription, UserCost){}
// second constructor that sets everything given by the user

void Therapy::PrintInfo(){  // outputs all the information and calls the Appointment class as well
    cout  << "Therapy Appointment." << endl;
        Appointment::PrintInfo();
}


