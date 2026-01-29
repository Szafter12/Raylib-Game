#include "Game/Game.h"

int main(void)
{
    Game game;

    InitWin(&game, 800, 600, 60);
    run();

    CloseWindow();
    return 0;
}