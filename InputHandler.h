#pragma once
#include <QObject>
#include <QKeyEvent>
#include "GameModel.h"

class InputHandler : public QObject {
    Q_OBJECT
public:
    InputHandler(GameModel *model);

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

private:
    GameModel *model;
};
