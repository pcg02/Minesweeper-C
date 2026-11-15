#ifndef BOARD_GUI_H
#define BOARD_GUI_H

#include "raylib.h"

#define FPS 60

#define BOMB_CELL RED
#define UNKNOWN_CELL GRAY

#define OFFSET_BETWEEN_CELLS 10

struct BoardGui {
    unsigned int screenWidth;
    unsigned int screenHeight;
    const char* windowName;
};


void initializeBoardGui(struct BoardGui* boardGui);

void layoutCells(struct Board* board);
    
#endif 