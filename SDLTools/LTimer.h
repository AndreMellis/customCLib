#ifndef LTIMER_HEADER_
#define LTIMER_HEADER_

#include <SDL3/SDL.h>
#include <stdio.h>
#include <string>
#include <sstream>

class LTimer
{
private:
    Uint32 mStartTicks; //the clock time when the timer started
    Uint32 mPausedTicks; // the clock time when the time paused

    //timer status
    bool mPaused;
    bool mStarted;

public:
    LTimer();

    //clock actions
    void start();
    void stop();
    void pause();
    void unpause();

    //get the timers time
    Uint32 getTicks();

    //check status
    bool isStarted();
    bool isPaused();
};

#endif
