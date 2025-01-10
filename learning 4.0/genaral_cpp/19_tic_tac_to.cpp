#include <iostream>
#include <ctime>

using std::cout;
using std::cin;


void draeBoard(char *spases);
void PlayerMove(char *spases, char player);
void computerMove(char *spases, char player);
bool chackWinner(char *spases, char player, char computer);
bool chackTie(char *spases);


// *********************************************
int main(){
    char spases[9];   std::fill(spases, spases + 9, ' ');

    char player = 'X';
    char computer = 'O';
    bool running = true;
    
    draeBoard(spases);

    while(running){
        PlayerMove(spases, player);
        draeBoard(spases);
        computerMove(spases,player,computer)

    }


    return 0;
}






void draeBoard(char *spases){
    cout <<'\n';
    cout <<"     |     |     \n";
    cout <<"  "<< spases[0] <<"  |  "<< spases[1] <<"  |  "<< spases[2]<<"  \n";
    cout <<"_____|_____|_____\n"; 
    cout <<"     |     |     \n";
    cout <<"  "<< spases[3] <<"  |  "<< spases[4] <<"  |  "<< spases[5]<<"  \n";
    cout <<"_____|_____|_____\n"; 
    cout <<"     |     |     \n";
    
    cout <<"  "<< spases[6] <<"  |  "<< spases[7] <<"  |  "<< spases[8]<<"  \n";
}

void PlayerMove(char *spases, char player){
    int number;
    
    do
    {
    cout<<"enter ur play(1-9): \n"; 
    cin >> number;
    number --;
    if (spases[number] == ' '){

        spases[number] = player;
        break;
    }
    

    } while (!number > 0 || !number < 8);
    
    

}

void computerMove(char *spases[], char player, char computer){
    switch (spases)
    {
    case spases[0] == player:
        spases[4] == computer;
        break;
    
    default:
        break;
    }
}

// bool chackWinner(char *spases, char player, char computer){
//     return 0;
// }

// bool chackTie(char *spases){
//     return 0;
// }