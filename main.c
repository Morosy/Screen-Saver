#include <ncurses.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

#include "color-define.h"

int main(void)
{
    initscr();
    start_color();
    init_color_pairs();
    srand((unsigned)time(NULL));

    int sleep_time = 2000000 / COLS; // 2秒で1行進む
    int running_number = TIME / (2 * LINES);

    for(int t = 0; t < TIME; t++){
        for(int y = 0; y < LINES; y++){
            int hidden_or_disp = rand() % 2; // 0 is hidden or 1 is displayed
            int color_random = (rand() % COLOR_NUMBER) + 1;
            while(color_random == BLACK){
                color_random = (rand() % COLOR_NUMBER) + 1;
            }

            for(int x = 0; x < COLS; x++){
                attron(COLOR_PAIR(color_random));
                mvprintw(y, x, " ");
                attroff(COLOR_PAIR(color_random));
                refresh();
                usleep(sleep_time);
            }
        }
    }

    endwin();

    return 0;
}
