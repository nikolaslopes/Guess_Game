#include<iostream>
using namespace std;

int main () {
    cout << "*****************************" << endl;
    cout << "* Welcome to the Guess Game *" << endl;
    cout << "*****************************" << endl;

    const int SECRET_NUMBER = 42;

    bool index = true;

    int attempts = 0;

    double score = 1000.0;

    while (index) {

        attempts ++;
        cout << "Tentativa " << attempts << endl;

        int shot_number;
        cout << "Qual o valor do seu chute?";
        cin >> shot_number;
        
        double score_lost = abs(shot_number - SECRET_NUMBER)/2.0;
        score = score - score_lost;

        cout << "O valor do seu chute é: " << shot_number << endl;

        bool correct_number = shot_number == SECRET_NUMBER;
        bool greater_number = shot_number > SECRET_NUMBER;

        if (correct_number) {
            cout << "Parabéns, você acertou o número secreto!" << endl;
            index = false;
        }
        else if (greater_number) {
            cout << "Seu chute foi maior que o número secreto!" << endl;
        }
        else {
            cout << "Seu chute foi menor que o número secreto!" << endl;
        }
    }

    cout << "****************" << endl;
    cout << "*** END GAME ***" << endl;
    cout << "****************" << endl;

    cout << "Você acertou o número secreto em " << attempts << " tentativas!" << endl;

    cout.precision(2);
    cout << fixed;
    cout << "Sua pontuação foi de: " << score << " pontos" << endl;
}