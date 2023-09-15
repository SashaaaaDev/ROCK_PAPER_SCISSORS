#include <iostream>
#include <ctime>
using namespace std;

char UserChoice();
char ComputerChoice();
void Result(char person, char computer);
void ShowChoice(char choice);

int main() {
    char person;
    char computer;

    person=UserChoice();
    cout<<"Your choice - ";
    ShowChoice(person);

    computer = ComputerChoice();
    cout<<"Computer choice - ";
    ShowChoice(computer);

    Result(person,computer);
    return 0;
}
char UserChoice(){
    char person;
    do {
        cout << "Welcome to game 'Rock/Paper/Scissors'\n";
        cout << "*************************************\n";
        cout << "Make a choice:\n";
        cout << "Rock-r\nPaper-p\nScissors-s\n";
        cin >> person;
    } while ((person != 'r') && (person != 'p') && (person != 's'));
    
    return person;
}
char ComputerChoice() {
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
        case 1:
            return ('r');
            break;
        case 2:
            return ('s');
            break;
        case 3:
            return ('p');
            break;
    }

    return 0;
}
void Result(char person, char computer) {
    switch (person) {
        case 'r':
            if (computer=='r')  cout << "Tie!";
            else if (computer =='p')  cout << "Lose!";
            else  cout << "You win!";
            break;

        case 'p':
            if (computer=='r')  cout << "Win!";
            else if (computer =='s')  cout << "Lose!";
            else  cout << "Tie!";
            break;

        case 's':
            if (computer=='r')  cout << "Lose!";
            else if (computer =='p')  cout << "Win!";
            else  cout << "Tie!";
            break;
    }
}
void ShowChoice(char choice){
    switch(choice) {
        case 's':
            cout << "Scissors\n";
            break;
        case 'p':
            cout << "Paper\n";
            break;
        case 'r':
            cout << "Rock\n";
            break;
    }
}