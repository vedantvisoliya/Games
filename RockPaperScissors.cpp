#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(){
    srand((unsigned) time(NULL));
    string choices[3] = {"ROCK", "PAPER", "SCISSOR"};
    int numbers = 3;
    int rounds = 1;
    int userChoice;
    int botChoice;
    int userScore = 0;
    int botScore = 0;
    cout << "R O C K , P A P E R , S C I S S O R S  G A M E" << endl;
    cout << "RULES OF THE GAME\n1-ROCK CAN BEAT SCISSOR BUT NOT PAPER\n2-PAPER CAN BEAT ROCK BUT NOT SCISSORS\n3-SCISSORS CAN BEAT PAPER BUT NOT ROCK"<< endl;
    cout << "----------INSTRUCTION----------" << endl;
    cout << "GAME WILL PROCEED THROUGH 5 ROUNDS" << endl;
    cout << "+4 point will be awarded for every round win\n-1 for every round lose" << endl;
    cout << "TO ENTER INPUT\nTYPE 0 FOR ROCK , 1 FOR PAPER , 2 FOR SCISSORS" << endl;
    cout << "YOU WILL BE PLAYING AGAINST A BOT" << endl;
    cout << "---------- S T A R T ----------" << endl;
    while (rounds <=5){
        cout << "---------- R O U N D " << rounds << " ----------" << endl;
        cout << "ENTER YOUR CHOICE:";
        cin >> userChoice;
        botChoice = rand() % numbers;
        if (userChoice == botChoice){
            cout << "---------- R O U N D  D R A W ----------" << endl;
            cout << choices[userChoice] << "  ---  " << choices[botChoice] << endl;
            cout << "\nNO POINT WILL BE AWARDED" << endl;
        }
        else if (userChoice == 0 && botChoice == 1){
            cout << "---------- R O U N D  L O S E ----------" << endl;
            cout << choices[userChoice] << "  ---  " << choices[botChoice] << endl;
            botScore = botScore + 4;
            userScore = userScore - 1;
        }
        else if (userChoice == 0 && botChoice == 2){
            cout << "---------- R O U N D  W I N ----------" << endl;
            cout << choices[userChoice] << "  ---  " << choices[botChoice] << endl;
            botScore = botScore - 1;
            userScore = userScore + 4;
        }
        else if (userChoice == 1 && botChoice == 2){
            cout << "---------- R O U N D  L O S E ----------" << endl;
            cout << choices[userChoice] << "  ---  " << choices[botChoice] << endl;
            botScore = botScore + 4;
            userScore = userScore - 1;
        }        
        else if (userChoice == 1 && botChoice == 0){
            cout << "---------- R O U N D  W I N ----------" << endl;
            cout << choices[userChoice] << "  ---  " << choices[botChoice] << endl;
            botScore = botScore - 1;
            userScore = userScore + 4;
        }
        else if (userChoice == 2 && botChoice == 0){
            cout << "---------- R O U N D  L O S E ----------" << endl;
            cout << choices[userChoice] << "  ---  " << choices[botChoice] << endl;
            botScore = botScore + 4;
            userScore = userScore - 1;
        }
        else if (userChoice == 2 && botChoice == 1){
            cout << "---------- R O U N D  W I N ----------" << endl;
            cout << choices[userChoice] << "  ---  " << choices[botChoice] << endl;
            botScore = botScore - 1;
            userScore = userScore + 4;
        }
        else{
            cout << "---------- INVALID INPUT ----------" << endl;
        }
        rounds++;
    }
    
    if (userScore > botScore){
        cout << "\n---------- YOU WON THE MATCH ----------" << endl;
        cout << "YOUR SCORE: " << userScore << endl;
        cout << "BOT SCORE: " << botScore << endl;
    }
    else if (userScore < botScore){
        cout << "\n---------- YOU LOSE THE MATCH ----------" << endl;
        cout << "YOUR SCORE: " << userScore << endl;
        cout << "BOT SCORE: " << botScore << endl;
    }
    else{
        cout << "\n---------- MATCH DRAW ----------" << endl;
        cout << "YOUR SCORE: " << userScore << endl;
        cout << "BOT SCORE: " << botScore << endl;
    }
    cout << "\n---------- E N D ----------";
    return 0;
}