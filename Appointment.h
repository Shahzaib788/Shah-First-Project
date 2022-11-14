#ifndef APPOINTMENT_H_INCLUDED
#define APPOINTMENT_H_INCLUDED
#include <string>
using namespace std;

class Appointment{ // Appointment class thats set,gets, prints information
    public:
        virtual ~Appointment();
        Appointment();
        Appointment(string UserDate, string UserDescription, double UserCost);
        void SetDate(string UserDate);
        void SetCost(double UserCost);
        void SetDescription(string UserDescription);
        string GetDate();
        double GetCost();
        string GetDescription();
        virtual void PrintInfo();
    protected: // basic variables
        string Date;
        string Description;
        double Cost;
};


#endif // APPOINTMENT_H_INCLUDED
