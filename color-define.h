#ifndef COLOR_DEFINE_H
#define COLOR_DEFINE_H

#include <ncurses.h>

#define TIME 60 // running seconds

// Define color pairs
// 背景色を変更
// 文字色は常に黒
#define COLOR_NUMBER 8

#define BLACK 1
#define RED 2
#define GREEN 3
#define YELLOW 4
#define BLUE 5
#define MAGENTA 6
#define CYAN 7
#define WHITE 8

/*
    @brief カラーペアの初期化
*/
void init_color_pairs(void);



void init_color_pairs()
{
    init_pair(BLACK, COLOR_BLACK, COLOR_BLACK);
    init_pair(RED, COLOR_BLACK, COLOR_RED);
    init_pair(GREEN, COLOR_BLACK, COLOR_GREEN);
    init_pair(YELLOW, COLOR_BLACK, COLOR_YELLOW);
    init_pair(BLUE, COLOR_BLACK, COLOR_BLUE);
    init_pair(MAGENTA, COLOR_BLACK, COLOR_MAGENTA);
    init_pair(CYAN, COLOR_BLACK, COLOR_CYAN);
    init_pair(WHITE, COLOR_BLACK, COLOR_WHITE);
}


#endif
