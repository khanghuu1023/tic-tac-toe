//
// Created by Khang on 2021-08-13.
//

#ifndef TIC_TAC_TOE_TICTACTOE_H
#define TIC_TAC_TOE_TICTACTOE_H

#include <algorithm>
#include "Board_layout.h"

class TicTacToe {
public:
    unsigned char check_winner(const Board_layout& b);
};


#endif //TIC_TAC_TOE_TICTACTOE_H
