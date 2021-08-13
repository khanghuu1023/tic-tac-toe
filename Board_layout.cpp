//
// Created by Khang on 2021-08-13.
//

#include "Board_layout.h"
//construct a dimension x dimension board with default var '_"
 Board_layout::Board_layout(int dimension):dimension_{dimension} {
    board_layout.resize(dimension);
    for(auto&i:board_layout){
        i.resize(dimension);    //board_layout is now a dimention x dimension vector of 0 by defualt
    }
    for (auto &arr:board_layout) {
        for (auto &i:arr) {
            i = '_';            //fill the board_layout with elements starting from 1 on the left top most
        }
    }
}

void Board_layout::draw_board()  {
    for (auto &arr:board_layout) {
        for (auto &i:arr) {
            cout <<"$__"<< i << "__$ ";
        }
        cout<<'\n';
    }
}

int Board_layout::get_dimension()const{return dimension_;}        //use for checkwinner method of class TIcTacToe
const std::vector<std::vector<unsigned char>>& Board_layout::get_board_layout() const {return board_layout;}   //use for checkwinner method of class TIcTacToe