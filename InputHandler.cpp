#include "InputHandler.h"

InputHandler::InputHandler(GameModel *model) : model(model) {}

bool InputHandler::eventFilter(QObject *, QEvent *event) {
    if (event->type() == QEvent::KeyPress) {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        
        // Left paddle (W/S keys)
        if (keyEvent->key() == Qt::Key_W && model->leftPaddle.top() > 0) {
            model->leftPaddle.translate(0, -model->paddleSpeed);
        } else if (keyEvent->key() == Qt::Key_S && model->leftPaddle.bottom() < 400) {
            model->leftPaddle.translate(0, model->paddleSpeed);
        }

        // Right paddle (Up/Down keys)
        if (keyEvent->key() == Qt::Key_Up && model->rightPaddle.top() > 0) {
            model->rightPaddle.translate(0, -model->paddleSpeed);
        } else if (keyEvent->key() == Qt::Key_Down && model->rightPaddle.bottom() < 400) {
            model->rightPaddle.translate(0, model->paddleSpeed);
        }

        return true;
    }
    return false;
}
