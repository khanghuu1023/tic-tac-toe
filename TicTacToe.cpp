//
// Created by Khang on 2021-08-13.
//

#include "TicTacToe.h"

unsigned char TicTacToe::check_winner(const Board_layout& b) {
    unsigned char winner;

    //horizontal check
    for(int i=0;i<b.get_dimension();i++) {
        if(std::all_of(b.get_board_layout()[i].begin(),b.get_board_layout()[i].end(),[&i,&b](const unsigned char& x){return (x!='_'&&x==b.get_board_layout()[i][0]);} ) ){
            winner=b.get_board_layout()[i][0];
            return winner;
        }
    }

    //vertical cheeck
    unsigned char top_row_value;    //for vertical check
    bool vertical_equal;            //for vertical check

    for(int i=0;i<b.get_dimension();i++) {
        top_row_value=b.get_board_layout()[0][i];
        for(int j=0;j<b.get_dimension();j++) {
            if (top_row_value ==b.get_board_layout()[j][i]&&top_row_value!='_' ) {
                winner=top_row_value;
                vertical_equal=true;
            }else{
                vertical_equal=false;
                break;
            }
        }
        if(vertical_equal)
            return winner;
    }

    //left diaagonal check
    bool diagonal_equal{true};            //for diagonal check
    unsigned char left_diagonal_val=b.get_board_layout()[0][0];
    int left_diagonal_location{0};
    for(int i=0;i<b.get_dimension();i++){
        if(left_diagonal_val==b.get_board_layout()[i][left_diagonal_location]&&left_diagonal_val!='_'){
            winner=left_diagonal_val;
            diagonal_equal=true;
            left_diagonal_location++;
        }else{
            diagonal_equal=false;
            break;
        }
    }
    if(diagonal_equal){
        return winner;
    }

    //right diagonal check
    unsigned char right_diagonal_val=b.get_board_layout()[0][(b.get_dimension())-1];
    int right_diagonal_location{2};
    for(int i=0;i<b.get_dimension();i++){
        if(right_diagonal_val==b.get_board_layout()[i][right_diagonal_location]&&right_diagonal_val!='_'){
            winner=right_diagonal_val;
            diagonal_equal=true;
            right_diagonal_location--;
        }else{
            diagonal_equal=false;
            break;
        }
    }
    if(diagonal_equal){
        return winner;
    }

    winner='?'; //when there s no winner
    return winner;
}