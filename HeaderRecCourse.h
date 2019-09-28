//This header file is for main program Student Information System. 
//This program includes information for required courses based on student info. Student can request help and obtain list of required courses saved in text file. 

#ifndef HeaderRecCourse_h
#define HeaderRecCourse_h

#include <iostream>
#include <string>
#include <iomanip>
#include "HeaderFinalProjStudent.h"

using namespace std;

class recCourse : public Student
{
private:
    string needHelp;
    
public:
    // declare the constructors and public methods
    recCourse() : Student()
    {
        
    };
    
    recCourse(string aName, string aStudentNumber, string aBirthday, string aAddress, string aPostalCode, string aPhoneNumber, int aYear, string aTerm, string aProgram, string aNeedHelp) : Student(string aName, string aStudentNumber, string aBirthday, string aAddress, string aPostalCode, string aPhoneNumber, int aYear, string aTerm, string aProgram)
    {
        needHelp = aNeedHelp;
    }
    
    void setNeedHelp(int h)
    {
        needHelp = h;
    }
    string getNeedHelp()
    {
        return needHelp;
    }
    
};
#endif /* HeaderRecCourse_h */
