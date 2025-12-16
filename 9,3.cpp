#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int grades[5];

public:
    Student(string stname) {
        name = stname;
        for (int i = 0; i < 5; i++) {
            grades[i] = 0;
        }
    }

    void setGrade(int subjectIndex, int grade) {
        if (grade >=0 && grade <= 4) {
            grades[subjectIndex] = grade;
        }
    }

    double getAverageGrade() {
        double sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += grades[i];
        }
        return sum / 5;
    }
};

int main() {
    Student st1("Родион");
    Student st2("Геннадий");
    Student st3("Иннокентий");

    st1.setGrade(0,4);
    st1.setGrade(1,4);
    st1.setGrade(2,4);
    st1.setGrade(3,3);
    st1.setGrade(4,4);

    st2.setGrade(0,3);
    st2.setGrade(1,4);
    st2.setGrade(2,4);
    st2.setGrade(3,3);
    st2.setGrade(4,3);

    st3.setGrade(0,3);
    st3.setGrade(1,3);
    st3.setGrade(2,2);
    st3.setGrade(3,4);
    st3.setGrade(4,3);

    cout << "Ср. балл Родиона: " << st1.getAverageGrade() << endl;
    cout << "Ср. балл Геннадия: " << st2.getAverageGrade() << endl;
    cout << "Ср. балл Иннокентия: " << st3.getAverageGrade() << endl;

    return 0;
}