#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
public:
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void increase() = 0;
    virtual void decrease() = 0;
    virtual void updateSpeed(int speed) = 0;

    virtual ~Engine() {}
};

#endif