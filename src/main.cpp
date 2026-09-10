#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window( sf::VideoMode( { 200, 200 } ), "SFML works!" );

	sf::CircleShape shape( 50.f );
	sf::CircleShape shape2( 25.f );
	shape2.setPosition({150/2, 150/2});
	shape.setPosition({100/2, 100/2});

	shape.setFillColor( sf::Color::Red );
	shape2.setFillColor( sf::Color::White );

	while ( window.isOpen() )
	{
		while ( const std::optional event = window.pollEvent() )
		{
			if ( event->is<sf::Event::Closed>() )
				window.close();
		}

		window.clear();
		window.draw( shape );
		window.draw( shape2 );
		window.display();
	}
}