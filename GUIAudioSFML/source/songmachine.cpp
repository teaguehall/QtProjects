#include "songmachine.h"
#include <SFML/Audio.hpp>

SongMachine::SongMachine(void) :
    pmusic(new sf::Music)
{
    this->state = stopped;
}

SongMachine::~SongMachine(void)
{
}

/* Get methods */
std::string SongMachine::getState(void)
{
    switch(this->state)
    {
    case MachineState::playing :
        return "Playing";
    case MachineState::paused :
        return "Paused";
    case MachineState::stopped :
        return "Stopped";
    default :
        return "Error getting state information";
    }
}


/* Method to select new song */
void SongMachine::setPathNFile(const std::string& pathNFile)
{
    this->pathNFile  = pathNFile;
    pmusic->openFromFile(this->pathNFile);
    this->state = stopped;
}

void SongMachine::pausePlay(void)
{
    if(this->state == stopped || this->state == paused)
    {
        pmusic->play();
        this->state = playing;
    }
    else
    {
        pmusic->pause();
        this->state = paused;
    }
}

void SongMachine::restart(void)
{
}



