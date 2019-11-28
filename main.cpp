// Jordan Steer-Furderer
// CIS 25
// This program accpepts user input to display a time enterd in 12 hour
// in 24 hour time, rejecting invalid inputs.
#include <iostream>
#include <string>
#include <exception>
//#include "Clock.h"
using namespace std;

class InvalidHr : public exception{
int hour;
public:
    const char* what(){
        return "invalid hour" ;
    }
};

class InvalidMin : public exception{
int minute;
public:
    const char* what(){
        return "invalid minute" ;
    }
};

class InvalidSec : public exception{
int second;
public:
    const char* what(){
        return "invalid second" ;
    }
};

// regular code inside try block, if h is greater than 12 throw exception object which is see
// pg 1038 object of exception class, 3 separate classes... also see page 1025

    void hourBuilder(int h, int ampm){

        if (ampm = 0){

            cout << "0" << h;
        }

        else{

            cout << h + 12;
        }

    }


    void minuteBuilder(int m){

        int newm;

        if (m < 10){

            cout << "0" << m;
            //return
        }

        else{
            cout<< m;
        }

    }

    void secondBuilder(int s){

        int news;

        if (s < 10){

            cout << "0" << s << endl;
        }

        else{
            cout << s;
        }

    }

int main()
{


//Clock myClock();



//    int hour;
//    int minute;
//    int second;
//    int ampm;
//
//    cout << "Please enter an hour 1 - 12:" << endl;
//    cin >> hour;
//    if (hour > 12){
//        while (hour > 12){
//            cout << "enter a valid hour"<< endl;
//            cin >> hour;
//        }
//    }
//
//    cout << "AM or PM? For AM enter 0 for PM enter 1" << endl;
//    cin >> ampm;
//
//
//    cout << "Please enter a minute 0 - 60:" << endl;
//    cin >> minute;
//    if (minute > 60){
//        while (minute > 60){
//            cout << "enter a valid minute"<< endl;
//            cin >> minute;
//        }
//    }
//
//    cout << "Please enter a second 0 - 60:" << endl;
//    cin >> second;
//    if (second > 60){
//        while (second > 60){
//            cout << "enter a valid second"<< endl;
//            cin >> second;
//        }
//    }
//
////cout << hourBuilder(hour, ampm) << ":" << minuteBuilder(minute) << ":"<< secondBuilder(second) << endl;
//
//    hourBuilder(hour, ampm);
//    cout << ":";
//    minuteBuilder(minute);
//    cout << ":";
//    secondBuilder(second);



//cout << "STARTING" << endl;
//
//
//try {
//   // cout << "inside try" << endl;
//    int ampm;
//    int hrInput;
//
//    cout << "Please enter an hour 1 - 12" << endl;
//    cin >> hrInput;
//    cout << "AM or PM? For AM enter 0 for PM enter 1" << endl;
//    cin >> ampm;
//
//    hourBuilder(hrInput, ampm);
//    cout << ":";
//
//
//    if(hrInput > 12) {
//        InvalidHr error;
//        throw error;
//    }
//
//
//}
//catch(InvalidHr error) {
//   // cout << "inside catch" << endl;
//    cout << error.what() << endl;
//
//}
//
//
//
//try{
//
//    int minInput;
//    cout << "Please enter a minute 0 - 60" << endl;
//    cin >> minInput;
//    // skip all this other code
////    int minInput = 61;
//
//    minuteBuilder(minInput);
//    cout << ":";
//
//    if(minInput > 60){
//        InvalidMin error;
//        throw error;
//
//    }
//}
//catch(InvalidMin error) {
//
//   // cout << "inside catch" << endl;
//    cout << error.what() << endl;
//
//}
//    try{
//    //int secInput = 61;
//    int secInput;
//    cout << "Please enter a second 0 - 60" << endl;
//    cin >> secInput;
//
//    secondBuilder(secInput);
//    cout << ":";
//
//    if(secInput > 60){
//        InvalidSec error;
//        throw error;
//    }
//
//    }
//
//catch(InvalidSec error) {
//
//   // cout << "inside catch" << endl;
//    cout << error.what() << endl;
//
//}
//
//cout << "--------" << endl;
//
//cout << "ENDING" << endl;


cout << "STARTING" << endl;


try {
   // cout << "inside try" << endl;
    int ampm;
    int hrInput;

    cout << "Please enter an hour 1 - 12" << endl;
    cin >> hrInput;
    cout << "AM or PM? For AM enter 0 for PM enter 1" << endl;
    cin >> ampm;

//    hourBuilder(hrInput, ampm);
//    cout << ":";


    if(hrInput > 12) {
        InvalidHr error;
        throw error;
    }


    int minInput;
    cout << "Please enter a minute 0 - 60" << endl;
    cin >> minInput;
    // skip all this other code
//    int minInput = 61;

//    minuteBuilder(minInput);
//    cout << ":";

    if(minInput > 60){
        InvalidMin error;
        throw error;

    }

    int secInput;
    cout << "Please enter a second 0 - 60" << endl;
    cin >> secInput;

//    secondBuilder(secInput);
//    cout << ":";

    if(secInput > 60){
        InvalidSec error;
        throw error;
    }

hourBuilder(hrInput, ampm);
cout << ":";

minuteBuilder(minInput);
cout << ":";

secondBuilder(secInput);
cout << ":";

}

catch(InvalidHr error) {
   // cout << "inside catch" << endl;
    cout << error.what() << endl;
}

catch(InvalidMin error) {

   // cout << "inside catch" << endl;
    cout << error.what() << endl;
}

catch(InvalidSec error) {

   // cout << "inside catch" << endl;
    cout << error.what() << endl;
}

//cout << "--------" << endl;

//cout << "ENDING" << endl;





//hourBuilder(hrInput, ampm);
//cout << ":";
//
//minuteBuilder(minInput);
//cout << ":";
//
//secondBuilder(secInput);
//cout << ":";





return 0;
}


