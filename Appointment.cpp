#include "Appointment.h"
#include <iostream>

Appointment::~Appointment(){};

Appointment::Appointment(){
    Date = "11/12/2022";
    Description = "Noting Planned";
    Cost = 0;
}

Appointment::Appointment(string UserDate, string UserDescription, double UserCost){
    Date = UserDate;
    Description = UserDescription;
    Cost = UserCost;
}

void Appointment::SetDate(string UserDate){

     Date = UserDate;
}

void Appointment::SetCost(double UserCost){

    Cost = UserCost;
}

void Appointment::SetDescription(string UserDescription){

     Description = UserDescription;
}

string Appointment::GetDate(){

    return Date;
}

double Appointment::GetCost(){

    return Cost;
}

string Appointment::GetDescription(){

    return Description;
}

void Appointment::PrintInfo(){
    cout << "Todays Date: "<< Date << endl;
    cout << "   Description: " << Description << endl;
    cout << "   Cost: " << Cost;
}
