#include <iostream>
using namespace std;

class Student{
    void study(){
        cout << "Student study" << endl;
    }

    void calculateMarks(){
        cout << "Calculating marks" << endl;
    }

    void makeReports(){
        cout << "Making reports" << endl;
    }
};

// applying SRP 
class Student{
    void study(){
        cout << "Student study" << endl;
    }
};

class MarksCalculator{
    void calculateMarks(){
        cout << "Calculating Marks: " << endl;
    }
};

class ReportsGenerator{
    void generateReports(){
        cout << "Generating Reports: " << endl;
    }
};