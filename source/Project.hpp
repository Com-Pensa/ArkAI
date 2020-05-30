#ifndef PROJECT_HPP
#define PROJECT_HPP

#include "arkanoid/Arkanoid.hpp"

class Project
{   
private:
    Arkanoid *arkanoidGame;

public:
    Project();
    
    void run();
};

#endif
