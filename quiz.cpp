#include <iostream>
#include <vector>
using namespace std;

class quizquestion {
public:
    string question;
    string option1;
    string option2;
    string option3;
    string option4;
    int correct_answer;
    int score;

    void info(string q, string o1, string o2, string o3, string o4, int correct, int sc) {
        question = q;
        option1 = o1;
        option2 = o2;
        option3 = o3;
        option4 = o4;
        correct_answer = correct;
        score = sc;
    }

    int callquestion() {
        int chosen;
        cout << "\n" << question << endl;
        cout << "1. " << option1 << endl;
        cout << "2. " << option2 << endl;
        cout << "3. " << option3 << endl;
        cout << "4. " << option4 << endl;
        cout << "Enter your option (1-4): ";
        cin >> chosen;

        if (chosen == correct_answer) {
            cout << "Correct!" << endl;
            return score;
        } else {
            cout << "Wrong!" << endl;
            return 0;
        }
    }
};

int main() {
    int total = 0;
    string ask;

    cout << "Do you want to take the test? (yes/no): ";
    cin >> ask;

    if (ask != "yes") {
        cout << "Okay, Bye!" << endl;
        return 0;
    }

    cout << "\nAll the Best!\n" << endl;

    quizquestion q[10];

    q[0].info("Which language is used for competitive programming?", "Python", "C++", "HTML", "CSS", 2, 10);
    q[1].info("What does OOP stand for?", "Object-Oriented Programming", "Online Open Program", "One Object Project", "None of these", 1, 10);
    q[2].info("Which symbol is used for single-line comments in C++?", "//", "* *", "#", "--", 1, 10);
    q[3].info("What is the capital of India?", "Mumbai", "Delhi", "Chennai", "Bangalore", 2, 10);
    q[4].info("Who is called the 'Missile Man of India'?", "APJ Abdul Kalam", "Ratan Tata", "Sundar Pichai", "Nehru", 1, 10);
    q[5].info("Which country invented paper?", "USA", "India", "China", "Japan", 3, 10);
    q[6].info("What is H2O commonly known as?", "Water", "Hydrogen", "Oxygen", "Steam", 1, 10);
    q[7].info("Which planet is closest to the Sun?", "Earth", "Mercury", "Mars", "Venus", 2, 10);
    q[8].info("What is the chemical symbol for Gold?", "Ag", "Go", "Au", "G", 3, 10);
    q[9].info("Which company created iPhone?", "Google", "Microsoft", "Apple", "Samsung", 3, 10);

    for (int i = 0; i < 10; i++) {
        total += q[i].callquestion();
    }

    cout << "\nYour total score: " << total << " out of 100\n";
    return 0;
}
