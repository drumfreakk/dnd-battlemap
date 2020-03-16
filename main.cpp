#include <SFML/Graphics.hpp>
#include <iostream>
#include "baseField.h"


int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!", sf::Style::Close);

    sf::Texture texture;
    if(!texture.loadFromFile("/home/kip/CLionProjects/sfmltest/tex.png")){std::cout << "help" << std::endl;}
    texture.setSmooth(true);

    sf::Sprite sprites[5];
    for(int i = 0; i < 5; i++) {
        sprites[i].setTexture(texture);
        sprites[i].setPosition(0, i*100);
    }

    sf::Vertex vertices[2] = {sf::Vertex(sf::Vector2f(150, 150), sf::Color::Blue), sf::Vertex(sf::Vector2f(200, 200), sf::Color::Red)};

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Right) {
                    std::cout << "the right button was pressed" << std::endl;
                    std::cout << "mouse x: " << event.mouseButton.x << std::endl;
                    std::cout << "mouse y: " << event.mouseButton.y << std::endl;
                }
                if (event.mouseButton.button == sf::Mouse::Left) {
                    std::cout << "the left button was pressed" << std::endl;
                    std::cout << "mouse x: " << event.mouseButton.x << std::endl;
                    std::cout << "mouse y: " << event.mouseButton.y << std::endl;
                }
            }

//            if (event.type == sf::Event::MouseWheelScrolled){
//                if (event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel) {
//                    std::cout << "wheel type: vertical" << std::endl;
//                }
//                else if (event.mouseWheelScroll.wheel == sf::Mouse::HorizontalWheel) {
//                    std::cout << "wheel type: horizontal" << std::endl;
//                }
//                else {
//                    std::cout << "wheel type: unknown" << std::endl;
//                }
//                std::cout << "wheel movement: " << event.mouseWheelScroll.delta << std::endl;
//                std::cout << "mouse x: " << event.mouseWheelScroll.x << std::endl;
//                std::cout << "mouse y: " << event.mouseWheelScroll.y << std::endl;
//            }
        }

        window.clear(sf::Color::Black);
        for (int i = 0; i < 5; i++) {
            window.draw(sprites[i]);
        }
        window.draw(vertices, 2, sf::Lines);
        window.display();
    }

    return 0;
}
