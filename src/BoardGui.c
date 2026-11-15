#include "BoardGui.h"
#include "Board.h"

#include "raylib.h"

void initializeBoardGui(struct BoardGui* boardGui) {
    InitWindow(boardGui->screenWidth, boardGui->screenHeight, boardGui->windowName);
    SetTargetFPS(FPS);
}

void layoutCells(struct Board* board) {
    const int cellSize = 25;

    int posX = 0;
    int posY = 0;

    for (unsigned int i = 1; i <= board->board_size * board->board_size; i++) {
    
        posX = posX + cellSize + OFFSET_BETWEEN_CELLS;

        DrawRectangle(posX, posY, cellSize, cellSize, UNKNOWN_CELL);

        if (i % board->board_size == 0) {
            posY += (cellSize + OFFSET_BETWEEN_CELLS);
            posX = 0;
        }
        
    }
}
