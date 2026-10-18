#ifndef BOARD_H
#define BOARD_H

#include <stdint.h>

struct Board
{
    unsigned int board_size;
    uint8_t* raw_data; // first numbers -> bombs around; max number -> bomb
};

void initializeBoard(struct Board* board, unsigned int board_size);

void drawAsciiBoard(struct Board* board);

void terminateBoard(struct Board* board);

#endif // BOARD_H