#include<iostream>
using namespace std;

int main () {
    cout << "*****************************" << endl;
    cout << "* Welcome to the Guess Game *" << endl;
    cout << "*****************************" << endl;

    const int SECRET_NUMBER = 69;

    int shot_number;
    cout << "Qual o valor do seu chute?";
    cin >> shot_number;

    cout << "O valor do seu chute é: " << shot_number << endl;

    bool correct_number = shot_number == SECRET_NUMBER;
    bool greater_number = shot_number > SECRET_NUMBER;

    if (correct_number) {
        cout << "Parabéns, você acertou o número secreto!" << endl;
    }
    else if (greater_number) {
        cout << "Seu chute foi maior que o número secreto!" << endl;
    }
    else {
        cout << "Seu chute foi menor que o número secreto!" << endl;
    }
}