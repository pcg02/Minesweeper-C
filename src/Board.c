#include "Board.h"

#include <stdlib.h>
#include <time.h>

void initializeBoard(struct Board* board, unsigned int board_size, unsigned int num_bombs) {
    board->board_size = board_size;
    board->raw_data = malloc(board_size * board_size * sizeof(uint8_t));
    board->num_bombs = num_bombs;

    for (unsigned int i = 0; i <= board_size * board_size; i++) {
        board->raw_data[i] = 0u;
    }

}

void drawAsciiBoard(struct Board* board) {
    printf("\nData:\nboard_size: %u\n num_bombs: %u\n\n", board->board_size, board->num_bombs);
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

void generateBombPositions(struct Board* board) {
    unsigned int placed_bombs = 0;
    int i=0;

    srand(time(NULL));
    
    while (placed_bombs < board->num_bombs) {
        int new_pos = (rand() % (board->board_size * board->board_size)) + 1;
        if (board->raw_data[new_pos] != UINT8_MAX) {
            board->raw_data[new_pos] = UINT8_MAX;
            placed_bombs++;
        }
        i++;
        printf("[Bomb gen] iteration: %d, placed bombs: %u, num_bombs: %u", i, placed_bombs, board->num_bombs);
    }
}