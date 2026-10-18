#ifndef BOARD_H
#define BOARD_H

#include <stdint.h>

struct Board
{
    unsigned int board_size;
    uint8_t* raw_data; // first numbers -> bombs around; max number -> bomb
    unsigned int num_bombs;
};

void initializeBoard(struct Board* board, unsigned int board_size, unsigned int num_bombs);

void drawAsciiBoard(struct Board* board);

void terminateBoard(struct Board* board);

void generateBombPositions(struct Board* board);

#endif // BOARD_H