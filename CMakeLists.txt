cmake_minimum_required(VERSION 3.16) 
project(PingPongGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)  

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(PingPongGame
    main.cpp
    GameController.cpp
    GameModel.cpp
    GameView.cpp
    InputHandler.cpp
)

target_link_libraries(PingPongGame Qt6::Widgets)
