#include "GameView.h"
#include <QPainter>

GameView::GameView(GameModel *model, QWidget *parent)
    : QWidget(parent), model(model) {
    setFixedSize(600, 400);
}

void GameView::paintEvent(QPaintEvent *) {
    QPainter painter(this);

    //  background
    painter.fillRect(rect(), Qt::black);

    //  ball
    painter.setBrush(Qt::white);
    painter.drawEllipse(model->ball);

    //  bats
    painter.drawRect(model->leftPaddle);
    painter.drawRect(model->rightPaddle);

    //  score sheet
    painter.setPen(Qt::white);
    painter.drawText(150, 30, QString::number(model->scoreLeft));
    painter.drawText(450, 30, QString::number(model->scoreRight));
}
