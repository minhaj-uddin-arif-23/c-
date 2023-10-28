#include<bits/stdc++.h>
using namespace std;

class quizQ {
public:
    string question;
    string answer;

    quizQ(const string& q, const string& a) : question(q), answer(a) {}

    bool checkAnswer(const string& userAnswer) const {
        return userAnswer == answer;
    }
};

int main() {
    map<int, quizQ> quiz;

    quiz[1] = quizQ("What is the capital of Bangladesh", "dhaka");
    quiz[2] = quizQ("In which year did the Titanic sink?", "1912");
    quiz[3] = quizQ("What is the  First prime Number", "2");
    quiz[4] = quizQ("What is the largest planet in our solar system?","jupiter");
    quiz[4] = quizQ("What is the world's largest continent by land area?","asia");

    int score = 0;

    for (const auto& entry : quiz) {
        cout << entry.second.question << endl;
        string userAnswer;
        cout << "Answer is? ";
        cin >> userAnswer;

        if (entry.second.checkAnswer(userAnswer)) {
            cout << "Correct" << endl;
            score++;
        } else {
            cout << "Wrong!" << std::endl;
            cout << "The answer is: " << entry.second.answer << endl;
        }
        cout << "Your score is: " << score << endl << endl;
    }

    cout << "You got " << score << " Out of " << quiz.size() << " questions" << endl;

    return 0;
}
