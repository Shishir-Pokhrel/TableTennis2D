#pragma once
#include <QWidget>
#include "GameModel.h"

class GameView : public QWidget {
    Q_OBJECT
public:
    explicit GameView(GameModel *model, QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    GameModel *model;
};
