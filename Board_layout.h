//
// Created by Khang on 2021-08-13.
//

#ifndef TIC_TAC_TOE_BOARD_LAYOUT_H
#define TIC_TAC_TOE_BOARD_LAYOUT_H
#include<vector>
#include<iostream>
using std::cout;    using std::endl;    using std::cin;

class Board_layout {
private:
    friend class Player;

    std::vector<std::vector<unsigned char>> board_layout;       //2-d board
    int dimension_;
public:
    struct Position{
        int x;
        int y;
    };
    explicit Board_layout(int dimension);
    void draw_board();
    int get_dimension()const;
    const std::vector<std::vector<unsigned char>>& get_board_layout() const;
};


#endif //TIC_TAC_TOE_BOARD_LAYOUT_H
