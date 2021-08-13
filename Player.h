//
// Created by Khang on 2021-08-13.
//

#ifndef TIC_TAC_TOE_PLAYER_H
#define TIC_TAC_TOE_PLAYER_H
#include"Board_layout.h"
#include<limits>
class Player {
private:
    unsigned char symbol_;
    int num_of_move_;
    int player_num_;
    Board_layout::Position& get_coordinates_x_y(const Board_layout& b, Board_layout::Position& p) const;

public:

    explicit Player(int player_num=1);

    unsigned char get_symbol() const;

    int get_num_of_move() const;

    void make_move(Board_layout& b);
};


#endif //TIC_TAC_TOE_PLAYER_H
