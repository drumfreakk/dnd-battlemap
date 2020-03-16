//
// Created by kip on 15/03/2020.
//

#ifndef SFMLTEST_BASEFIELD_H
#define SFMLTEST_BASEFIELD_H


#include <SFML/Graphics.hpp>

class baseField : public sf::Drawable {
private:
    sf::VertexArray m_vertices;
    sf::Texture m_texture;

    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

};


#endif //SFMLTEST_BASEFIELD_H
