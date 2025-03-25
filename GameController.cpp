#include "GameController.h"

GameController::GameController()
    : view(&model), inputHandler(&model) {
   
    connect(&model, &GameModel::gameUpdated, &view, QOverload<>::of(&GameView::update));

    
    connect(&gameTimer, &QTimer::timeout, &model, &GameModel::update);
    gameTimer.start(16);  // ~60 FPS

    // Install input handler
    view.installEventFilter(&inputHandler);
}

void GameController::start() {
    view.show();
}
