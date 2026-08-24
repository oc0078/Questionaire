class Question {
    public:

    void display() { //displays basic information
        cout << "Welcome to the Quiz questionaire! Do you wonder where you will be sorted out?" << endl;
        cout << "type in a value 1-4 to choose your answer for each question, different values will reload the question" << endl;
        cout << "you cannot leave the questionarie until ALL questions have been asked" << endl;
    }

    private:
        int score; //value that will determine what the player gets at the end
}