#include "Appointment.h"
#include <iostream>

Appointment::~Appointment(){};

Appointment::Appointment(){ // first constructor that sets everything to plain
    Date = "11/12/2022";
    Description = "Noting Planned";
    Cost = 0;
}

Appointment::Appointment(string UserDate, string UserDescription, double UserCost){ // second constructor that sets everything given by the user
    Date = UserDate;
    Description = UserDescription;
    Cost = UserCost;
}

void Appointment::SetDate(string UserDate){

     Date = UserDate; // sets Date = UserDate;
}

void Appointment::SetCost(double UserCost){

    Cost = UserCost; // sets cost = UserCost;
}

void Appointment::SetDescription(string UserDescription){

     Description = UserDescription; // set Description = UserDescription
}

string Appointment::GetDate(){

    return Date; // returns date
}

double Appointment::GetCost(){

    return Cost; // return Cost
}

string Appointment::GetDescription(){

    return Description; // returns Description
}

void Appointment::PrintInfo(){ // outputs all the information
    cout << "Todays Date: "<< Date << endl;
    cout << "   Description: " << Description << endl;
    cout << "   Cost: " << Cost;
}
