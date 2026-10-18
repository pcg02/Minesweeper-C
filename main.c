#include <stdio.h>

#include "include/Board.h"

int main() {

    printf("Hello world\n");

    struct Board _board;
    initializeBoard(&_board, 10, 10);

    printf("Board initialized with size: %d\n", _board.board_size);
    drawAsciiBoard(&_board);

    generateBombPositions(&_board);
    drawAsciiBoard(&_board);
    
    return 0;
}