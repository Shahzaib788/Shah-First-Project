#ifndef HAIRSALON_H_INCLUDED
#define HAIRSALON_H_INCLUDED
#include "Appointment.h"

#include <string>
using namespace std;

class HairSalon: public Appointment{ // Class for therapy and uses Appointment to holds some information
    public:
    HairSalon(); // basic constructor
    HairSalon(string UserDate, string UserDescription, double UserCost); // second constructor that sets everything given by the user
    void PrintInfo();

};


#endif // HAIRSALON_H_INCLUDED
