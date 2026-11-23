#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    string name;
    string surname;
    int score;
};

int main() {
    double sum = 0;
    ifstream fin("students.txt");
    ofstream fout("answer.txt");

    vector<Student> students;
    Student s;

    while (fin >> s.name >> s.surname >> s.score) {
        students.push_back(s);
    }
    
    for (const Student& st : students)
        sum += st.score;

    double avg = sum / students.size();

    for (const Student& st : students) {
        if (st.score > avg) {
            fout << st.name << " " << st.surname << " " << st.score << "\n";
        }
    }
    return 0;
}