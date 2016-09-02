#ifndef SONGMACHINE_H
#define SONGMACHINE_H
#include <string>
#include <memory>

namespace sf{class Music;}

class SongMachine
{
    enum MachineState{playing, paused, stopped};

    public:
        SongMachine(void);
        ~SongMachine(void);
        std::string getState(void);
        void setPathNFile(const std::string &pathNFile);
        void pausePlay(void);
        void restart(void);


    private:
        std::unique_ptr<sf::Music> pmusic;
        MachineState state;
        std::string pathNFile;
        std::string fileName;
};

#endif // SONGMACHINE_H
