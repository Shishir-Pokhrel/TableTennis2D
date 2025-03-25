#include <QApplication>
#include "GameController.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    GameController game;
    game.start();

    return app.exec();
}
