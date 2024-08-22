#include <iostream>
#include <vector>
using namespace std;

struct Subject {
    string name;
    double creditHours;
    double GPA;
};

int main() {
    int numSubjects;
    vector<Subject> subjects;
    double totalCreditHours = 0.0, weightedGPA = 0.0;

    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    for (int i = 0; i < numSubjects; i++) {
        Subject subject;
        cout << "Enter the name of subject " << i + 1 << ": ";
        cin >> subject.name;
        cout << "Enter the credit hours for " << subject.name << ": ";
        cin >> subject.creditHours;
        cout << "Enter the GPA for " << subject.name << ": ";
        cin >> subject.GPA;

        subjects.push_back(subject);

        totalCreditHours += subject.creditHours;
        weightedGPA += subject.GPA * subject.creditHours;
    }

    double CGPA = weightedGPA / totalCreditHours;

    cout << "\nYour CGPA is: " << CGPA << endl;

    return 0;
}
