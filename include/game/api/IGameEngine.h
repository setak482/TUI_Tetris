#ifndef TETRIS_IGAMEENGINE_H
#define TETRIS_IGAMEENGINE_H
#include "./GameSnapshot.h"
#include "./InputAction.h"

class IGameEngine {
public:
    virtual ~IGameEngine() = default;

    virtual void update(double delta_time) = 0;
    virtual void handle_input(InputAction action) = 0;
    virtual GameSnapshot snapshot() const = 0;
};

#endif //TETRIS_IGAMEENGINE_H
