//This header file is for main program Student Information System. 
//This program includes information for a specified course (course name, current average, desired final grade, and exam worth)/

#ifndef HeaderFinalProjCourse_h
#define HeaderFinalProjCourse_h

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Course
{
private:
    string courseName;
    double currentGradeAverage;
    double desiredFinalGrade;
    double examWorth;
    double gradeNeeded;
public:
    Course()
    {
        courseName = "";
        currentGradeAverage = 0;
        desiredFinalGrade = 0;
        examWorth = 0;
    }
    Course(string aCourseName, double aCurrentGradeAverage, double aDesiredFinalGrade, double aExamWorth)
    {
        courseName = aCourseName;
        currentGradeAverage = aCurrentGradeAverage;
        desiredFinalGrade = aDesiredFinalGrade;
        examWorth = aExamWorth;
    }
    void setAll(string cN, double cGA, double dFA, double eW, double gN);
    
    string getCourseName();
    double getCurrentGradeAverage();
    double getDesiredFinalGrade();
    double getExamWorth();
    double getGradeNeeded();
};

#endif /* HeaderFinalProjCourse_h */
