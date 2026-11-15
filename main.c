#include <stdio.h>

#include "include/Board.h"
#include "include/BoardGui.h"

int main() {

    printf("Hello world\n");

    struct Board _board;
    initializeBoard(&_board, 10, 10);

    printf("Board initialized with size: %d\n", _board.board_size);
    drawAsciiBoard(&_board);

    generateBombPositions(&_board);
    drawAsciiBoard(&_board);

    struct BoardGui _gui;
    _gui.screenWidth = 800;
    _gui.screenHeight = 600;
    _gui.windowName = "Minesweeper";
    initializeBoardGui(&_gui);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        
        layoutCells(&_board);

        EndDrawing();
    }

    
    return 0;
}