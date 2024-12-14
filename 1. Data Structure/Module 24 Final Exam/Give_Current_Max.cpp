#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }

    bool operator<(const Student& other) const {
        if (marks != other.marks) {
            return marks > other.marks;  
        } else if (roll != other.roll) {
            return roll < other.roll;  
        }
        return name < other.name;
    }
};

int main() {
    int n;
    cin >> n;

    multiset<Student> students;

    for (int i = 0; i < n; i++) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        students.insert(Student(name, roll, marks));
    }

    int q;
    cin >> q;

    while (q--) {
        int command;
        cin >> command;

        if (command == 0) {  
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            students.insert(Student(name, roll, marks));
            auto it = students.begin();
            cout << it->name << " " << it->roll << " " << it->marks << endl;

        } else if (command == 1) {  
            if (students.empty()) {
                cout << "Empty" << endl;
            } else {
                auto it = students.begin();
                cout << it->name << " " << it->roll << " " << it->marks << endl;
            }

        } else if (command == 2) {  
            if (students.empty()) {
                cout << "Empty" << endl;
            } else {
                students.erase(students.begin());  
                if (students.empty()) {
                    cout << "Empty" << endl;
                } else {
                    auto it = students.begin();
                    cout << it->name << " " << it->roll << " " << it->marks << endl;
                }
            }
        }
    }

    return 0;
}
