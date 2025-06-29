// Task 3 - Student Grade Management System
// Author: Ketan Mahesh Joshi - CodSoft C++ Internship (June 2025 Batch)

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int rollNo;
    float marks[5];
    float total = 0, average;
    char grade;

    cout << "===== Student Grade Management System =====\n";

    // Input student details
    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter roll number: ";
    cin >> rollNo;

    // Input marks for 5 subjects
    cout << "Enter marks for 5 subjects:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << (i + 1) << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    // Calculate average
    average = total / 5;

    // Determine grade
    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';

    // Display result
    cout << "\n===== Report Card =====\n";
    cout << "Name       : " << name << endl;
    cout << "Roll No.   : " << rollNo << endl;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Average    : " << average << "%" << endl;
    cout << "Grade      : " << grade << endl;

    return 0;
}
