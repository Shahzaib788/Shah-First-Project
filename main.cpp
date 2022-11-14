#include "Appointment.h" // Calling the header files
#include "Doctor.h"
#include "Dentist.h"
#include "Therapy.h"
#include "HairSalon.h"
#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<Appointment*> Schedule; // Holds all appointments objects
    string YourDate; // hold user date look up
    string input; // Holds for description
    double MYCOST; // Holds the cost for the appointment
    string MYDATE; // Holds the date for the appointment
    double TOTALCOST = 0;

    while(input != "-1"){
        cout << "Enter in description, cost, and date." << endl;
        getline(cin, input); // Asking user for the description
        getline(cin, MYDATE); // Asking user for the date
        cin >> MYCOST; // / Asking user for the cost
        cin.ignore();

        if(input == "urgent care" || input == "checkup" || input == "surgery" ){ // if the description matches any of the term
            Doctor* temp = new Doctor(MYDATE, input, MYCOST); // Make an doctor object and inputs all the information given by the user
            Schedule.push_back(temp); // Schedule points to temp
        }

        else if(input == "cleanup" || input == "tooth-removal" || input == "braces" ){ // if the description matches any of the term
               Dentist* temp2 = new Dentist(MYDATE, input, MYCOST); // Make an doctor object and inputs all the information given by the user
               Schedule.push_back(temp2);  // Schedule points to temp
        }
        else if(input == " behavioral therapy" || input == "Anxiety" || input == "Depression" ){ // if the description matches any of the term
                Therapy* temp3 = new Therapy(MYDATE, input, MYCOST); // Make an therapy object and inputs all the information given by the user
                Schedule.push_back(temp3); // Schedule points to temp
        }
        else if(input == "hair dye" || input == "hair-cut" || input == "perm" ){ // if the description matches any of the term
                HairSalon* temp4 = new HairSalon(MYDATE, input, MYCOST); // Make an hair salon object and inputs all the information given by the user
                Schedule.push_back(temp4); // Schedule points to temp

        }
        cout << "Would you like to add more dates enter in anything if not enter -1.\n" << endl;
        getline(cin, input); // asking for the next term
    }

    cout << "Enter in date you want to look up for." << endl;

    getline(cin, YourDate); // asking the what date would they like to look up

    for(size_t i = 0; i < Schedule.size(); ++i){ // A loop the out put all the information for each object
            if(Schedule.at(i)->GetDate() == YourDate){
            Schedule[i]->PrintInfo();
            TOTALCOST = TOTALCOST + Schedule[i]->GetCost(); // holds the total form each appointment
            cout << endl;
            }
    }

    cout << "Total cost for today appointments: $"<< TOTALCOST << endl; // outputs the total form look up date

    for(size_t i = 0; i < Schedule.size(); ++i){ // deletes all the objects in Schedule
        delete Schedule[i];
    }

    return 0;
}
