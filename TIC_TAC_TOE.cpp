#include <iostream>
using namespace std;

int winChecker(char choices[9], char player1Choice, char player2Choice){
    if (choices[0] == player1Choice && choices[1] == player1Choice && choices[2] == player1Choice){
        return 0;
    }
    else if (choices[3] == player1Choice && choices[4] == player1Choice && choices[5] == player1Choice){
        return 0;
    }
    else if (choices[6] == player1Choice && choices[7] == player1Choice && choices[8] == player1Choice){
        return 0;
    }
    else if (choices[0] == player1Choice && choices[3] == player1Choice && choices[6] == player1Choice){
        return 0;
    }
    else if (choices[1] == player1Choice && choices[4] == player1Choice && choices[7] == player1Choice){
        return 0;
    }
    else if (choices[2] == player1Choice && choices[5] == player1Choice && choices[8] == player1Choice){
        return 0;
    }
    else if (choices[0] == player1Choice && choices[4] == player1Choice && choices[8] == player1Choice){
        return 0;
    }
    else if (choices[6] == player1Choice && choices[4] == player1Choice && choices[2] == player1Choice){
        return 0;
    }
    else if (choices[0] == player2Choice && choices[1] == player2Choice && choices[2] == player2Choice){
        return 1;
    }
    else if (choices[3] == player2Choice && choices[4] == player2Choice && choices[5] == player2Choice){
        return 1;
    }
    else if (choices[6] == player2Choice && choices[7] == player2Choice && choices[8] == player2Choice){
        return 1;
    }
    else if (choices[0] == player2Choice && choices[3] == player2Choice && choices[6] == player2Choice){
        return 1;
    }
    else if (choices[1] == player2Choice && choices[4] == player2Choice && choices[7] == player2Choice){
        return 1;
    }
    else if (choices[2] == player2Choice && choices[5] == player2Choice && choices[8] == player2Choice){
        return 1;
    }
    else if (choices[0] == player2Choice && choices[4] == player2Choice && choices[8] == player2Choice){
        return 1;
    }
    else if (choices[6] == player2Choice && choices[4] == player2Choice && choices[2] == player2Choice){
        return 1;
    }
}
void board(char choices[9]){
    cout << "\t" << "\t" << choices[0] << "  " << "|" << "  " << choices[1] << "  " << "|" << "  " << choices[2] << endl;
    cout << "\t" << "\t" << "___" << "|_____|" << "___" << endl;
    cout << "\t" << "\t" << choices[3] << "  " << "|" << "  " << choices[4] << "  " << "|" << "  " << choices[5] << endl;
    cout << "\t" << "\t" << "___" << "|_____|" << "___" << endl;
    cout << "\t" << "\t" << choices[6] << "  " << "|" << "  " << choices[7] << "  " << "|" << "  " << choices[8] << endl;
    cout << "\t" << "\t" << "   " << "|     |" << "   " << endl;
    cout << "\n";
}

int main(){
    int tempScore;
    int tempPlayer;
    char player1;
    char player2;
    int player1Choice;
    int player2Choice;
    char choices[9] = {'0','1','2','3','4','5','6','7','8'};
    cout << "\t" << "\t" << "\t" << "TIC TAC TOE GAME" << "\t" << "\t" << "\t" << endl;
    cout << "What would you like? [ X | O ]" << endl;
    cout << "Enter [ X - 1] [ O - 2] :";
    cin >> tempPlayer;
    cout << "\n";

    if (tempPlayer == 1){
        player1 = 'X';
        player2 = 'O';
    }
    else if (tempPlayer == 2){
        player1 = 'O';
        player2 = 'X';
    }
    else{
        cout << "INVALID INPUT!" << endl;
    }
    
    int i = 0;
    while (i<9){
        board(choices);
        cout << "PLAYER 1: ";
        cin >> player1Choice;
        choices[player1Choice] = player1;
        cout << "\n";
        cout << "PLAYER 2: ";
        cin >> player2Choice;
        choices[player2Choice] = player2;
        cout << "\n";

        if (winChecker(choices,player1,player2) == 0){
            tempScore = 0;
            break;
        }
        else if (winChecker(choices,player1,player2) == 1){
            tempScore = 1;
            break;
        }
        i++;
    }
    
    if (tempScore == 0){
        board(choices);
        cout << "PLAYER 1 WON!";
    }
    else if (tempScore == 1){
        board(choices);
        cout << "PLAYER 2 WON!";        
    }
    

   return 0;
}