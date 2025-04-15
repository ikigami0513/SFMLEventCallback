#include "Game.hpp"

int main(int argc, char* argv[]) {
    Game game;

    while (!game.GetWindow()->IsDone()) {
        game.Update();
        game.Render();
        game.RestartClock();
    }
}
