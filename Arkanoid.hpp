#ifndef ARKANOID_HPP
#define ARKANOID_HPP

#include <SFML/Graphics.hpp>

class Arkanoid
{   
private:
    sf::RenderWindow  *mainWindow;
    sf::Event          mainWindowEvent;
    
public:
    Arkanoid();
    
    void run();
};

#endif