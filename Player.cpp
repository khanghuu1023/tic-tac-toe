//
// Created by Khang on 2021-08-13.
//

#include "Player.h"
Board_layout::Position& Player::get_coordinates_x_y(const Board_layout& b, Board_layout::Position& p) const{
    cout<<"Player "<<symbol_<< " ,pick an empty coordinate (x and y seperated by a space): ";
    cin>>p.x>>p.y;

    while(true)
    {
        if(cin.fail()||(p.x<0||p.y<0)|| (p.x>(b.dimension_-1))|| (p.y>(b.dimension_)-1)||b.board_layout.at(p.x).at(p.y)!='_') {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cout<<"INVALID COORDINATES!! Player "<<symbol_<<" ,please pick a valid coordinate(x and y seperated by a space): ";
            cin>>p.x>>p.y;
        }else {
            break;
        }
    }
    return p;
}

 Player::Player(int player_num):symbol_{'?'},num_of_move_{0},player_num_{player_num}{
    do {
        cout << "Player " << player_num << ", pick a symbol (X or O): ";
        cin >> symbol_;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }while(symbol_!='X'&&symbol_!='O');
}

unsigned char Player::get_symbol() const{
    return symbol_;
}

int Player::get_num_of_move() const{
    return num_of_move_;
}

void Player::make_move(Board_layout& b){
    num_of_move_++;
    Board_layout::Position pos{0,0};
    pos= get_coordinates_x_y(b,pos);
    b.board_layout.at(pos.x).at(pos.y)=symbol_;
    b.draw_board();
}