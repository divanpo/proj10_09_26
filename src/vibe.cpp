#include <SFML/Graphics.hpp>

sf::Color returnAnyColor(int seed) {
	int ostatok = seed % 6;
	switch (ostatok) {
	case (1):
		return sf::Color::Red;
	case (2):
		return sf::Color::Green;
	case (3):
		return sf::Color::Blue;
	case (4):
		return sf::Color::White;
	case (5):
		return sf::Color::Magenta;
	}
	return sf::Color::Yellow;
}

void drawCircles(sf::RenderWindow& window, int amount, float windowSize) {
	for (int i = amount; i > 0; i--) {
		sf::CircleShape shape(i*5);
		shape.setPosition({ windowSize / 3, windowSize / 3 });
		shape.setFillColor(returnAnyColor(i));
		window.draw(shape);
	}
}