#ifndef DOCTOR_H_INCLUDED
#define DOCTOR_H_INCLUDED
#include "Appointment.h"

#include <string>
using namespace std;

class Doctor: public Appointment{ // Class for doctor and uses Appointment to holds some information
    public:
        Doctor(); // basic constructor
        Doctor(string UserDate, string UserDescription, double UserCost); // second constructor that sets everything given by the user
        void PrintInfo(); // outputs all the information

};



#endif // DOCTOR_H_INCLUDED
