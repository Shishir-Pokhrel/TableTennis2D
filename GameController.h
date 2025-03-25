#pragma once
#include <QObject>
#include <QTimer>
#include "GameModel.h"
#include "GameView.h"
#include "InputHandler.h"

class GameController : public QObject {
    Q_OBJECT
public:
    GameController();
    void start();

private:
    GameModel model;
    GameView view;
    InputHandler inputHandler;
    QTimer gameTimer;
};
