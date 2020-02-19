#include "Application.hpp"

int main()
{
    LPaF::_Application::Application game=LPaF::_Application::Application();
    game.init();
    return game.Execute();
}
