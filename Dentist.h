#ifndef DENTIST_H_INCLUDED
#define DENTIST_H_INCLUDED
#include "Appointment.h"

#include <string>
using namespace std;

class Dentist: public Appointment{ // Class for dentist and uses Appointment to holds some information
    public:
    Dentist();  // basic constructor
    Dentist(string UserDate, string UserDescription, double UserCost); // second constructor that sets everything given by the user
    void PrintInfo();
};

#endif // DENTIST_H_INCLUDED
