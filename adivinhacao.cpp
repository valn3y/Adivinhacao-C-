#include <iostream>
using namespace std;

int main() {
    cout << "**************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhação! *" << endl;
    cout << "**************************************" << endl;

    const int SECRET_NUMBER = 100;
    bool notCorrect = true;
    int tries = 0;

    while(notCorrect) {
        tries++;
        int guess;
        cout << "Tentativa " << tries << endl;
        cout << "Qual seu chute? ";
        cin >> guess;
        cout << "O valor do seu chute é: " << guess << endl;

        bool isCorrect = guess == SECRET_NUMBER;
        bool higherNumber = guess > SECRET_NUMBER;

        if(isCorrect) {
            cout << "Parabés! Você acertou o número secreto!" << endl;
            notCorrect = false;
        } else if(higherNumber) {
            cout << "Seu chute foi maior que o número secreto!" << endl;
        } else {
            cout << "Seu chute foi menor que o número secreto!" << endl;
        }
    }

    cout << "Fim de jogo!" << endl;
    cout << "Você acertou o número secreto em " << tries << " tentativas" << endl;
}