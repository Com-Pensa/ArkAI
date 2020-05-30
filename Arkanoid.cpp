#include "Arkanoid.hpp"

Arkanoid::Arkanoid()
{   
    this-> mainWindow = new sf::RenderWindow(
        sf::VideoMode(800, 600),
        "ArkAI",
        sf::Style::Default);
}

void Arkanoid::run()
{   
    while (this->mainWindow-> isOpen())
    {
        while (this-> mainWindow-> pollEvent(this-> mainWindowEvent))
        {
            switch (this-> mainWindowEvent.type)
            {
                case sf::Event::Closed:
                    this-> mainWindow-> close();
                    break;
            }
        }

        this-> mainWindow-> clear(sf::Color::Black);

        this-> mainWindow-> display();
    }
}