
#include <iostream>
#include <SFML/Graphics.hpp>
#include <time.h>
using namespace sf;

//SFML 2.5.1 을 설치해줘야 실행가능

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "The Game");
    sf::Event event;

    while (window.isOpen())
    {
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        window.clear(Color::Black);
        window.display();
    }

    return 0;
}

