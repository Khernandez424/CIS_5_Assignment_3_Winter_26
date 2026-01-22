// CIS_5 Week 3 Example – Score Analyzer with Pre-filled Data

#include <iostream>
#include <iomanip>   // for std::fixed and std::setprecision

using namespace std; 

int main() {
    // =============================================
    //  Pre-filled test scores (30 students)
    // =============================================
    const int MAX_STUDENTS = 30;
    int scores[MAX_STUDENTS] = {
        78, 92, 65, 88, 45, 100, 72, 81, 59, 96,
        84, 67, 91, 53, 77, 89, 62, 98, 74, 85,
        48, 93, 70, 82, 66, 95, 55, 87, 79, 64
    };

    // We will only use the first 30 (full array in this case)
    const int numStudents = 30;

    // =============================================
    //  Calculations
    // =============================================
int sum=0;
    int highest = scores [0];
    int lowest = scores [0];
    int passedCount = 0;
    int gradeAcount =0;

    for (int i = 0; i < numStudents; i++) {
        sum += scores [i];
        if (scores[i] > highest) highest = scores[i];
        if (scores[i] < lowest) lowest = scores[i];
        if (scores[i] >=60) passedCount++;
        if (scores[i] >90) gradeAcount++;
    }
    double average = static_cast<double>(sum) / numStudents;

    // =============================================
    //  Output
    // =============================================
    cout << "Number of students: " <<
        numStudents << endl;
    cout << "Average score "<< fixed
        << setprecision(2) << average << endl;
    cout << "Highest score: " << highest << endl;
    cout << "Lowest score: " << lowest << endl;
    cout << "Students passed: : << passedCount << " (>=60)" << endl;
        cout << "Students with A: " << gradeAcount << " (>=90)" << endl;

    // Print scores using range-based for (modern & clean)

    // Print in reverse using classic for

     cout << "Scores in original order:" << endl;
    for (int s : scores) {
        cout << s << " ";
    }
    cout << endl;
 
     cout << "Scores in reverse order:" << endl;
    for (int i = numStudents - 1; i >=0; i--) {
        cout << scores[i] << " ";
    }
    cout << endl;
    return 0;
}
