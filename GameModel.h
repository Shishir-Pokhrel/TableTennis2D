#pragma once
#include <QObject>
#include <QRect>

class GameModel : public QObject {
    Q_OBJECT
public:
    GameModel();


    QRect ball;
    QRect leftPaddle;
    QRect rightPaddle;
    int scoreLeft = 0;
    int scoreRight = 0;

    // parameters
    int ballSpeedX = 5;
    int ballSpeedY = 5;
    const int paddleSpeed = 10;

    void update();
    void resetBall();

signals:
    void gameUpdated();

private:
    void checkCollisions();
};
