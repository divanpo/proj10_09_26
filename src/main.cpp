#include "vibe.hpp"
#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
	float size = 500.f;
	sf::RenderWindow window( sf::VideoMode( { 1000, 1000 } ), "SFML works!" );

	while ( window.isOpen() )
	{
		while ( const std::optional event = window.pollEvent() )
		{
			if ( event->is<sf::Event::Closed>() )
				window.close();
		}

		window.clear();
		drawCircles(window, 100, 1000);
		window.display();
	}
}