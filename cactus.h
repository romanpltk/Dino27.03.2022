#pragma once
#include "SFML/Graphics.hpp"
#include "settings.h"
#include "game.h"

class Cactus {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	static std::string barrier_file_names[];
	
public:
	Cactus(float x, float y);
	void update();
	void draw(sf::RenderWindow&);
	sf::FloatRect getHitBox();
	sf::Vector2f getPosition();
	sf::Sprite getSprite();
	
};
