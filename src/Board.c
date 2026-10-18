#include "Board.h"

#include <stdlib.h>

void initializeBoard(struct Board* board, unsigned int board_size) {
    board->board_size = board_size;
    board->raw_data = malloc(board_size * board_size * sizeof(uint8_t));

    for (unsigned int i = 0; i <= board_size * board_size; i++) {
        board->raw_data[i] = 0u;
    }

}

void drawAsciiBoard(struct Board* board) {
    for (unsigned int i = 1; i <= board->board_size * board->board_size; i++) {
        printf("%d", board->raw_data[i]);
        if (i % board->board_size == 0) {
            printf("\n");
        }
    }
}

void terminateBoard(struct Board* board) {
    free(board->raw_data);
    free(board);
}
