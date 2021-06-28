#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "*****************************" << endl;
    cout << "* Welcome to the Guess Game *" << endl;
    cout << "*****************************" << endl;

    system("PAUSE");

    cout << "Escolha o seu nível de dificuldade: " << endl;
    cout << "Fácil (Press F), Médio (M) ou Difícil (D)" << endl;

    char difficulty;
    cin >> difficulty;

    int attempts_number;

    if (difficulty == 'F')
    {
        attempts_number = 15;
    }
    else if (difficulty == 'M')
    {
        attempts_number = 10;
    }
    else
    {
        attempts_number = 5;
    }

    srand(time(NULL)); //essa função time vai dar o número de segundos desde 1970
    const int SECRET_NUMBER = rand() % 100;

    bool index = true;
    int attempts = 0;

    double score = 1000.0;

    for (attempts = 1; attempts <= attempts_number; attempts++)
    {

        cout << "Tentativa " << attempts << endl;

        int shot_number;
        cout << "Qual o valor do seu chute?";
        cin >> shot_number;

        double score_lost = abs(shot_number - SECRET_NUMBER) / 2.0;
        score = score - score_lost;

        cout << "O valor do seu chute é: " << shot_number << endl;

        bool correct_number = shot_number == SECRET_NUMBER;
        bool greater_number = shot_number > SECRET_NUMBER;

        if (correct_number)
        {
            cout << "Parabéns, você acertou o número secreto!" << endl;
            index = false;
            break;
        }
        else if (greater_number)
        {
            cout << "Seu chute foi maior que o número secreto!" << endl;
        }
        else
        {
            cout << "Seu chute foi menor que o número secreto!" << endl;
        }
    }

    cout << "****************" << endl;
    cout << "*** END GAME ***" << endl;
    cout << "****************" << endl;

    if (index)
    {
        cout << "*** ¯|_( ͡❛ ͜ʖ ͡❛)_/¯ *** " << endl;
        cout << "*** Game Over ***" << endl;
        cout << "*** Try Again ***" << endl;
    }
    else
    {
        cout << "Você acertou o número secreto em " << attempts << " tentativas!" << endl;

        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi de: " << score << " pontos" << endl;
    }
}
