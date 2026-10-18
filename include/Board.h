#ifndef BOARD_H
#define BOARD_H

typedef enum {Empty, Bomb} CellStatus;

struct Board
{
    unsigned int board_size;
    CellStatus* board_data;
    
};

void initializeBoard(struct Board* board, unsigned int board_size);

void drawAsciiBoard(struct Board* board);

void terminateBoard(struct Board* board);

#endif // BOARD_H