#include "GameModel.h"

GameModel::GameModel() {
    ball = QRect(300, 200, 15, 15);
    leftPaddle = QRect(50, 150, 10, 80);
    rightPaddle = QRect(540, 150, 10, 80);
}

void GameModel::update() {
    ball.translate(ballSpeedX, ballSpeedY);
    checkCollisions();
    emit gameUpdated();
}

void GameModel::checkCollisions() {
    if (ball.top() <= 0 || ball.bottom() >= 400) ballSpeedY *= -1;
    if (ball.intersects(leftPaddle) || ball.intersects(rightPaddle)) ballSpeedX *= -1;
    if (ball.left() <= 0) { scoreRight++; resetBall(); }
    else if (ball.right() >= 600) { scoreLeft++; resetBall(); }
}

void GameModel::resetBall() {
    ball.moveTo(300, 200);
    ballSpeedX *= -1;
}

//#include "GameModel.moc" 
