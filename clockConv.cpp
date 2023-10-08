#include <iostream>
#include <math.h>

using namespace std;


int main() {
    //Initialize variables
    int hours,minutes,seconds;

    //Take in how many seconds the user wants to convert
    cout << "How many seconds? ";
    cin >> seconds;

    //Calculates the 
    minutes = floor((seconds/60));
    
    //If minutes is under 60 then there will automatacly be 0 hours and as many minutes
    if (minutes<60) {
        cout << "0 Hours, " << minutes<< " minutes" << endl;
        return 0;
    }
    
    else {
        //Calculates the entire hours with the floor func. 
        hours =floor(minutes/60);
        //Calculates the rest with modulo
        minutes = minutes%60;
        //Prints out the hours and minutes.
        cout << hours << " hour(s), ";
        cout << minutes << " minute(s) " << endl;
        
        return 0;
    }


 



}