#include "Project.hpp"

Project::Project()
{   
    this-> arkanoidGame = new Arkanoid();
}

void Project::run()
{   
    this-> arkanoidGame-> run();
}