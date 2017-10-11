//
// Created by wangyong on 10/9/17.
//

#ifndef CALGS_STUDENT_H_H
#define CALGS_STUDENT_H_H

#include <iostream>
#include <string>

using namespace std;

struct Student {

    string name;
    int score;

    bool operator<(const Student &otherStudent) {
        return score != otherStudent.score ? score > otherStudent.score : name < otherStudent.name;
    }

    friend ostream &operator<<(ostream &os, const Student &student) {
        os << "Student: " << student.name << " " << student.score << endl;
        return os;
    }
};


#endif //CALGS_STUDENT_H_H
