#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    system("PAUSE");
    system("CLS");
    cout << "*****************************" << endl;
    cout << "* Welcome to the Guess Game *" << endl;
    cout << "*****************************" << endl;

    system("PAUSE");
    system("CLS");

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

        cout << "\nTentativa "
             << attempts << "\n"
             << endl;

        int shot_number;
        cout << "\nQual o valor do seu chute?"
             << endl;
        cin >> shot_number;
        system("CLS");

        double score_lost = abs(shot_number - SECRET_NUMBER) / 2.0;
        score = score - score_lost;

        cout << "\nO valor do seu chute é: "
             << shot_number << "\n"
             << endl;

        bool correct_number = shot_number == SECRET_NUMBER;
        bool greater_number = shot_number > SECRET_NUMBER;

        if (correct_number)
        {
            cout << "Parabéns, você acertou o número secreto!\n"
                 << endl;
            index = false;
            system("PAUSE");
            system("CLS");
            break;
        }
        else if (greater_number)
        {
            cout << "Seu chute foi maior que o número secreto!\n"
                 << endl;
            system("PAUSE");
            system("CLS");
        }
        else
        {
            cout << "Seu chute foi menor que o número secreto!\n"
                 << endl;
            system("PAUSE");
            system("CLS");
        }
    }

    cout << "****************" << endl;
    cout << "*** END GAME ***" << endl;
    cout << "****************" << endl;
    system("PAUSE");
    system("CLS");

    if (index)
    {
        cout << "\n\n\t\t******* ¯|_( ͡❛ ͜ʖ ͡❛)_/¯ ******" << endl;
        cout << "\n\n\t\t******* Game Over *********" << endl;
        system("PAUSE");
        system("ClS");
        cout << "\n\n\n******* Try Again *******\n\n\n"
             << endl;
    }
    else
    {
        cout << "Você acertou o número secreto em " << attempts << " tentativas!\n\n"
             << endl;

        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi de: " << score << " pontos" << endl;
    }
}
