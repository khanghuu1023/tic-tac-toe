#include <iostream>
#include <iomanip>
#include"Board_layout.h"
#include"Player.h"
#include"TicTacToe.h"

int main() {
    int dimension;
    cout<<std::setw(62)<<"WELCOME TO TIC TAC TOE !!!"<<endl;
    cout<<std::setw(82)<<"===========================================================\n"<<endl;

    cout<<"Enter board dimension: ";
    cin>>dimension;
    Board_layout b1(dimension);

    TicTacToe game;
    b1.draw_board();
    Player p1(1);
    Player p2(2);
    cout<<'\n';
    do{
        p1.make_move(b1);
        if(game.check_winner(b1)=='?')
            p2.make_move(b1);
    }while(game.check_winner(b1)=='?');

    if(game.check_winner(b1)==p1.get_symbol())
        cout<<"The winner is "<<game.check_winner(b1)<<" after "<<p1.get_num_of_move()<<" moves"<<endl;
    else
        cout<<"The winner is "<<game.check_winner(b1)<<" after "<<p2.get_num_of_move()<<" moves"<<endl;

    return 0;
}


