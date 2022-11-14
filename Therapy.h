#ifndef THERAPY_H_INCLUDED
#define THERAPY_H_INCLUDED
#include "Appointment.h"

#include <string>
using namespace std;

class Therapy: public Appointment{ // Class for therapy and uses Appointment to holds some information
    public:
    Therapy(); // basic constructor
    Therapy(string UserDate, string UserDescription, double UserCost); // second constructor that sets everything given by the user
    void PrintInfo();


};


#endif // THERAPY_H_INCLUDED
