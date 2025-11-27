 #include <iostream>
#include <vector>
using namespace std;

struct student {
    string name;
    int score;
};

void getStats(const vector<student>& students)
{
    if (students.empty()) {
        cout << "No students provided.\n";
        return;
    }

    int sum = 0;
    int maxScore = students[0].score;
    int minScore = students[0].score;
    string maxName = students[0].name;
    string minName = students[0].name;

    for (const student &s : students)
    {
        sum += s.score;

        if (s.score > maxScore) {
            maxScore = s.score;
            maxName = s.name;
        }
        if (s.score < minScore) {
            minScore = s.score;
            minName = s.name;
        }
    }

    double avg = static_cast<double>(sum) / students.size();

    cout << "Highest Score: " << maxScore << " (" << maxName << ")\n";
    cout << "Lowest Score: "  << minScore << " (" << minName << ")\n";
    cout << "Average Score = " << avg << "\n";
}

int main()
{
    vector<student> students = {
        {"masa", 87},
        {"mohamed", 90},
        {"salah", 78},
        {"maged", 67},
        {"hema", 98}
    };

    getStats(students);
    return 0;
}
